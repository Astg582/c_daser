#include<stdio.h>
#include<stdlib.h>

int oj(int**, int, int);

int main ()
{
    int s1 = 0;
    int s2 = 0;

    printf("Enter to size 1");
    scanf("\n%d", &s1);

    printf("Enter to size 2");
    scanf("\n%d", &s2);

    int** mtrix = (int**) malloc(sizeof(int*) * s1);

        
        for(int i = 0; i < s1; ++i)
        {
            mtrix[i] =(int*) malloc(sizeof(int) * s2);
        }
    
        printf(" enter to arr values ");
        for(int i = 0; i < s1; ++i)
        {
            for(int j = 0; j < s2; ++j)
            {
                scanf("%d", &mtrix[i][j]);
            }
        }

        for(int i = 0; i < s1; ++i)
        {
            for(int j = 0; j < s2; ++j)
            {
                printf("%d ", mtrix[i][j]);
            }
            printf("\n");
        }

    printf("\n%d", oj(mtrix, s1, s2));

    for(int i = 0; i < s1; ++i)
    {
        free(mtrix[i]);
    }

    free(mtrix);
}

int oj(int** a, int s1, int s2)
{
    int sum = 0;
    for(int i = 0; i < s1; ++i)
    {
        for(int j = 0; j < s1; ++j)
        {
            sum += a[i][s1-i-1];
        }
    }

        return sum;
}

