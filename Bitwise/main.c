#include <stdio.h>
#include <stdlib.h>

#include "bitwise.h"



int main()
{	
	//test flipBit
	printf("------flipBit test:-------\f");
	int flipBit_input = 9;
	int flipBit_pos = 2;
	printf("flipBit_pos : %u\f", flipBit_pos);
	printf("input : %u\f", flipBit_input);
	printf("input_binary: ");
	printBinary(flipBit_input);
	int flipBit_result = flipBit(flipBit_input, flipBit_pos);
	printf("result : %u\f", flipBit_result);
	printf("result_binary:");
	printBinary(flipBit_result);
	printf("--------------------------\f\f");

	


	//02.test isBitSet
	printf("------isBitSet test:------\f");
	int isBitSet_input = 29;
	int isBitset_pos = 3;
	printf("isBitset_pos : %u\f", isBitset_pos);
	printf("input : %u\f", flipBit_input);
	printf("input_binary: ");
	printBinary(isBitSet_input);
	bool result = isBitSet(isBitSet_input , isBitset_pos);
	printf("result: %d \f", result);
	printf("--------------------------\f\f");



	exit(0);
}
