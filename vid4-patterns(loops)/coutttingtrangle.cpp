#include<iostream>
using namespace std;

int main(){
    cout<<"shree ganeshay nam:"<<endl;
int n;
cin>>n;
//int count=1;
int i =1;

while(i<=n){
    int j =i;
    //int val =i;

    while(j<=i+i){
        cout<<j <<" ";
      //  val++;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}



}