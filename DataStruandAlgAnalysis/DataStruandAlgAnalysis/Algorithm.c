#include "Algorithm.h"

int MaxSubsequenceSum(const int A[],int N)
{
	int ThisSum,MaxSum=0,i,j,k;
	for(i=0;i<=N;i++)
	{
		for (j=0;j<=N;j++)
		{
			ThisSum = 0;
			for (k=0;k<=j;k++)
			{
				ThisSum += A[k];
			}

			if (ThisSum > MaxSum) MaxSum = ThisSum;
			
		}
	}
	return MaxSum;
}
