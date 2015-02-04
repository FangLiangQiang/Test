#include <stdio.h>
#include "Algorithm.h"
const int B[] ={9,-1,-3,5,7,-9,6};
void main(void)
{ 
	int MaxSum=0;
	 MaxSum = MaxSubsequenceSum(B,7);
	 printf("%d\r\n",MaxSum);
}