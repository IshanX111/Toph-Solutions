#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    char ch;
    ll si=s.size();
    stack<char>st;
    ll c=0;
    for(ll i=0;i<si;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
            st.push(s[i]);
        }
        else{
            //c++;
            //break;
            if(s[i]==')'){
                if(!st.empty()){
                    ch=st.top();

                    if(ch!='('){
                        c++;
                        break;
                    }
                    st.pop();
                }
                else{
                    c++;
                    break;
                }
            }

            else if(s[i]=='}'){
                if(!st.empty()){
                    ch=st.top();

                    if(ch!='{'){
                        c++;
                        break;
                    }
                    st.pop();
                }
                else{
                    c++;
                    break;
                }

            }
            else if(s[i]==']'){
                if(!st.empty()){
                    ch=st.top();

                    if(ch!='['){
                        c++;
                        break;
                    }
                     st.pop();
                }
                else{
                    c++;
                    break;
                }
            }
        }
    }
    if(c==0 && st.size()==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


}
