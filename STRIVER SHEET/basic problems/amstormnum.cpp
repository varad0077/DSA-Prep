#include <iostream>
#include <cmath>
using namespace std;

bool armstormnum(int num){
     int lght = (int)(log10(num)+1) ;

     int temp = num;
     int sum = 0;

     cout<<lght;

     while(temp > 0){
        int digit = temp % 10;

        sum += pow(digit,lght);

      temp= temp/10;


     }
     return num == sum;

}

int main() {

    cout<<armstormnum(153);

    return 0;
}
