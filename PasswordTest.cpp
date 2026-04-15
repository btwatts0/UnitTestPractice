/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/*
TEST(PasswordTest, two_repeats_three_total)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
}

TEST(PasswordTest, one_repeat_three_total)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("baa"));
}

TEST(PasswordTest, five_repeats_six_total)
{
	Password my_password;
	ASSERT_EQ(5, my_password.count_leading_characters("aaaaab"));
}

TEST(PasswordTest, character_returning_after_repeat_stops)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aaba"));
}

TEST(PasswordTest, empty)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""));
}

TEST(PasswordTest, numbers)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("112"));
}

TEST(PasswordTest, case_change)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Aab"));
}

TEST(PasswordTest, repeating_uppercase)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("AAab"));
}

TEST(PasswordTest, different_uppercase)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("AB"));
}

TEST(PasswordTest, special_characters)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("_AB"));
}

TEST(PasswordTest, space)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters(" "));
}

TEST(PasswordTest, one_lowercase)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case("a"));
}

TEST(PasswordTest, one_uppercase)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case("A"));
}

TEST(PasswordTest, lowercase_uppercase)
{
	Password my_password;
	EXPECT_TRUE(my_password.has_mixed_case("aA"));
}

TEST(PasswordTest, uppercase_lowercase)
{
	Password my_password;
	EXPECT_TRUE(my_password.has_mixed_case("Aa"));
}

TEST(PasswordTest, empty_mixed)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case(""));
}

TEST(PasswordTest, multiple_same_case)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case("aaaa"));
}

TEST(PasswordTest, multiple_same_case_then_mix)
{
	Password my_password;
	EXPECT_TRUE(my_password.has_mixed_case("aaaaA"));
}

TEST(PasswordTest, lowercase_special)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case("a%"));
}

TEST(PasswordTest, uppercase_special)
{
	Password my_password;
	EXPECT_FALSE(my_password.has_mixed_case("A%"));
}

TEST(PasswordTest, special_then_mixed)
{
	Password my_password;
	EXPECT_TRUE(my_password.has_mixed_case("^aA"));
}
*/

TEST(PasswordTest, generic_unique_characters)
{
	Password my_password;
	ASSERT_EQ(7, my_password.unique_characters("Password"));
}