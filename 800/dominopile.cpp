#include<iostream>
using namespace std;
 
int max_domino(int M, int N)
{
    int max_domino_num = M * N / 2;
    return max_domino_num;
}
int main()
{
    int M,N;
    cin>>M>>N;
    cout<<max_domino(M,N);
}
