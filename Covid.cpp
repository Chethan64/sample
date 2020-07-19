#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    FIO;
    int t;
    cin>>t;
    for(int o=0;o<t;++o)
    {
        long int num;
        cin>>num;
        vector <int> a(num,0);
        for(int i=0;i<num;++i)
        {
            cin>>a[i];
        }
        int count = 0;
        int f = 1;
        for(int i=0;i<num;++i)
        {
            if(a[i] && count>0)
            {
                f = 0;
                break;
            }
            else if(a[i])
            {
                count = 5;
            }
            else
            {
                count--;
            }   
        }

        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}