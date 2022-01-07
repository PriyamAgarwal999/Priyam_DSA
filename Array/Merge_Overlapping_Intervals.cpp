#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    vector<pair<int,int>>v;
    stack<pair<int,int>>s;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    s.push({v[0].first,v[0].second});
    for(int i=1;i<n;i++){
        int start1=s.top().first;
        int end1=s.top().second;
        int start2=v[i].first;
        int end2=v[i].second;
        if(end1<start2){
            s.push({v[i].first,v[i].second});
        }
        else{
            s.pop();
            end1=max(end1,end2);
            s.push({start1,end1});
        }
    }
    while(!s.empty()){
        cout<<s.top().first<<" "<<s.top().second<<endl;
        s.pop();
    }
    return 0;
}