// selection sort
#include <iostream>
using namespace std;

void select(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

/

int main(){

    int arr[] = {45,35,35,35,35,3,53,53,5,4,3434,34,3,43,43,4,34,14,235235,325,235,235,23,531,35,3,52,5,235,325,325,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    select(arr,n);
    for (int i = 0; i<n ;i++){
        cout<<arr[i]<< " ";
    }







}






// int main()
// {

//     int arr[] = {7, 5, 4, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     select(arr, n);
//     cout << "sorted array--";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }