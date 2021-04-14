#include "header.h"

void Displaybook()
{
	librecord = fopen("librecord.txt", "a+");
	printf("\nBookid\tName\tAuthor\tStatus\tNo.\tTitles\n", info);
	do
	{
		fgets(info, 500, librecord);
		printf("%s\n", info);
	} while (!feof(librecord));

	fclose(librecord);

	membrrecord = fopen("membrrecord.txt", "a+");
	printf("\nMid\tName\tDept\tPh.no\tAvailablecards\n");

	do
	{
		fgets(info, 500, membrrecord);
		printf("%s\n", info);
	} while (!feof(membrrecord));

	fclose(membrrecord);
}