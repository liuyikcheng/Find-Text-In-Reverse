#include "unity.h"
#include "FindTextInReverse.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_reverseFindText_given_A_find_A_should_return_0(void){
	TEST_ASSERT_EQUAL(0,reverseFindText("A","A"));
}

void test_reverseFindText_given_A_find_B_should_return_minus_1(void){
	TEST_ASSERT_EQUAL(-1,reverseFindText("A","B"));
}

void test_reverseFindText_given_ALL_find_L_should_return_2(void){
	TEST_ASSERT_EQUAL(2,reverseFindText("ALL","L"));
}

void test_reverseFindText_given_world_find_RL_should_return_2(void){
  TEST_ASSERT_EQUAL(2,reverseFindText("WORLD","RL"));
}

void test_reverseFindText_given_world_find_RX_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1,reverseFindText("WORLD","RX"));
}

void test_reverseFindText_given_WORLDRL_find_RL_should_return_5(void){
  TEST_ASSERT_EQUAL(5,reverseFindText("WORLDRL","RL"));
}

void test_reverseFindText_given_WORXDRL_find_RL_should_return_5(void){
  TEST_ASSERT_EQUAL(5,reverseFindText("WORXDRL","RL"));
}

void test_reverseFindText_given_alladin_find_lad_should_return_2(void){
  TEST_ASSERT_EQUAL(2,reverseFindText("alladin","lad"));
}

void test_reverseFindText_given_alladin_find_lax_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1,reverseFindText("alladin","lax"));
}

void test_reverseFindText_given_RRARARATATUI_find_RARAT_should_return_3(void){
  TEST_ASSERT_EQUAL(3,reverseFindText("RRARARATATUI","RARAT"));
}

void test_reverseFindText_given_RAT_find_empty_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1,reverseFindText("RAT"," "));
}

void test_reverseFindText_given_empty_find_RAT_should_return_minus_1(void){
  TEST_ASSERT_EQUAL(-1,reverseFindText(" ","RAT"));
}

void test_reverseFindText_given_asfasfasfasd_find_fasd_should_return_8(void){
  TEST_ASSERT_EQUAL(8,reverseFindText("asfasfasfasd","fasd"));
}

void test_reverseFindText_given_sentense_find_lad_should_return_19(void){
  TEST_ASSERT_EQUAL(19,reverseFindText("Hello my name is Alladin","lad"));
}

void test_reverseFindText_given_sentense_can__should_return_20(void){
  TEST_ASSERT_EQUAL(20,reverseFindText("can con cin cen con can cen","can"));
}

void test_reverseFindText_given_PAOEAOBG_find_AOB_return_1(void){
	TEST_ASSERT_EQUAL(1,reverseFindText("PAOBAOEG","AOB"));
}
