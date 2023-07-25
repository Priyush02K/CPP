//find the last element of x in given array
// 1 2 3 2 3 1
//x=1

#include <iostream>
#include <vector>
using namespace std;
int main(){

vector<int> v(6);

for (int i = 0; i < 6; i++)
{
cin>>v[i];
}

cout<<"ente the X:";
int x;
cin>>x;
int occreance=-1;
for (int  i = 0; i < v.size(); i++)
{
   if (v[i]==x)
   {
    occreance=i;
   }
}
for (int  i = v.size()-1; i >+0; i--)
{
   if (v[i]==x)
   {
    occreance=i;
    break;
   }
   
}


cout<<occreance<<endl;

  return 0;
}