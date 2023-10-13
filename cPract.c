#include<stdio.h>

int len(char*);
char* copy(char*, char*);
char* chr(char*, char);
char* cat(char*, char*);

int main()
{
    char arr[35]; 
    char arr0[30];
    
    
    
    printf("enter to 1 string\n");
    scanf("%[^\n]%*c", arr);

    printf(" enter to 2 string \n");
    scanf("%[^\n]%*c", arr0);
    
    printf("\n%s", cat(arr, arr0));   
}

char* cat(char* arr, char* arr1)
{
    //char* str = arr;

    int i = 0;
    int j = 0;
    while( arr1[j] != '\0' )
    {
        //str[i] = arr[i];
        if( arr[i] == '\0' )
        {   
            arr[i] = ' ';
            ++i;
            while(arr1[j] != '\0')
            {
            arr[i] = arr1[j];
            ++j;
            ++i;
            }
        }
        ++i;
    }
    return arr;
}

char* chr(char* arr, char a)
{
    for(int i = 0; arr[i] != '\0'; ++i)
    {
        if(arr[i] == a)
        {
            return arr + i; 
        }
    }
    return NULL;
}
/*
char* copy(char* arr1, char* arr2){
    int i = 0;
    while( arr1[i]  != '\0')
    {
        arr2[i] = arr1[i];
        ++i;
    }
    arr2[i] = '\0';
  return arr2;
}


int len(char* arr)
{
    int i = 0;
    while( arr[i] != '\0'){
        ++i;
    }
    return i;
}*/
