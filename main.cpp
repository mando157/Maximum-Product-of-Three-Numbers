#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// <<<<<<<<<< Iterative >>>>>>>>>>

long long maxProductIterative(vector<int>& a) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int x : a) {
        // max
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max3 = max2;
            max2 = x;
        } else if (x > max3) {
            max3 = x;
        }

        // min
        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }
    }

    long long p1 = 1LL * max1 * max2 * max3;
    long long p2 = 1LL * min1 * min2 * max1;

    return max(p1, p2);
}

// <<<<<<<<<< Recursive >>>>>>>>>>

long long maxProductRecursive(vector<int>& a, int i, int count, long long product) {
    if (count == 3) return product;
    if (i == a.size()) {
        if (count == 3) return product;
        return LLONG_MIN;
    }

    long long include = maxProductRecursive(a, i+1, count+1, product * a[i]);
    long long exclude = maxProductRecursive(a, i+1, count, product);

    return max(include, exclude);
}


int main()
{
    vector<int> a = {2, 3, 4};
    vector<int> b = {6, 7, 8, 10};
    vector<int> c = {-10, -10, 5, 2};

    cout << "a:"<< endl;
    cout << " Iterative: " << maxProductIterative(a) << endl;
    cout << " Recursive: " << maxProductRecursive(a, 0, 0, 1) << endl;

    cout << "____________________________"<< endl;

    cout << "b:"<< endl;
    cout << " Iterative: " << maxProductIterative(b) << endl;
    cout << " Recursive: " << maxProductRecursive(b, 0, 0, 1) << endl;

    cout << "____________________________"<< endl;

    cout << "c:"<< endl;
    cout << " Iterative: " << maxProductIterative(c) << endl;
    cout << " Recursive: " << maxProductRecursive(c, 0, 0, 1) << endl;
    return 0;
}
