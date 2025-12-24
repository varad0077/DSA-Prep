#include <iostream>
using namespace std;

int main() {

    
int arr[10]= {9,13,45,78,20,25,46,48,99,100};
int n = 10;


for(int i = 0; i<=n-1; i++){
    int j = i;
    while(j > 0 && arr[j-1]> arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
}


for(int x : arr){
    cout<<x<<" "; 
} 


    return 0;
}