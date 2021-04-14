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

void test_create(void){

    start = create_ll(start,1,1,1,1,1,GREEN);
    TEST_ASSERT_EQUAL(1,start->uniq_id);
    TEST_ASSERT_EQUAL(1,start->color);


}

void addBook(void){
    
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,2,1,1,1,1,RED));
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,3,1,1,1,1,BLUE));
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,4,1,1,1,1,BLUE));
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,5,1,1,1,1,BLUE));
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,6,1,1,1,1,BLUE));
    TEST_ASSERT_EQUAL(SUCCESS, insert_end(start,2,10,20,100,100,BLUE));
}

void searchBook(void){

    TEST_ASSERT_EQUAL(SUCCESS, count_by_color(start,&col_data,BLUE));
    TEST_ASSERT_EQUAL(5,col_data.num);
}

void viewBook(void){
    TEST_ASSERT_EQUAL(SUCCESS, delete_box(start,5));
}
void deleteBook(void){
    TEST_ASSERT_EQUAL(SUCCESS, display_ll(start));

}
void updateCredentials(void){
    
    TEST_ASSERT_EQUAL(SUCCESS, find_by_id(start,3,&res));
    TEST_ASSERT_EQUAL(3, res.uniq_id);
    TEST_ASSERT_EQUAL(0,find_by_id(start,312,&res));

}


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_create);
    RUN_TEST(test_insert);
    RUN_TEST(test_count);
    RUN_TEST(test_find);
    RUN_TEST(test_maxHeight);
    RUN_TEST(test_avgVol);
    RUN_TEST(test_diff);
    


    /* Close the Unity Test Framework */
    return UNITY_END();
}





//gcc -I inc -I unity unity/unity.c  src/Addboook.c src/Addmember.c src/Author.c src/bookret.c src/Displaybook.c src/exit.c src/Issue.c src/Searchbook.c src/Stock.c src/Titlelist.c test/test.c -o testrun.exe   