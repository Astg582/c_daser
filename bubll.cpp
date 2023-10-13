#include<iostream>
void sort(int*, const int);

int main() 
{
    const int size = 5;
    

    int arr[size] = {};
    std::cout << "enter to arr value" << std::endl;
 
    for(int i = 0;  i < size; ++i)
    {
    std::cin >> arr[i];
    }
    
    sort(arr, size);

    std::cout << " this is a sort arr" << std::endl;
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

}

void sort(int* arr, const int s)
{
    for(int i = 0; i < s; ++i)
    {
        for(int j = 0; j < s; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
    
        }

    }
}
