#include <iostream>
using namespace std;

int main() {
string str;
cout << "enter the str : ";
getline(cin,str);
int i = 0;

int b = str.length()-1;
while(i<=b){
    swap(str[i],str[b]);
    i++;
    b--;
}
cout<<str;
    return 0;
}
