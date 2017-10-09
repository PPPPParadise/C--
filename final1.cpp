#include <iostream>
using namespace std;
int main()
{   int n,x,y;
    cout<<"Please input the number"<<endl;
    cin>>n;
    x=n%3;
    y=n%5;
    if (x==0)
    {
        if (y==0)
        { cout<<"FizzBuzz"<<endl;}
        else { cout<<"Fizz"<<endl;}

    }
    else
    {
        if (y==0)
        { cout<<"Buzz"<<endl;}
        else { cout<<n<<endl;}
    }
    return 0;
}
