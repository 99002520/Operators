#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "operator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_Remainder(void);
void test_Increment(void);
void test_decrement(void);
void test_checkequality(void);
void test_checkinequality(void);
void test_greaterthan(void);
void test_Lesserthan(void);
void test_LogicalAND(void);
void test_LogicalOR(void);
void test_LogicalNOT(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "Remainder", test_divide);
  CU_add_test(suite, "Increment", test_divide);
  CU_add_test(suite, "decrement", test_divide);
  CU_add_test(suite, "checkequality", test_divide);
  CU_add_test(suite, "checkinequality", test_divide);
  CU_add_test(suite, "greaterthan", test_divide);
  CU_add_test(suite, "Lesserthan", test_divide);
  CU_add_test(suite, "LogicalAND", test_divide);
  CU_add_test(suite, "LogicalOR", test_divide);
  CU_add_test(suite, "LogicalNOT", test_divide);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_Remainder(void){
 CU_ASSERT(0 == Remainder(0, 1));
  
 
 CU_ASSERT(0 == Remainder(1, 0));   
}
void test_Increment(void){
  
  CU_ASSERT(11 == Increment(10));
  
}
void test_decrement(void){
  
  CU_ASSERT(9 == Decrement(10));
  }
void test_checkequality(void){
  
  CU_ASSERT(1 == checkequality(1, 1));
  
  CU_ASSERT(0 == checkequality(0, 1));
}
void test_checkinequality(void){

  CU_ASSERT(1 == checkinequality(1, 1));
  
  CU_ASSERT(0 == checkinequality(0, 1));
}
void test_greaterthan(void){
  
  CU_ASSERT(10 == greaterthan(10, 1));
  
  CU_ASSERT(1 == greaterthan(10, 1));


}
void test_Lesserthan(void){
 CU_ASSERT(1 == lesserthan(10, 1));
  
  CU_ASSERT(10 == lesserthan(10, 1));
}
void test_LogicalAND(void){
  
   CU_ASSERT(1 == logicalAND(1, 1));
  
  CU_ASSERT(0 == logicalAND(0, 1));

}
void test_LogicalOR(void){
  
  CU_ASSERT(1 == logicalOR(0, 1));
  
  CU_ASSERT(0 == logicalOR(0, 0));

}
void test_LogicalNOT(void){
  
  CU_ASSERT(0 == logicalNOT(1));
  
  CU_ASSERT(1 == logicalNOT(0));

}













