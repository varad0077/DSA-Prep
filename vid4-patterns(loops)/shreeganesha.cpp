#include<iostream>
using namespace std;

int main(){
    cout<<"shree ganeshay nam:"<<endl;
int n;
cin>>n;
int i =1;
char val = 'A';
while(i<=n){
    int j =1;
   
    while(j<=n){
        char ch = val;
        cout<<ch;
        j=j+1;
        val++;

    }
    
    cout<<endl;
    i=i+1;
}



}