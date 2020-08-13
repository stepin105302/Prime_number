#include "unity.h"
#include "Prime_header.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime1(void)
{
    TEST_ASSERT_TRUE(prime(2));
}


void test_prime2(void)
{
    TEST_ASSERT_FALSE(prime(4));
}

void test_prime3(void)
{
    TEST_ASSERT_EQUAL(NEITHER_PRIME_NOR_COMPOSITE, prime(1));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime1);
  RUN_TEST(test_prime2);
  RUN_TEST(test_prime3);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
