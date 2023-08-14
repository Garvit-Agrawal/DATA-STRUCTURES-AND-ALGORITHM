#include<bits/stdc++.h>
using namespace std;
vector<int> stock_span(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int,int>> st;
    for(auto price: prices)
    {
        int days=1;
        while(!st.empty() && st.top().first<=price)
        {
            days=days+st.top().second;
            st.pop();
        }
        st.push(make_pair(price,days));
        ans.push_back(days);
    }
    return ans;
}
int main()
{
    vector<int> v={100,80,60,70,60,75,85};
    vector<int> v1=stock_span(v);
    for(auto element:v1)
    {
        cout<<element<<" ";
    }
    return 0;
}