#include <iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> getDivisores(int N){
    vector<int> ans;

    for(int i = 1 ; i <=N; i++){
        if(N %  i==0){
            ans.push_back(i);
        }
    }
    return ans;
}
//optimal
vector<int> getDivisoresopti(int N){
    vector<int> ans;

    for(int i = 1 ; i * i <=N; i++){
        if(N %  i==0){
            ans.push_back(i);


            if(i != N/i){
                ans.push_back(N/i);
            }
        }
    }
    return ans;
}

int main() {

    int N;
    cin>>N;
    vector<int> result = getDivisoresopti(N);

    for(int x : result){
        cout<<x<<" ";
    }

    return 0;
}