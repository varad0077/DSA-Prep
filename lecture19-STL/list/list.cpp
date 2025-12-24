#include <iostream>
#include<list>

using namespace std;

int main() {

list<int> l;
list<int> n(5,100);
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
l.push_back(5);

for(int i:n){
    cout<<i<<" ";
}cout<<endl;
cout<<"size of list"<<l.size();
l.erase(l.begin(),l.end());

    for(int i:l){
    cout<<"after ";
    cout<<i<<" ";
}cout<<endl;
cout<<"size of list"<<l.size();

    return 0;

}
