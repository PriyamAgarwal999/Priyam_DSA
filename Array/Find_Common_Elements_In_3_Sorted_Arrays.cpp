#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    unordered_map<int,int>ma;
    unordered_map<int,int>mb;
    unordered_map<int,int>mc;
    vector<int>v;
    for(int i=0;i<n1;i++) ma[A[i]]++;
    for(int i=0;i<n2;i++) mb[B[i]]++;
    for(int i=0;i<n3;i++) mc[C[i]]++;
    for(int i=0;i<n1;i++){
        if(ma[A[i]] and mb[A[i]] and mc[A[i]]){
            v.push_back(A[i]);
            ma[A[i]]=0;
        }
    }
    return v;
}
int main(){
int a[20],b[20],c[20],n1,n2,n3;
cin>>n1>>n2>>n3;
for(int i=0;i<n1;i++) cin>>a[i];
for(int i=0;i<n2;i++) cin>>b[i];
for(int i=0;i<n3;i++) cin>>c[i];
vector<int>v=commonElements(a,b,c,n1,n2,n3);
for(auto i:v){
    cout<<i<<endl;
}
    return 0;
}