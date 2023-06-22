#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> summands;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else{
            summands.push_back(s[i] - '0');
        }
    }

    sort(summands.begin(),summands.end());
    for(int i=0;i<summands.size();i++)
    {
        cout<<summands[i];
        if(i<summands.size()-1)
        {
            cout<<"+";
        }
    }
    return 0;
}