#include "header.h"

void Addmembr()
{
	int i;

	membrrecord = fopen("membrrecord.txt", "a+");
	printf("Enter The userid of the Member(Integer) :\n");
	scanf("%d", &membr.mid);
	printf("Enter The Name of the Member :\n");
	scanf("%s", membr.mname);
	printf("Enter The Department\n");
	scanf("%s", membr.department);

	printf("Enter The phone number of the member:\n");
	scanf("%d", &membr.phno);
	membr.availibcard = 5;
	fprintf(membrrecord, "\n%d\t%s\t%s\t%d\t%d\t", membr.mid, membr.mname, membr.department, membr.phno, membr.availibcard);
	fclose(membrrecord);
	printf("\n (' ') Added  A New member Successfully...\n");
}