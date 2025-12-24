#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
    for(int i = 1 ; i<=n; i++ ){
        for(int j = 1; j<= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    for(int i = 1 ; i<=n; i++ ){
        for(int j = 1; j<= i;j++){
            cout<<j;
        }
        cout<<endl;
    }
for(int i = 1 ; i<=n; i++ ){
        for(int j = 1; j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 1 ; i<=n; i++ ){
        for(int j = 1; j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }


     for(int i = 1 ; i<=n; i++ ){

        // to print space
        for(int j = 1; j<=n-i;j++){
            
            cout<<" ";
        }

        // to print star
        for(int j = 1; j<=2*i-1;j++){
            
            cout<<"*";
        }

        // to print space
        for(int j = 1; j<n-i;j++){
            
            cout<<" ";
        }
        cout<<endl;
    }


     for(int i = 1 ; i<=n; i++ ){

        // to print space
        for(int j = 1; j<=i-1;j++){
            
            cout<<" ";
        }

        // to print star
        for(int j = 1; j<=(n-i)*2+1;j++){
            
            cout<<"*";
        }

        // to print space
        for(int j = 1; j<i-1-i;j++){
            
            cout<<" ";
        }
        cout<<endl;
    }

  for(int i = 1 ; i<=2*n-1; i++ ){

    int star =i;

        if(i>n) star = 2*n-i;
        for(int j = 1; j<=star;j++){
            cout<<"*";
        }

       
        
        cout<<endl;
    }


// new
bool b = 1;
  for(int i = 1 ; i<=n; i++ ){

    int start  = 1;
    if (i % 2==0) start = 1;
    else start = 0;

 
    for(int j = 1; j<=i;j++){
            cout << start ;
            start = 1 - start;
        }

       
        
        cout<<endl;
    }

//new patern

      for(int i = 1 ; i<=n; i++ ){

        for(int j = 1; j<=i;j++){
            cout<<j;
        }
         for(int k = 1; k<=(n-i)*2;k++){
            cout<<" ";
        }
        for(int j = 1; j<=i;j++){
            cout<<i-j+1;
        }
        
        cout<<endl;
    }



    

    
// gpt

for(int i = 1 ; i <= n ; i++ ){

    for(int j = 1; j <= i; j++){
        cout << j;
    }

    // corrected line (<= instead of <)
    for(int k = 1; k <= (n - i) * 2; k++){
        cout << " ";
    }

    for(int j = i; j >= 1; j--){
        cout << j;
    }

    cout << endl;
}



    return 0;
}