#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, l, r;
	    cin >> n >> l >> r;
	    
	    vector<int> a(n);
	    
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    
	    int leftcarrots = 0;
	    int rightcarrots = 0;
	    
	    vector<bool> checker(n, true);
	    for(int i=0; i<n; i++){
	        if(i>=l-1 && i<=r-1){
	            checker[i] = false;
	        }
	    }
	    
	    for(int i=0; i<n; i++){
	        if(checker[i]==true && i<l-1){
	            leftcarrots = max(leftcarrots, leftcarrots + a[i]);
	        }
	        if(checker[i]==true && i>r-1){
	            rightcarrots = max(rightcarrots, rightcarrots + a[i]);
	        }
	    }
	    
	    cout << max(leftcarrots, rightcarrots) << endl;
	}

}
