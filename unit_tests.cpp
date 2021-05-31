#include "gtest/gtest.h"
#include "lists_test.hpp"
#include "tasks_test.hpp"
#include "menu_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
