#include <iostream>
using namespace std;

bool checkpali(unsigned int n){
    int x =n;
int ans = 0;
   while(n !=0){
   int  digit = n%10;
 ans = (ans * 10) + digit;
   n = n/10;


   }
   return x == ans;
}

int main() {

   int n = 121;
   ;
int ans = 0;
   while(n !=0){
   int  digit = n%10;
 ans = (ans * 10) + digit;
   n = n/10;
   }

cout<<checkpali(121)<<endl;

    return 0;
}