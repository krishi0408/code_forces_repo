#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[6][6],i,j,min_moves;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                min_moves=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<min_moves<<endl;
    return 0;
}