#include<iostream>
using namespace std;

int main(){
    cout<<"shree ganeshay nam:"<<endl;
int n;
cout<<"enter the value of n: ";
cin>>n;
int row =1;
while(row<=n){
    int col =1;
    while(col<=row){
        cout<<"*";
        col++;

    }
    cout<<endl;
    row++;
}



}