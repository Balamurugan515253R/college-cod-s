#include<iostream>
using namespace std;
class condi
{
   int a,b,c;
   public:
   condi()
   {
      cin>>a>>b>>c;
      if(a>b && a>c)
      {
	 cout<<"a is greater  "<<a<<endl;
      }
      else if(b>a && b>c)
      {
	 cout<<"b is greater  "<<b<<endl;
      }
      else
      {
	 cout<<"c is greater  "<<c<<endl;
      }
   }
};
int main()
{
   condi c;
   return 0;
}




