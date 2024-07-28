#include <stdio.h>
#include <stdlib.h>


#include "bitwise.h"
#include <stdbool.h>

void printBinary(int num ) {

    int index = 0;
    int leadingZero = 1;


    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; 
        printf("%d", bit);
        
        //if (bit == 1) {
        //    leadingZero = 0;
        //}
        //if (!leadingZero) {
        //    printf("%d", bit);
        //}
        
    }
    printf("\n");
}

int flipBit(int n, int pos) {
    return n ^ (1 << pos);
}

bool isBitSet(int n, int pos) {
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos) {
    return n | (1 << pos);
}

int clearBit(int n, int pos) {
    return n & ~(1 << pos);
}

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}