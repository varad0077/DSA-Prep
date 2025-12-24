#include <iostream>
#include<vector>

using namespace std;

void Merge(vector<int> &arr, int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;

        }

    }
    while(left <= mid){
         temp.push_back(arr[left]);
            left++;
        }

        while(right<= high){
         temp.push_back(arr[right]);
            right++;
        }


        for(int i = low; i<= high; i++){
            arr[i]= temp[i-low];
        }
    }

void MS(vector<int> &arr , int low , int high){
    if(low>=high) return;

    int mid = ( low + high)/2;
    MS(arr, low , mid);
    MS (arr, mid+1, high);
    Merge(arr , low , mid , high);
}





void mergeSort(vector<int> &arr, int n){
    MS(arr, 0 , n-1);
}

int main() {

 vector<int> arr= {9,13,45,78,20,25,46,48,99,100};
int n = arr.size();

mergeSort(arr,n);

for(int x : arr){
    cout<<x<<" ";
} 


    return 0;
}
