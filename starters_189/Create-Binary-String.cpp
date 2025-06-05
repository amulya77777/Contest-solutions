#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while(T--){
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        long long best = 0;
        long long cross_val = max(C, D);

        for(int z = 0; z <= N; ++z){
            int o = N - z;
            long long single0 = 1LL * z * A;
            long long single1 = 1LL * o * B;
            long long cross  = 1LL * z * o * cross_val;

            long long total = single0 + single1 + cross;
            best = max(best, total);
        }

        cout << best << "\n";
    }
    return 0;
}
