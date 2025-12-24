#include <iostream>
using namespace std;

char lowercase(char ch){
    if((ch>='a' && ch <='z')){
        return ch;
    }
    else {
         char temp = ch - 'A' + 'a'; 
          return temp;
    }

  

}


int main() {
char x;

    cin>>x;
    cout<<lowercase(x);

    return 0;
}
