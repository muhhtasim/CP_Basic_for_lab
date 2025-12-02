// how many subarrays have sum = 0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long prefix = 0;
    long long countZeroSum = 0;

    map<long long, long long> freq;

    freq[0] = 1;  // prefix sum 0 exists before starting

    for (int i = 0; i < n; i++) {
        prefix += a[i];

        // If this prefix sum occurred before, then some subarray sums to 0
        countZeroSum += freq[prefix];

        // increase frequency
        freq[prefix]++;
    }

    cout << countZeroSum << endl;

    /*
    5
    2 -2 3 -3 4

    output : 2
    */




    //Task: Count number of subarrays whose sum is exactly K
    /*

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long prefix = 0, ans = 0;
    map<long long, long long> freq;

    freq[0] = 1;

    for (int x : a) {
        prefix += x;

        ans += freq[prefix - k];

        freq[prefix]++;
    }

    cout << ans << endl;
}

 input : 6 5
       1 2 3 2 -1 2
*/


}
