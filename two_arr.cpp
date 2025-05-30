// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(int argc,char const * argv[])
// {
//     int arr[5][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12},
//         {13,14,15}
//     };
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<left<<setw(3)<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(int argc,char const * argv[])
// {
    
//     int arr[5][3] = {0};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<left<<setw(3)<<arr[i][j];
//         }
//     }
    
//     return 0;
// }



#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc,char const * argv[])
{
    
    // int arr[3][3] = {1,2,3,4,5};
    int arr[3][3] = {{1,2},{3,4},{5}};
    // cout<<arr[1][1];
    cout<<arr[0][4]<<endl;
    return 0;
}