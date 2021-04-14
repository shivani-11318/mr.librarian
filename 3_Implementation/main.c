#include "header.h"

int main()
{
	int choice = 0, i;

	printf("\t###########################################################################");
	printf("\n\t############              Library management System            ############");
	printf("\n\t############                (By SHIVANI SINGH)                 ############");
	printf("\n\t###########################################################################");
	do
	{
		printf("\n\t--MENU--\n \n 1. Add A New Book\n 2. Search a book \n 3. Display Complete Information\n 4. Display All Books of An Author\n 5. List Titles of a Book\n 6. List Count of Books (Issued & On Stock)\n 7. To Issue a Book \n 8. To Return a Book \n 9. Add A New Member\n 10.Exit the program\n\n\t Enter your choice <1-10>: ");
		scanf("%i", &choice);

		switch (choice)
		{
		case 1:
			Addbook();
			break;
		case 2:
			Searchbook();
			break;
		case 3:
			Displaybook();
			break;
		case 4:
			Author();
			break;
		case 5:
			Titlelist();
			break;
		case 6:
			Stock();
			break;
		case 7:
			Issue();
			break;
		case 8:
			bookret();
			break;
		case 9:
			Addmembr();
			break;
		case 10:
			Exit();
		default:
			printf(" ! Invalid Input...\n");
		}
	} while (choice != 10);
	return (0);
}