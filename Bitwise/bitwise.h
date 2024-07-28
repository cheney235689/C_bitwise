#ifndef __BITWISE_H__
#define __BITWISE_H__

#include <stdbool.h>

void printBinary(int num);
int flipBit(int n, int pos);
bool isBitSet(int n, int pos);
int setBit(int n, int pos);
int clearBit(int n, int pos);
unsigned int reverseBits(unsigned int n);
int countOnes(int n);
int singleNumber(int* nums, int numsSize);
#endif
