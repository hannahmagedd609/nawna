#include <gtest/gtest.h>
#include "my_component.h"  // Include your component header

TEST(MyComponentTest, HandlesPositiveInput) {
  MyComponent comp;
  EXPECT_EQ(comp.process(1), 1);
}

TEST(MyComponentTest, HandlesNegativeInput) {
  MyComponent comp;
  EXPECT_EQ(comp.process(-1), -1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
