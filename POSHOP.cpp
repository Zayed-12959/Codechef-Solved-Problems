#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> c;
	    for(int i=0; i<n; i++){
	        int x;
	        cin >> x;
	        c.push_back(x);
	    }
	    
	    int ans=0;
	    
	    for(int i=0; i<n; i++){
	        ans = max(ans, c[i]);
	        
	        for(int j=0; j<i; j++){
	            if(c[j]<=c[i]){
	                ans = max(ans, c[j]+c[i]);
	            }
	        }
	    }
	    
	    cout << ans << endl;
	    
	    
	    
	}
	
	return 0;

}
