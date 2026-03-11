#include<iostream>
using namespace std;
class abc
{
   int a,b,c,d;
   public:
   abc()
   {
   cin>>a>>b>>c;
   d=a+b+c;
   cout<<"a+b+c ="<<d<<endl;
   }
};
int main()
{
   abc a;
   return 0;
}


