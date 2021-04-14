#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

void Addbook();
void Searchbook();
void Displaybook();
void Author();
void Titlelist();
void Stock();
void Issue();
void bookret();
void Addmembr();
void Exit();

char info[500];

struct
{
	int bid;
	char bname[25];
	char author[25];
	int nooftitles;
	char titles[500];
	int status;
} book;
struct
{
	int mid;
	char mname[25];
	char department[25];
	int availibcard;
	int phno;

} membr;

//initializing the files used in the program

FILE *librecord;
FILE *membrrecord;
FILE *fp1;
FILE *fp2;
FILE *temp1;
FILE *temp2;


#endif