#include<iostream>
using namespace std;

bool chekpalindrome(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(arr[s] != arr[e]){
            return 0;

        }
        else{
            s++;
            e--;

        }
    }
    return 1;
}


void reversed(char arr[], int n){
int s = 0;
int end = n-1;

while(s<end){
  swap(arr[s++], arr[end--]);
}

}

int main() {

  char ch[10];

 
cin.getline(ch,10);

  cout<<ch<<endl;

  int i = 0;
  int cnt = 0;
  while(ch[i] != '\0'){
   cnt++;
   i++;
  }
  cout<<"len is "<<cnt;


    
    reversed(ch,cnt);
    cout<<endl;
    cout<<chekpalindrome(ch,cnt)<<endl;
    cout<<ch;
    return 0;
}