#include <iostream>
using namespace std;

int main() {
int arr[10]= {9,13,45,78,20,25,46,48,99,100};
int n = 10;

for(int i = n-1 ; i>=1 ; i--){
    for(int j = 0 ; j <= i-1; j++){
        if (arr[j] > arr[j+1]) 
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
}

for(int x : arr){
    cout<<x<<" ";
} 

    return 0;
}