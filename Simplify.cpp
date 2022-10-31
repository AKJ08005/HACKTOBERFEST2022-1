
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long int size;
    cin >> size;
    vector<pair<long long int,long long int>>v;
    for(int i=0;i<size;i++){
        long long int height,breadth;
        cin >> height >> breadth;
        if(breadth>height){
            swap(height,breadth);
        }
        v.push_back({height,breadth});
    }
    sort(v.begin(),v.end());
    long long int count = 2*v[v.size()-1].first;
    for(int i=0;i<size;i++){
        count += 2*v[i].second;
    }
    cout << count << "\n";
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;cin >> t;
while(t--){
    solve();
}
    
    return 0;
}
