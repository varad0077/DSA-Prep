#include <iostream>
#include <cmath>


using namespace std;

int main() {

 int n;
 cin>>n;
 int cnt = 0;

 int cnt1 = (int)(log10(n)+1);

 while(n!=0){
    cnt++;
    n=n/10;

 }
 cout<<cnt<<endl;
 cout<<cnt1;


    return 0;
}