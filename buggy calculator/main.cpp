#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    unsigned long int a,b,i=0,s[100000],sum=0,p[100000],c=0;
    cin>>a>>b;
    while(a>0)
    {
    s[i]=a%10;
    a=a/10;
    c=i++;
    }
    while(b>0)
    {
        p[i]=b%10;
        b=b/10;
        c=i++;
    }
    for(int j=0;j<c;j++)
    if(s[j]+p[j]>9)
    sum+=s[j]+p[j]-10;
    cout<<sum<<endl;
    }
    return 0;
}
