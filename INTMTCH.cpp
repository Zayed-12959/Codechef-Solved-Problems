#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	bool interesting = false;
	
	if(abs(y-x) <= 2){
	    interesting=true;
	}
	
	if(interesting) cout << "Interesting" << endl;
	else cout << "Boring" << endl;
return 0;
}
