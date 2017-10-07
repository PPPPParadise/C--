#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int TIQU(int v)
{
    int i=0,m;
    while(v)
    {
        v=v/10;
        i=i+1;
    }
    m=i;
    return m;
}
int main()
{

    int number,n;
    int j=0;
    int seq[10];
    cout<<"please input your number: ";
    cin>>number;
    n=TIQU(number);
    while(number)
    {   seq[j]=number%10;
        number=number/10;
        j=j+1;
    }
    for (j=0;j<n;j++) {
      if (seq[j]!=seq[n-1-j])
      {
          cout<<"false"<<endl;
          break;
      }
      if (j=n-1)
    {cout<<"true"<<endl;}
      }
       return 0;

}

