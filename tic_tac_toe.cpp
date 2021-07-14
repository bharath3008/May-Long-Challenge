#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    vector<string> v(3),v_at(3);
	    cin >> v[0] >> v[1] >> v[2] ;
	    v_at = v;
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
	            if(i<j){
	                swap(v_at[i][j],v_at[j][i]);
	            }
	        }
	    }
	    ll x_ct=0,o_ct=0;
	    for(auto row : v){
	        x_ct+= count(begin(row),end(row),'X');
	        o_ct+= count(begin(row),end(row),'O');
	    }
	    auto check = [&](char c){
	        bool ans = false;
	        for(auto row : v) ans|= count(begin(row),end(row),c) == 3;
	        for(auto col : v_at) ans|= count(begin(col),end(col),c) == 3;
	        ans |= v[0][0] == c && v[1][1] == c && v[2][2] == c;
	        ans |= v[2][0] == c && v[1][1] == c && v[0][2] == c;
	        return ans;
	    };
	    bool x_win =  check('X'); 
	    bool o_win = check('O');
	    ll ans = 2;
	    if ((x_win && o_win) or !(x_ct == o_ct or x_ct == o_ct + 1) or (x_win && !(x_ct == o_ct + 1)) or (o_win && !(x_ct == o_ct)))ans = 3;
        else if ((x_ct == o_ct or x_ct == o_ct + 1) && ((x_win + o_win == 1) or (x_ct + o_ct == 9)))ans = 1;
	    cout << ans << "\n" ;    
	        }
	
	return 0;
}
