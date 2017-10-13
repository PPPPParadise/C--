#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
 map<string,int> Fruitmap;
 ifstream dataFile("list.txt");
 string curLine;
 string fruit;
 while (getline(dataFile,curLine)) {
  stringstream curSS(curLine);
  curSS>>fruit;
  map<string,int>::iterator iter;
  iter=Fruitmap.find(fruit);
  if (iter != Fruitmap.end()) {
  Fruitmap[fruit]+=1;
  }
  else
  {pair<string,int> other(fruit,1);
  Fruitmap.insert(other);}
 }
 for (map<string,int>::iterator mapIter = Fruitmap.begin(); mapIter != Fruitmap.end(); ++mapIter) {
  cout<<(*mapIter).first<<" "<<(*mapIter).second<<endl;
 }
 return 0;
}
