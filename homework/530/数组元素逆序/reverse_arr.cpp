#include "reverse_arr.h"

void reverse_arr(int arr[],int capacity)
{
    int new_arr[capacity] = {0};

    for (int j = 0; j < capacity; j++)
    {
        new_arr[j] = arr[j];
    }
    
    for (int k = 0; k < capacity; k++)
    {
        cout<<" "<< arr[k] <<endl;
    }
}