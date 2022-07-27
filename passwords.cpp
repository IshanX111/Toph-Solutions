#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    string s;
    while(cin>>s)
    {
        ll si=s.size();
        ll c=0;
        bool check1=false,check2=false,check3=false;
        for(ll i=0; i<si; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                check1=true;
            }

            else if(s[i]>='a' && s[i]<='z')
            {
                check2=true;
            }
            else
            {
                check3=true;
            }
            if(check1==true && check2==true && check3==true)
            {
                c++;
                check1=false;
                check2=false;
                check3=false;
            }
        }
        cout<<c<<endl;
    }




}
