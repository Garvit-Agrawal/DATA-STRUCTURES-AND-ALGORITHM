#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findSubsequence(vector<int> &v, int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int subsequenceSum = 0;
        for (int j = i; j < i + k; j++) {
            subsequenceSum += sumOfDigits(v[j]);
        }
        if (subsequenceSum % 3 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {84, 23, 45, 12, 56, 82};
    int k = 3;
    int n = v.size();
    
    int index = findSubsequence(v, n, k);
    if (index != -1) {
        for (int a = index; a < index + k; a++) {
            cout << v[a] << " ";
        }
    }
    
    return 0;
}
