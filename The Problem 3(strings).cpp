#include<iostream>
#include<string>
using namespace std;
int main()
{   string m;
    int j,n;
    cout<<"Please input the number"<<endl;
    cin>>m;
    n=m.size();
    for (j=0;j<n;j++)
      {
      if(m[j]!=m[n-1-j])
      {  break;}
      }
    if (j==n)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
      return 0;
}
