#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
/**
 * @brief Adds a new book to the records and simultaneously update the file
 * 
 */
void Addbook();

/**
 * @brief Searches for a book in the inventory
 * 
 */
void Searchbook();

/**
 * @brief Displays the book's name, author, titles, state, etc.
 * 
 */
void Displaybook();

/**
 * @brief Displays all books of the entered author
 * 
 */
void Author();

/**
 * @brief Displays all titles of a book
 * 
 */
void Titlelist();

/**
 * @brief Gives the count of books, issued and in-stock
 * 
 */
void Stock();

/**
 * @brief Borrows a book and update the book's state in inventory
 * 
 */
void Issue();

/**
 * @brief Returns a book and update the book's state in inventory
 * 
 */
void bookret();

/**
 * @brief Adds a new member to the records and simultaneously update the file 
 * 
 */
void Addmembr();

/**
 * @brief Function to exit the menu
 * 
 */
void Exit();

char info[500];

/**
 * @brief Structure of a book
 * 
 */
struct
{
	int bid;
	char bname[25];
	char author[25];
	int nooftitles;
	char titles[500];
	int status;
} book;

/**
 * @brief Structure of a member
 * 
 */
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