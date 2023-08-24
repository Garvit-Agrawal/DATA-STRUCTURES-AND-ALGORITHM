#include <iostream>
#include <vector>
using namespace std;

bool palindronic(vector<int> v, int i, int k) 
{
    int a=i;
    int b=i+k-1;
    while(a<=b)
    {
        if(v[a]==v[b])
        {
            a++;
            b--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int fun(vector<int> v, int n, int k) {
    int i = 0;
    while (n-i>=k) { 
        if (palindronic(v, i, k)) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    vector<int> v = {2, 3, 5, 1, 1, 5};
    int k = 4;
    int x = fun(v, v.size(), k);

    if (x != -1) {
        for (int i = x; i < x + k; i++) {
            cout << v[i] << " ";
        }
    } else {
        cout << "Not Possible";
    }

    return 0;
}
