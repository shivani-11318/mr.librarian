#include "header.h"

void Titlelist()
{
	int i;
	char Target[500];
	int Found = 0;

	if ((librecord = fopen("librecord.txt", "r")) == NULL)
		printf(" ! The file is empty...\n\n");
	else
	{
		printf("\nEnter The Book Name :");
		scanf("%s", Target);

		while (!feof(librecord) && Found == 0)
		{
			fscanf(librecord, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);

			if (strcmp(Target, book.bname) == 0)
			{
				Found = 1;
				break;
			}

			for (i = 0; i < book.nooftitles; i++)
				fscanf(librecord, "%s", book.titles);
		}

		if (Found)
		{
			//printf("The Name of book is:               %s\n",book.bname);
			printf("\nThe Titles:\n");
			for (i = 0; i < book.nooftitles; i++)
			{
				fscanf(librecord, "%s", book.titles);
				printf("%d.%s......\n", i + 1, book.titles);
			}
		}
		else if (!Found)
			printf(" ! There is no such Entry...\n");
		fclose(librecord);
	}
}
