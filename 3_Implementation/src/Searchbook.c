#include "header.h"

void Searchbook()
{
	int i;
	char Target[25], stats[3];
	int Found = 0;

	if ((librecord = fopen("librecord.txt", "r")) == NULL)
		printf(" ! The File is Empty...\n\n");
	else
	{
		printf("\nEnter The Name Of Book : ");
		scanf("%s", Target);

		while (!feof(librecord) && Found == 0)
		{
			fscanf(librecord, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);
			if (strcmp(Target, book.bname) == 0)
				Found = 1;
			for (i = 0; i < book.nooftitles; i++)
				fscanf(librecord, "%s", book.titles);
		}

		if (Found)
		{
			if (book.status == IN)
				strcpy(stats, "IN");
			else
				strcpy(stats, "OUT");

			printf("\nThe Unique ID of The Book:  %d\nThe Name of Book is:  %s\nThe Author is:  %s\nThe Book Status:%s\n\n", book.bid, book.bname, book.author, stats);
		}

		else if (!Found)
			printf("! There is no such Entry...\n");
		fclose(librecord);
	}
}