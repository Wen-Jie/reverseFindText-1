#include "unity.h"
#include "reverseFindText.h"

void setUp(void){}
void tearDown(void){}

void test_reverseFindText_find_A_in_A_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, reverseFindText("A", "A")) ;
}

void test_reverseFindText_find_B_in_A_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("A", "B")) ;
}

void test_reverseFindText_find_C_in_ABCD_should_return_3(void)
{
	TEST_ASSERT_EQUAL(3, reverseFindText("ABCD", "C")) ;
}

void test_reverseFindText_find_A_in_ABCD_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, reverseFindText("ABCD", "A")) ;
}

void test_reverseFindText_find_E_in_ABCD_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("ABCD", "E")) ;
}

void test_reverseFindText_find_CD_in_ABCD_should_return_3(void)
{
	TEST_ASSERT_EQUAL(3, reverseFindText("ABCD", "CD")) ;
}

void test_reverseFindText_find_AB_in_ABCD_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, reverseFindText("ABCD", "AB")) ;
}

void test_reverseFindText_find_ED_in_ABCD_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("ABCD", "ED")) ;
}

void test_reverseFindText_find_DE_in_ABCD_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("ABCD", "DE")) ;
}

void test_reverseFindText_find_ABC_in_ABCD_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, reverseFindText("ABCD", "ABC")) ;
}

void test_reverseFindText_find_BCD_in_ABCDEFG_should_return_2(void)
{
	TEST_ASSERT_EQUAL(2, reverseFindText("ABCDEFG", "BCD")) ;
}

void test_reverseFindText_find_GB_in_ABCDEFGBCHI_should_return_7(void)
{
	TEST_ASSERT_EQUAL(7, reverseFindText("ABCDEFGBCHI", "GB")) ;
}

void test_reverseFindText_find_RARAT_in_RRARAARARARATUI_should_return_9(void)
{
	TEST_ASSERT_EQUAL(9, reverseFindText("RRARAARARARATUI", "RARAT")) ;
}

void test_reverseFindText_find_ABC_in_RRARAARARARATUI_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("RRARAARARARATUI", "ABC")) ;
}

void test_reverseFindText_find_lad_in_Hello_my_name_is_Alladin_should_return_21(void)
{
	TEST_ASSERT_EQUAL(21, reverseFindText("Hello, my name is Alladin", "lad")) ;
}

void test_reverseFindText_find_coma_and_space_in_Hello_my_name_is_Alladin_should_return_6(void)
{
	TEST_ASSERT_EQUAL(6, reverseFindText("Hello, my name is Alladin", ", ")) ;
}

