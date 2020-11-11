#include <iostream>
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a[12] = { 1,3,5,2,10,11,12,13,4,5,0,1 };
	int kl = 0;
	int n = 1;
	for (int i = 0;i < 12;i++)
	{
		
		if (a[i] < a[i + 1])
		{
			n++;
		}
		else if(n!=1)
		{
			n = 1;
			kl += 1;
		     }


	}
	printf("%d", kl);
	return 0;
}
