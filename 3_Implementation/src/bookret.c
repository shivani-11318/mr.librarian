#include "header.h"

void bookret()
{
	int mid, i, Found1 = 0, Found2 = 0, flag = 0;
	char retbookname[20];
	temp1 = librecord;
	temp2 = membrrecord;
	printf("\nEnter The userid of the Member :\n");
	scanf("%d", &mid);
	if ((membrrecord = fopen("membrrecord.txt", "r")) == NULL)
		printf(" ! The file is empty...\n\n");
	else
	{
		while (!feof(membrrecord) && Found1 == 0)
		{
			fscanf(membrrecord, "%d %s %s %d %d ", &membr.mid, membr.mname, membr.department, &membr.phno, &membr.availibcard);
			if (mid == membr.mid)
			{
				Found1 = 1;
			}
		}
		if (Found1)
		{
			if (membr.availibcard >= 5)
			{
				printf(" ! Error...\n");
			}
			else
			{
				printf("\nEnter The Name of book :");
				scanf("%s", retbookname);
				if ((librecord = fopen("librecord.txt", "r")) == NULL)
					printf(" ! The file is empty\n\n");
				else
				{
					while (!feof(librecord) && Found2 == 0)
					{
						fscanf(librecord, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);
						if (strcmp(retbookname, book.bname) == 0)
							Found2 = 1;
						for (i = 0; i < book.nooftitles; i++)
							fscanf(librecord, "%s", book.titles);
					}
					if (Found2)
					{
						if (book.status == 1)
						{
							printf(" ! Error:Book already in stock...\n");
						}
						else
						{

							fp2 = fopen("fp2.txt", "w");
							if ((temp2 = fopen("membrrecord.txt", "a+")) == NULL)
								printf(" ! The file is empty...\n\n");
							else
							{
								while (!feof(temp2))
								{
									fscanf(temp2, "%d %s %s %d %d ", &membr.mid, membr.mname, membr.department, &membr.phno, &membr.availibcard);

									if (mid == membr.mid)
									{
										membr.availibcard++;
										fprintf(fp2, "\n %d\t%s\t%s\t%d\t%d\t", membr.mid, membr.mname, membr.department, membr.phno, membr.availibcard);
									}
									else
									{
										fprintf(fp2, "\n %d\t%s\t%s\t%d\t%d\t", membr.mid, membr.mname, membr.department, membr.phno, membr.availibcard);
									}
									if (feof(temp2))
										break;
								}
							}
							fclose(temp2);
							fclose(fp2);

							fp1 = fopen("fp1.txt", "w");
							if ((temp1 = fopen("librecord.txt", "r")) == NULL)
								printf(" ! The file is empty...\n\n");
							else
							{
								while (!feof(temp1))
								{
									fscanf(temp1, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);
									if (feof(temp1))
										break;
									if (strcmp(retbookname, book.bname) != 0)
									{
										fprintf(fp1, "\n%d\t%s\t%s\t%d\t%d    \t", book.bid, book.bname, book.author, book.status, book.nooftitles);
									}
									else
									{
										fprintf(fp1, "\n%d\t%s\t%s\t%d\t%d\t", book.bid, book.bname, book.author, 1, book.nooftitles);
									}
									for (i = 0; i < book.nooftitles; i++)
									{
										fscanf(temp1, "%s", book.titles);
										fprintf(fp1, "%s\t", book.titles);
									}
								}
							}
							fclose(temp1);
							fclose(fp1);
							fclose(librecord);
							fclose(membrrecord);
							printf("('') Book Successfully Returned...\n");
							remove("librecord.txt");
							rename("fp1.txt", "librecord.txt");
							remove("membrrecord.txt");
							rename("fp2.txt", "membrrecord.txt");
						}
					}
					else if (!Found2)
						printf("! There is no such Book...\n");
				}
			}
		}
		else if (!Found1)
			printf("! Invalid User id...\n");
	}
}