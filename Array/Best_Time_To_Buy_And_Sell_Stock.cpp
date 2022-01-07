#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n,x,buy=INT_MAX,sell;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        buy=min(buy,v[i]);
        sell=max(sell,v[i]-buy);
    }
    cout<<sell;
    return 0;
}