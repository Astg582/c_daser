#include<stdio.h>
#include<limits.h>
int max3(int*, int);


int main()
{
	int s = 10;
	int arr[s];

	printf("enter to value\n");
	for(int i = 0; i < s; ++i)
	{
		scanf("%d", &arr[i]);
	}

	printf("this is 3th max num %d\n", max3(arr, s));

}

int max3(int* arr, int s)
{
	int count = s - 1;
for( int i = 0; i < 3; ++i)
{
	int index = 0;
	int max = INT_MIN;
	for(int j = 0; j <= count; ++j)
	{
		if(arr[j] > max)
		{
			index = j;
			max = arr[j];
				
		}
		
	}	
	int tmp = arr[s-1-i];
	arr[s-1-i] = arr[index];
	arr[index] = tmp;

	--count;
	if(i == 2)
	{
		return max;
	}	
}
	return 0;
}

