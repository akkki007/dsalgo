#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            int a[n], b[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }
        int maxAddy = 0;
        int maxOm = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                maxOm = 0;
                cout << maxOm << endl;
            }
            if (b[i] == 0) {
                maxAddy = 0;
                cout << maxAddy << endl;
            }
            if (a[i] > 0) {
                maxOm++; // 3 
            }
            if(b[i] > 0){
                maxAddy++; // 2
            }
        }
        
        cout << maxAddy << " " << maxOm << endl;

        if(maxAddy > maxOm){
            cout << "ADDY" << endl;
        }
        else if(maxOm > maxAddy){
            cout << "OM" << endl;
        }
        else{
            cout << "DRAW" << endl;
        }
}
}