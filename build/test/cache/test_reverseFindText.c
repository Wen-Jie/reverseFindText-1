#include "reverseFindText.h"
#include "unity.h"


void setUp(void){}

void tearDown(void){}



void test_reverseFindText_find_A_in_A_should_return_1(void)

{

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((reverseFindText("A", "A"))), (((void *)0)), (_U_UINT)9, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_B_in_A_should_return_minus1(void)

{

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reverseFindText("A", "B"))), (((void *)0)), (_U_UINT)14, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_C_in_ABCD_should_return_3(void)

{

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((reverseFindText("ABCD", "C"))), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_A_in_ABCD_should_return_1(void)

{

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((reverseFindText("ABCD", "A"))), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_E_in_ABCD_should_return_minus1(void)

{

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reverseFindText("ABCD", "E"))), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_CD_in_ABCD_should_return_3(void)

{

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((reverseFindText("ABCD", "CD"))), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_AB_in_ABCD_should_return_1(void)

{

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((reverseFindText("ABCD", "AB"))), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_ED_in_ABCD_should_return_minus1(void)

{

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reverseFindText("ABCD", "ED"))), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_DE_in_ABCD_should_return_minus1(void)

{

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reverseFindText("ABCD", "DE"))), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_ABC_in_ABCD_should_return_1(void)

{

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((reverseFindText("ABCD", "ABC"))), (((void *)0)), (_U_UINT)54, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_BCD_in_ABCDEFG_should_return_2(void)

{

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((reverseFindText("ABCDEFG", "BCD"))), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_GB_in_ABCDEFGBCHI_should_return_7(void)

{

 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((reverseFindText("ABCDEFGBCHI", "GB"))), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_RARAT_in_RRARAARARARATUI_should_return_9(void)

{

 UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((reverseFindText("RRARAARARARATUI", "RARAT"))), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_ABC_in_RRARAARARARATUI_should_return_minus1(void)

{

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((reverseFindText("RRARAARARARATUI", "ABC"))), (((void *)0)), (_U_UINT)74, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_lad_in_Hello_my_name_is_Alladin_should_return_21(void)

{

 UnityAssertEqualNumber((_U_SINT)((21)), (_U_SINT)((reverseFindText("Hello, my name is Alladin", "lad"))), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT) ;

}



void test_reverseFindText_find_coma_and_space_in_Hello_my_name_is_Alladin_should_return_6(void)

{

 UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((reverseFindText("Hello, my name is Alladin", ", "))), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT) ;

}
