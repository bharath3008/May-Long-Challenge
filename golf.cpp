#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    
    ll n,x,k;
    cin >> n >> x >> k;
    if((x%k==0)||((n+1-x)%k==0))        // checking whether ball hits the hole or not
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);       //fast input and output
	cin.tie(0);
	cout.tie(0);
	int t ;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}
