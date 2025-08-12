#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        // Calculate the number of subscriptions needed
        int subscriptions = ceil((double)N / 6);

        // Calculate the total cost
        int totalCost = subscriptions * X;

        cout << totalCost << endl;
    }

    return 0;
}
