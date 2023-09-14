#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    unordered_map<int, int>::iterator it;
    int maxFrequency = INT_MIN;  
    int mostFrequentElement;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second > maxFrequency)
        {
            maxFrequency = it->second;
            mostFrequentElement = it->first;
        }
    }
    cout<<mostFrequentElement;
    return 0;
}
