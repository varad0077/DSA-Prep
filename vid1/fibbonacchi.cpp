#include<iostream>
using namespace std;
int main(){
    cout<<"hello duniya"<<endl;
    int a = 0;
    int b = 1;
    int n= 10;
    
    for (int i = 0; i < n; i++)
    {
        
        int nextnum = a + b;
        cout<<nextnum<<" ";
        a = b;
        b=nextnum;
      
    }
}