// Copyright 2024 Novostroev Ivan
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeFunctions, CheckPrime) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_FALSE(checkPrime(25));
  EXPECT_TRUE(checkPrime(29));
}

TEST(PrimeFunctions, NPrime) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(5), 13);
  EXPECT_EQ(nPrime(10), 29);
}

TEST(PrimeFunctions, NextPrime) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(PrimeFunctions, SumPrime) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
}
