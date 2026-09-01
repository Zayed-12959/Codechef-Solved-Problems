#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--){
	    int N, M;
	    cin >> N >> M;
	    char x;
	    vector<char> A;
	    vector<char> B;
	    string temp = "";

	    for(int i=0; i<N; i++){
            cin >> x;
            A.push_back(x);
	    }

	    for(int i=0; i<M; i++){
            cin >> x;
            B.push_back(x);
	    }

	    for(int i=0; i<min(A.size(), B.size()); i++){
	        if(A[i]==B[i]){
	            temp += A[i];
	        }
	        else{
	            break;
	        }
	    }

	    cout << temp << endl;

	}
return 0;
}
