#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, MaxSize) {
 
  //Test for full array
  Stack* s2 = new Stack(5);
  for(int i = 0; i < 5; i++){
    s2->push(i);
  }
  EXPECT_EQ(5, s2->getMaxSize());
  
  delete s2;
}

TEST(StackTest, Resize) {

  //Test for expanding a full array
  Stack* s3 = new Stack(5);
  for(int i = 0; i < 5; i++){
    s3->push(i);
  }
  s3->push(6);
  EXPECT_EQ(10, s3->getMaxSize());

  delete s3;
}
