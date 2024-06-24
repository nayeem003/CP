#include <iostream>
using namespace std;

// Function to calculate the number of distinct locations where S can be placed inside B
int countDistinctLocations(int x, int y, int z, long long k) {
    int count = 0;

    // Iterate through all possible coordinates where S can be placed
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= y; ++j) {
            for (int l = 1; l <= z; ++l) {
                long long volume = 1LL * i * j * l; // Calculate the volume of S
                if (volume == k) { // If the volume matches k, increment the count
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k; // Read the dimensions of box B and the volume of S

        int result = countDistinctLocations(x, y, z, k);
        cout << result << endl; // Output the result for this test case
    }

    return 0;
}
