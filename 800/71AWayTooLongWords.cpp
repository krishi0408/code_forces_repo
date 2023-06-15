#include<iostream>
using namespace std;


string weight_watermelon(int w)
{
    if (w==2)
    return "NO";
    else if (w%2==0) 
    return "YES";
    else
    return "NO";
}

int main()
{
    int w;
    cin>>w;
    cout<<weight_watermelon(w);
}