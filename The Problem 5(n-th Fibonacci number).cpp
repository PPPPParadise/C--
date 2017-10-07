#include<iostream>
int Fibonaccinumber(int n)
   {int i,f[n];
    f[0]=0;
    f[1]=1;
    for(i=0;i<n-1;i++)
    {f[i+2]=f[i+1]+f[i];}
    if (n==0)
    {i=-1;}
    return (f[i+1]);}

using namespace std;
int main()
{   int a,n;
    cout<<"Please input the n"<<endl;
    cin>>n;
    a=Fibonaccinumber(n);
    cout<<a<<endl;
    return 0;
}
