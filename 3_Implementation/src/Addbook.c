#include "header.h"

void Addbook()
{
	int i;
	book.status = IN;

	//opening the librecord file
	librecord = fopen("librecord.txt", "a+");

	printf("Enter The number of The Book :(Integer) \n");
	scanf("%d", &book.bid);
	printf("Enter The Name of The Book :\n");
	scanf("%s", book.bname);
	printf("Enter The Name of Author :\n");
	scanf("%s", book.author);
	printf("Enter The Number of Titles Of The Book:(Integer)\n");
	scanf("%d", &book.nooftitles);
	fprintf(librecord, "\n%d\t%s\t%s\t%d\t%d\t", book.bid, book.bname, book.author, book.status, book.nooftitles);
	printf("Enter The Titles Of The Book : \n");

	for (i = 0; i < book.nooftitles; i++)
	{
		scanf("%s", book.titles);
		fprintf(librecord, "%s\t", book.titles);
	}
	fclose(librecord);

	printf(" (' ' ) A New Book has been Added Successfully...\n");
}