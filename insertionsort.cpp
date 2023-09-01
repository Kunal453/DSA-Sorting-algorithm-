// insertion sort
#include <iostream>
using namespace std;

void insert(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i] ;
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {4, 3434, 3, 3, 35, 35, 3, 5, 35, 35, 35, 3, 53, 5, 35, 35, 35, 3, 53, 5, 35, 2, 3523, 5, 32532, 523, 5, 235, 23, 532, 5, 325, 325321, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, n);
    cout << "sorted array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void insertion(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }
// int main()
// {
//     int arr[] = {123, 34, 4, 34, 13, 13, 4, 543, 54, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertion(arr, n);
//     cout << "sorted array--";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }