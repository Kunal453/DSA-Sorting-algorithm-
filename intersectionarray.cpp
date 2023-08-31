# include <iostream>
using namespace std;

void intersection(int arr[], int si1, int arr1[] , int si2){
    for ( int i = 0; i < si1; i++){
        for ( int j = 0; j < si2; j++){
            if ( arr[i] == arr1[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arra[] = {1,2,3,4,5,6,7};
    int si1 = sizeof(arra) /sizeof(arra[0]);
    int arra1[] = {2,3,4,5,6,7,8};
    int si2 = sizeof(arra1) /sizeof(arra1[0]);

    cout << "Intrersection of the two arrays: ";

    
    intersection(arra,si1,arra1,si2);
    return 0;
}
