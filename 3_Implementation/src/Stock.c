#include "header.h"

void Stock()
{
	int i, issuecount = 0, stockcount = 0;
	char Issued[100][20];
	int Found = 0;
	if ((librecord = fopen("librecord.txt", "r")) == NULL)
		printf(" ! The file is empty...\n\n");
	else
	{
		while (!feof(librecord))
		{
			fscanf(librecord, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);
			if (book.status == IN)
			{
				stockcount++;
			}
			else
			{
				issuecount++;
			}
			for (i = 0; i < book.nooftitles; i++)
				fscanf(librecord, "%s", book.titles);
		}
		fclose(librecord);
		printf("\nCount of issued Books:%d\nCount of Books in Stock:%d\n", issuecount, stockcount - 1);
	}
}