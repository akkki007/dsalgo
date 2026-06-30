#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    std::vector<int> amounts(n) ;
	    for(int i=0;i<n;i++){
	        int temp = 0;
	        cin >> temp;
	        amounts.push_back(temp);
	    }
	    
        for(int amount:amounts){
            cout << amount << endl;
        }

	}

}
