#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m,n,o;
        cin>>a>>b>>c;

        m=max(0,max(b,c)+1-a);
        n=max(0,max(a,c)+1-b);
        o=max(0,max(b,a)+1-c);
        cout<<m<<" "<<n<<" "<<o<<endl;

    }
    return 0;
}
