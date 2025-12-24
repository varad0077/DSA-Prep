#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start1= 0;
    int end =n-1;
    while(start1 < end){
        swap(arr[start1],arr[end]);
        start1++;
        end--;


    }
}
   
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main() {
int size;
cin>>size;
int arr1[6]={3,5,6,7,9,7};
int arr2[6]={5,4,6,6,8,6};
reverse(arr1,6);
reverse(arr2,6);
printarr(arr1,6);
cout<<endl;
printarr(arr2, 6);

    // Your code here

    return 0;
}