#include <iostream>
using namespace std;

// brute forse
 int bruteforseGCD(int a , int b){
    int gcd = 1;

for(int i = 1; i<=min(a , b) ; i++){

    if(a%i==0 && b%i==0){
        gcd = i;
    }
}
 return gcd;

 }

 // optimal
 int optimalseGCD(int a , int b){
    

for(int i =min(a , b); i>0 ; i--){

    if(a%i==0 && b%i==0){
        return i;
    }
    
    
}
 return 1;

 }

int main() {

   cout<<bruteforseGCD(55,110);
   cout<<optimalseGCD(55,110);

    return 0;
}