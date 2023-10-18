#include<stdio.h>
#include<stdlib.h>

//11.Օգտվելով դինամիկ հիշողությունից, իրականացնել ֆունկցիա,որը հաշվում և վերադարձնում է քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։

int** aloc_M(int); // alocating matrix
	
void fill(int**, int);  //fill matrix

void print(int**, int); //print matrix

void del(int**, int); //dealocatind matrix

int d_Aux(int** arr, int s); //diagonal sum





int main()
{
	int s = 0;

	do{
		printf("enter to size a matrix\n");
		scanf("%d", &s);
	}while(s < 2 || s > 20);

	int** mArr = aloc_M(s);
	print(mArr, s);
	
	printf("Auxiliary diagonal sum = %d \n", d_Aux(mArr, s));
    

del(mArr, s);
}




//alocating matrix
int** aloc_M(int s)
{
	int** matr = (int**) calloc(sizeof(int*), s);

	for(int i = 0; i < s; ++i)
	{
		matr[i] = (int*) calloc(sizeof(int), s);
	}

	fill(matr, s);
	return matr;
}

//fill matrix
void fill(int** arr, int s)
{
	printf("enter to value in matrix\n");
	for(int i = 0; i < s; ++i)
	{
		for(int j = 0; j < s; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

//print matrix
void print(int** arr, int s)
{
	printf("this is a new matrix\n");

	for(int i = 0; i < s; ++i)
	{
		for(int j = 0;  j < s; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


//diagonal sum
int d_Aux(int** arr, int s)
{
	int principal = 0;
	int secondary = 0;
	for(int i = 0; i < s; ++i)
	{
		for(int j = 0; j < s; ++j)
		{
			
			if(i  == j)
			{
				principal += arr[i][j];
				
			}
			
			if(j == s - 1 - i)
			{
				secondary += arr[i][j];

			}
		}
		
	}	

    printf("principal = %d\n", principal);
    //printf("secondary = %d\n", secondary);
	return secondary;
}

//dealocatind matrix
void del(int** arr, int s)
{
	for(int i = 0;  i < s; ++i)
	{
		free(arr[i]);
	}
	free(arr);
}
