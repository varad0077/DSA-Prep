#include <iostream>
#include<vector>

using namespace std;

int main() {

vector<int> v;
cout<< " size :"<<v.capacity()<<endl;
v.push_back(10);
cout<< " size :"<<v.capacity()<<endl;
v.push_back(10);
cout<< " size :"<<v.capacity()<<endl;
v.push_back(10);
cout<< " size :"<<v.capacity()<<endl;
v.push_back(12);
cout<< " front :"<<v.front()<<endl;
v.push_back(40);
cout<< " back :"<<v.back()<<endl;
v.pop_back();
cout<< " back :"<<v.back()<<endl;
return 0;
}
