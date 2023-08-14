#include<bits/stdc++.h>
using namespace std;
void three_sum(vector<int> v,int target)
{
    for(int i=0;i<v.size();i++)
    {
        int low=i+1;
        int high=v.size()-1;
        while(low<high)
        {
            int current=v[i]+v[low]+v[high];
            if(current==target)
            {
                cout<<"Found"<<endl;
                cout<<"["<<v[i]<<","<<v[low]<<","<<v[high]<<"]"<<endl;
                return;
            }
            if(current<target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    cout<<"Not Found!"<<endl;
}
int main()
{
    int n;
    cout<<"Enter No of values:"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the values in vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v.at(i);
    }
    sort(v.begin(),v.end());
    int target;
    cout<<"Value of target"<<endl;
    cin>>target;
    three_sum(v,target);    
    return 0;
}