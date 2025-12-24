#include<iostream>
using namespace std;

int main(){

int arr1[10];

int arr2[10]={2,7};
arr2[1]=5;
cout<<arr2[2]<<endl;

for ( int i=0; i<10; i++){
    cout<<arr2[i];
}

cout<<endl<<"fine"<<arr2[1];

int size = (sizeof(arr2)/sizeof(int));
cout<<size;

}
