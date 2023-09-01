#include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>& nums,int k){
    int n=nums.size();
    int cs=0;
    int ms=0;
    for(int i=0;i<k;i++){
        cs+=nums[i];
    }
    ms=cs;
    for(int i=k;i<n;i++){
        cs+=nums[i];
        cs-=nums[i-k];
        ms=max(ms,cs);
    }
    return ms;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int result = maxsubarray(nums,k);
    cout<<result<<endl;
    return 0;
}
