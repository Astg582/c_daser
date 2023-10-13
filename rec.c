#include<stdio.h>

int fact(int);
int fibo(int);
void print(int);
void revers(int*);
void prt(int, int);
int sum(int);
int sArr(int*, int);

int main()
{
    
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num = 0;
    printf("%d", sArr(arr, 8));
/*    int m = 0;
    
    scanf("%d", &m);
    printf("%d", sum(m));

    do{
        scanf("%d", &num);
    }while( m < num);
    prt(m, num);
    for(int i = 0; i < 9; ++i)
    {
    printf("\n%d", arr[i]);
    }*/
}

int sArr(int* arr, int size)
{
    if(0 == size)
        {
            return arr[0];
        }
    return arr[size] + sArr(arr, (size -1)) ;
}


int sum (int m)
{
    if(1 == m)
    {
        return 1;
    }
   return m + (sum(m - 1));
}

void prt(int m, int n)
{
    if( m == n)
    {
        printf("\n%d", m);
        return;
    }
        printf("\n%d", m);
        prt(m - 1, n);

}

void revers(int* arr)
{
  static int i = 0;
  static int j = 8;
    if( i == j) {
        return;
    }

    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    --j;
    ++i;
    revers(arr);
}

void print(int n)
{
    if(0 >= n)
    {
        return;
    }

    printf("\n%d", n);
    return print(n-1);
}

int fibo(int n)
{
    if(0 == n)
    {
        return 0;
    }
    if(1 == n)
    {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int fact(int n)
{
    if(n <= 1){
        return 1;
    }
    return fact(n-1) * n;
}

