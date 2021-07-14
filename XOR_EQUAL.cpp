#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007      //to avoid TLE 
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	int power[100005];      // size of max value N can hold
	power[0] = 1;
    for(int i=1;i<100005;i++)
        power[i] = (power[i-1]*2) % MOD;        //storing All the values from 0 to 100005 for 2 power N-1 
	while(t--){
	    ll N;
	    cin >> N;
	    cout << power[N-1] << "\n";     // Accessing a 1 value that needed
	}
	
	return 0;
}
