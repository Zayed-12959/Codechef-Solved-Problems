#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int x = 0;
	
	
	while(true){
	    x+=10;
	    if(x>n){
	        cout << x-n << endl;
	        return 0;
	    }
	}
	
	return 0;

}
