#include <bits/stdc++.h>
using namespace std;

int main() {
    // Speeds up cin/cout — matters when N and Q can be large (e.g. up to 1e5 or more)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    // Store all N roots of the polynomial
    vector<long long> roots(n);
    for (int i = 0; i < n; i++)
        cin >> roots[i];

    // Sorting lets us binary-search for any value in O(log N)
    sort(roots.begin(), roots.end());

    while (q--) {
        long long x;
        cin >> x;

        // Find the first root that is >= x
        auto it = lower_bound(roots.begin(), roots.end(), x);

        if (it != roots.end() && *it == x) {
            // x itself is one of the roots => the factor (x - x) = 0
            // => P(x) = 0
            cout << "0" << "\n";
        } else {
            // Because we already ruled out an exact match above,
            // every root from 'it' to the end of the array is
            // STRICTLY GREATER than x.
            //
            // - root > x  =>  (x - root) is NEGATIVE
            // - root < x  =>  (x - root) is POSITIVE  (doesn't affect sign)
            //
            // So the sign of P(x) is decided purely by how many
            // "greater than x" roots there are (i.e. how many
            // negative factors get multiplied together).
            long long countGreater = roots.end() - it;

            // Even number of negative factors -> they cancel out -> POSITIVE
            // Odd number of negative factors  -> one sign left over -> NEGATIVE
            if (countGreater % 2 == 0)
                cout << "POSITIVE" << "\n";
            else
                cout << "NEGATIVE" << "\n";
        }
    }

    return 0;
}