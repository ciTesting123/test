#include <gtest/gtest.h>
#include "/usr/include/yaml.h"

  yaml_parser_t parser;

TEST(foo, boo) {
  ASSERT_TRUE(true);
  yaml_parser_initialize(&parser);
}


