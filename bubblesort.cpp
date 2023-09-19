#include <iostream>

using namespace std;

void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 4, 22, 1, 31, 41, 2, 1241, 4, 214, 4, 214};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// void bubbleSort(int arr[], int n)
// {
//     // Iterate through the array
//     for (int i = 0; i < n - 1; i++)
//     {
//         // Compare adjacent elements
//         for (int j = 0; j < n - i - 1; j++)<
//         {
//             // If the current element is greater than the next element, swap them
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     // Define the array and its size
//     int arr[] = {5, 2, 4, 6, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Sort the array
//     bubbleSort(arr, n);

//     // Print the sorted array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }