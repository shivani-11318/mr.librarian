#include "header.h"

void Author()
{
	int i;
	char Target[500];
	int Found = 0;

	if ((librecord = fopen("librecord.txt", "r")) == NULL)
		printf(" ! The file is empty... \n\n");

	else
	{
		printf("\nEnter The Name Of Author : ");
		scanf("%s", Target);
		printf("\nBooks:");

		while (!feof(librecord))
		{
			fscanf(librecord, "%d %s %s %d %d", &book.bid, book.bname, book.author, &book.status, &book.nooftitles);

			if (strcmp(Target, book.author) == 0)
			{
				Found = 1;
				printf("\n\t%s", book.bname);
			}

			for (i = 0; i < book.nooftitles; i++)
				fscanf(librecord, "%s", book.titles);
		}

		if (!Found)
			printf(" ! There is no such Entry...\n");
		fclose(librecord);
	}
}