#include<stdio.h>
#include<stdlib.h>
int* R_aloc(int*, int*);
void C_log(int*, int); 
  

int main()
{
	int s = 0;

	printf("enter to size of array\n");
	scanf("%d", &s);

	int* arr = (int*) calloc(sizeof(int), s);
	
	printf("enter to array v\n");
	for(int i = 0;  i < s; ++i)
	{
		scanf("%d", &arr[i]);
	}
	
	arr = R_aloc(arr, &s);
	C_log(arr, s);

	free(arr);
	arr = NULL;
}

void C_log(int* arr, int s)
{
	for(int i = 0; i < s; ++i)
	{
		printf("%d ", arr[i]); 
	}
}

int* R_aloc(int* arr, int* s)
{
	int diff = 0;
	printf("ente to diff\n");
	
	do{
	scanf("%d", &diff);
	}while(diff == 0);

	if(diff < 0 && diff > -*s)
	{
		int* arr1 = (int*) calloc(sizeof(int), *s + diff);
		for(int i = 0; i < *s + diff; ++i)
		{
			arr1[i] = arr[i];
		}

		free(arr);
		arr = arr1;
		*s = *s + diff;
		return arr;
	}else if( diff > 0) {
		int* arr1 = (int*) calloc(sizeof(int), *s + diff);
		for(int i = 0; i < *s; ++i)
                {
                        arr1[i] = arr[i];
                }
		printf("enter to new arr value\n");
		for(int i = *s; i < *s + diff; ++i)
		{
			scanf("%d", &arr1[i]);
		}
		free(arr);
		arr = arr1;
		*s = *s + diff;
		return arr;
	}
	return NULL;
}
