#include "reverse_arr.h"
int main(int argc,char const * argv[])
{
    int arr[5] = {1,2,3,4,5};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    reverse_arr(arr,capacity);
    return 0;
}