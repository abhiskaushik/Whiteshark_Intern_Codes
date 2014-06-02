#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;
struct Point
{
   string x;
   string y;
};

int main()
{
   vector<vector<Point> > vec;
   vector<Point> temp;  vector<string> v1; vector<string> v2;
   Point cord;
   
    int ctr=1; 
  string line,word;
  ifstream file("test.txt");
  
  while(getline(file,line)){
      istringstream is(line);
   
     if(ctr%2!=0){
   while(is>>word){
     v1.push_back(word);
   
} 
 }
   else{ 
   while(is>>word){
   
      v2.push_back(word);  
    
   
}
}
     if(ctr%2==0){ int j=0; int size=v1.size();
      while(j<size){
       cord.x=v1[j]; cord.y=v2[j];
        temp.push_back(cord);
    
   j++;
  }
vec.push_back(temp);
v1.clear(); v2.clear();
temp.clear();
}

ctr++;
}


cout<<vec.at(1).at(1).x<<endl;
//cout<<vec[1][0].x<<endl;
return 0;
}




