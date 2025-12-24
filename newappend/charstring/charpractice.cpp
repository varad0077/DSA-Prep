#include<iostream>
using namespace std;



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
    cout<<ch;
    return 0;
}