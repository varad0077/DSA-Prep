#include<iostream>
using namespace std;

int main(){
    cout<<"shree ganeshay nam:"<<endl;
int n;
cin>>n;
int count=1;
int i =1;
while(i<=n){
    int j =1;
    while(j<=n){
        cout<<count <<" ";
        count++;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}



}