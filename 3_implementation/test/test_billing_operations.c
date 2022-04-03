#include "unity.h"
#include "billing_operations.h"

#define PROJECT_NAME "phone_book"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for phone_book
 * 
 */

/**
 * @brief Testing function for name
 * 
 */
void addrecords(void);
void listrecords(void);
void modifyrecords(void);
void deleterecords(void);
void searchrecords(void);
void payment(void);

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_addrecords);
    RUN_TEST(test_listrecords);
    RUN_TEST(test_modifyrecords);
    RUN_TEST(test_deleterecords);
    RUN_TEST(test_searchrecords);
    RUN_TEST(test_payment);
    

    /* Close the Unity Test Framework */
    return UNITY_END;
}