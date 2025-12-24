#include<iostream>
using namespace std;
int main(){
    cout<<"hello duniya"<<endl;
 
    int n;

    cout<<"enter the value : ";

    cin>>n;
    bool isprime =1;
    
    for (int i = 2; i < n; i++)
    {
        
        
        if ((n%i)== 0){
        isprime =0;
      
      
    }
}

if(isprime){
    cout<<"it is prime";
}
else {
    cout <<"it is not prime";
}

}