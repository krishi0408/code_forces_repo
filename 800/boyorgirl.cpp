#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int count_distinct(string str)
{
    unordered_set<char> s;
    for(int i=0;i<str.size();i++)
    {
        s.insert(str[i]);
    }
    int ans = s.size();
    return ans;


}
int main()
{
    string s;
    cin>>s;
    int ans = count_distinct(s);
    if(ans%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}