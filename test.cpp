#include <gtest/gtest.h>
#include "/usr/include/yaml.h"

  yaml_parser_t parser;

TEST(foo, boo) {
  ASSERT_TRUE(true);
}

TEST(test, failed) {
  ASSERT_TRUE(false);
}
