#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
struct personData
{int ID;
 string name;
 int point;
};
int main()
{int n=0,maxi=0;
 string inputfile;
 cin>>inputfile;
 ifstream ipFile(inputfile.c_str());
 ofstream opFile("record.txt");
 string aLine;
 vector<personData> student;
 vector<personData> curData(1);
 while (getline(ipFile,aLine))
 {
  stringstream mySs(aLine);
  mySs>>curData[0].ID;
  mySs>>curData[0].name;
  mySs>>curData[0].point;
  student.push_back(curData[0]);
  opFile<<student[n].ID<<" "<<student[n].name<<" "<<student[n].point<<endl;
  if(student[n].point>student[n-1].point)
  {maxi=n;}
  n++;
 }
 cout<<student[maxi].ID<<" "<<student[maxi].name<<" "<<student[maxi].point<<endl;
 return 0;
}


