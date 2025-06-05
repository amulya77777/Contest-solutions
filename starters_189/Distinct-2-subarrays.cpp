#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++) cin>>A[i];
        int ans = INT_MAX;
 
        for(int l=0;l<n;l++){
            unordered_set<int> s;
            for(int r=l;r<n;r++){
                s.insert(A[r]);
                if(s.size() > 2) break;
                if(s.size() == 2){
                    ans = min(ans,r-l+1);
                    break;
                }
            }
        }
        cout<< (ans == INT_MAX? -1:ans )<<"\n";
    }
}