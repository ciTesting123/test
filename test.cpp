#include <gtest/gtest.h>

TEST(foo, boo) {
  ASSERT_TRUE(true);
}

TEST(test, failed) {
  ASSERT_TRUE(false);
}
