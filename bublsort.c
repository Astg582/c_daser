#include<stdio.h>
#include<stdlib.h>

void buble( int*, int); //buble sort

int** addMat(int, int);  //alocation matrix
void fill(int**, int, int); //fill the matrix
void print(int**, int, int); // print a matrix
void del(int**, int); //deallocating 

void sort(int**, int, int); //sort of matrix

void sortAbs(int**, int, int); //absalut sort of matrix



int main()
{
	int r = 0;
	int c = 0;
	printf("enter to matrix row \n");
	scanf("%d", &r);
	printf("enter to colm of matrix\n");
	scanf("%d", &c);

	int** matrix = addMat(r,  c);
	printf("this ia a new mass\n");
        print(matrix, r, c);
	sortAbs(matrix, r, c);
      	printf("this is a new sortes mass\n");	
	print(matrix, r, c);
	del(matrix,  r);
}

//alocation matrix
int** addMat(int r, int c)
{
	int** matr = (int**) calloc(sizeof(int*), r);

	for(int i = 0; i < r; ++i)
	{
		matr[i] = (int*) calloc(sizeof(int*), c); 
	}
	fill(matr, r, c);
	return matr;
}

//fill the matrix
void fill(int** arr, int r, int c)
{
	printf("enter to new matrix value\n");
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{

			scanf("%d", &arr[i][j]);
		}
	}
}

//print matrix
void print(int** arr, int r, int c)
{
	for(int i = 0; i < r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}	

}	       


//deallocating 
void del(int** arr, int r)
{
	for(int i = 0; i < r; ++i)
	{
		free(arr[i]);
	}
	
	free(arr);
}


//sort of matrix
void sort(int** arr, int r, int c)
{
	for(int i = 0; i < r; ++i){
		buble(arr[i], c); 
	}
}

//absalut sort of matrix
void sortAbs(int** arr, int r, int c)
{
	int* ar1 = (int*) calloc(sizeof(int), (r*c));

	
	int k = 0;
		for(int i = 0; i < r; ++i)
		{
			for(int j = 0; j < c; ++j)
			{
				ar1[k] = arr[i][j];
				++k;
			}
		}
	

	buble(ar1, (c * r));

	k = 0;
        
                for(int i = 0; i < r; ++i)
                {
                        for(int j = 0; j < c; ++j)
                        {
                                arr[i][j] = ar1[k];
				++k;
                        }
                }
        

	free(ar1);
}

// function buble sort
void buble( int* arr, int s)
{
	int s2 = s;

	for(int i = 0; i < s-1; ++i)
	{
		for(int j = 0; j < s2 - 1; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		--s2;
	}
}

