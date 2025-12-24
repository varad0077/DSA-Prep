#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n ;

    cout<<"give the number n"<<endl;
    cin>>n;
float ans=0;
int i=0;
    while(n != 0){
        float  bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;

    }
    cout<< "the ans is :"<<ans;


}