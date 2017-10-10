#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{   int i,n;
    cout<<"Please input the size of the arrays."<<endl;
    cin>>n;
    cout<<"Please input the x and y arrays."<<endl;
    double sum,aver,devi;
    double a[n],b[n],c[n];
    for (i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
      cin>>b[i];
    }
    sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    aver=sum/n;
    sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+(a[i]-aver)*(a[i]-aver);
    }
    devi=sum/n;
    for (i=0;i<n;i++)
    {
        c[i]=(a[i]-aver)/(sqrt(devi));
        cout<<c[i]<<setiosflags(ios::fixed)<<setprecision(8)<<" ";
    }
    cout<<endl;
    sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    aver=sum/n;
    sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+(b[i]-aver)*(b[i]-aver);
    }
    devi=sum/n;
    for (i=0;i<n;i++)
    {
        c[i]=(b[i]-aver)/(sqrt(devi));
        cout<<c[i]<<setiosflags(ios::fixed)<<setprecision(8)<<" ";
    }
}
