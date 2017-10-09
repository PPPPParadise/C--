#include <iostream>
using namespace std;
int findchr(string a,char b)
{   int n=a.size();
    int j;
    for(j=0;j<=n;j++)
    {
        if(a[j]==b)
        break;
    }
    if (j<n)
    {return j;}
    else {return -1;}
}
int rfindchr(string a,char b)
{   int n=a.size();
    int j;
    for(j=n-1;j>=0;j--)
    {
        if(a[j]==b)
        break;
    }
    return j;
}
int main()
{  int n,i;
   string c;
   char x;
   cout<<"Please input number of strings"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>c;
    cin>>x;
    cout<<findchr(c,x)<<" "<<rfindchr(c,x)<<endl;
   }

    return 0;
}
