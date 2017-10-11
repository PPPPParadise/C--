#include <string>
#include <iostream>
using namespace std;
struct class1
{int ID;
 string name;
 int points;};
int main()
{   int i,n,maximum;
    cout<<"Please input the size of the class"<<endl;
    cin>>n;
    class1 student[n];
    for(i=0;i<n;i++)
    {
    cout<<"student "<<i<<"'s "<<"ID ";
    cin>>student[i].ID;
    cout<<"student "<<i<<"'s "<<"name ";
    cin>>student[i].name;
    cout<<"student "<<i<<"'s "<<"points ";
    cin>>student[i].points;
    cout<<endl;
    }
    maximum=student[0].points;
    for(i=0;i<n-1;i++)
    {
    if (student[i].points<=student[i+1].points)
     maximum=student[i+1].points;
    }
    cout<<"The maximum point is "<<maximum<<endl;
 return 0;
}
