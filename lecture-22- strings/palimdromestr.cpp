#include <iostream>
using namespace std;

bool isvalidchar(char ch){
    if((ch>='a'&& ch<= 'z')||(ch >= 'A' && ch <='Z')||(ch >= '0' && ch<='9')) return true;

    return false;
}

char lowercase(char ch){
    if(ch>= 'a' && ch <='z')
    return ch;
    else{
        ch = ch - 'A' + 'a';
        return ch;

    }

}

bool checkpali(char arr[]){
int i = 0;
int count = 0;
    while(arr[i] !='\0' ){
        count++;
        i++;

    }
    int a = 0;
int b = count -1;

while(a<=b){
    while(a<b && !isvalidchar(arr[a])) a++;

    while(a<b && !isvalidchar(arr[b])) b--;

    if(lowercase(arr[a]) != lowercase(arr[b])){
    return false;

    }
   
         a++ ;
         b--;
    
   
 
}
 return true;
}

int main() {
char arr1[]="12321";
cout<<checkpali(arr1)<<endl;
 return 0;
}

   
