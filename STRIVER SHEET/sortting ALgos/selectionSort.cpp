#include <iostream>
using namespace std;

int main() {
int arr[10]= {9,13,45,78,20,25,46,48,99,100};
int n = 10;
for(int i = 0 ; i<n-2;i++){
    int mini= i;//asume it is minimum index
    for(int j = i ; j<n-1; j++){
        if(arr[j]<arr[mini]){
            mini = j;
            }
        
    }
    swap(arr[i], arr[mini]);
}

for(int x : arr){
    cout<<x<<" ";
} 
    return 0;
}