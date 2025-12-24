#include <iostream>
using namespace std;
// void pattern(int n){
//     for(int i = 1 ; i<=n ; i++)
//   {
//     for(int j = 1; j<i; j++){
//     cout<<" ";}
//     for(int k =n; k<=1; k++){
//         cout<<"*";
//     }
//     cout<<endl;

//   }  

// }

int main() {
    int n;
    cin>>n;
 for(int i = 1 ; i<=n ; i++)
  {
    for(int j = 1; j<i; j++){
    cout<<" ";}
    for(int k = n; k<=1; k--){
        cout<<"*";
    }
    cout<<endl;

  }  
    // for(int i =1; i<=5 ; i++){
    //     for(int j = n; j>=i ; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//    cout<<pattern(n);
    return 0;
}