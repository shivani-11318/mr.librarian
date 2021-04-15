#include "header.h"
#include "unity.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}




int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    


    /* Close the Unity Test Framework */
    return UNITY_END();
}





//gcc -I inc -I unity unity/unity.c  src/Addboook.c src/Addmember.c src/Author.c src/bookret.c src/Displaybook.c src/exit.c src/Issue.c src/Searchbook.c src/Stock.c src/Titlelist.c test/test.c -o testrun.exe   