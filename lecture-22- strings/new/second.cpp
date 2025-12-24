#include <iostream>
using namespace std;

int max = INT_MIN;
int findsecondlargest(int arr[], int size){
    if (size < 2) return -1; 

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second; 
}
int main() {

    int arr[10] = {25, 14 , 25 , 5 , 12 , 45 , 45 , 14};
 cout<<findsecondlargest(arr,10);

    return 0;
}