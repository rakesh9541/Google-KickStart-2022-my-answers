#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        std::string str;
        cin>>str;
        int l;
        l=str.length();
        l=l-1;

        if(str[l]=='a'|| str[l]=='e'|| str[l]=='i'|| str[l]=='o'||str[l]=='u'|| str[l]=='A'||str[l]=='E'||str[l]=='I'||str[l]=='O'||str[l]=='U')
            cout<<"Case #"<<(i+1)<<":"<<" "<<str<<" is ruled by Alice."<<endl;
        else if(str[l]=='y'||str[l]=='Y')
            cout<<"Case #"<<(i+1)<<":"<<" "<<str<<" is ruled by nobody."<<endl;
        else
            cout<<"Case #"<<(i+1)<<":"<<" "<<str<<" is ruled by Bob."<<endl;
    }
}
