#include <iostream>
#include <climits>
using namespace std;

int mixelement(int arr[] , int size){
    int max1 = INT_MAX;
    for(int i =0; i < size; i++){
        if(arr[i]<max1)
         max1 = arr[i];
    }
    return max1;
    
}


int main() {
int myarr[100];
int n;
cout<<"give value of n:";
cin>>n;

for (int i = 0; i < n; i++)
{
    cout<<"give the elements of array:";
 cin>>myarr[i];
}
cout<<"4th element is"<<myarr[2]<<endl;
cout<< "the min element is :"<<mixelement(myarr, n )<<endl;
for (int i = 0; i < 10; i++)
{
   
 cout<<myarr[i];}

    return 0;
}