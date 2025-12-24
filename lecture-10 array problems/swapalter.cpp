#include <iostream>
using namespace std;

int main() {

    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10; i++){
        cout<<arr[i];
    } 
cout<<endl;
//     int start=0;
//     int end = 10-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start = start+2;
//         end = end-2;
//     }

//      for(int i = 0; i<10; i++){
//         cout<<arr[i];
//     } 
// cout<<endl;

for(int i = 0; i<10; i+=2){
        if(i+1<10){
            swap(arr[i],arr[i+1]);
        }
    }
     for(int i = 0; i<10; i++){
        cout<<arr[i];
    } 
    return 0;
}