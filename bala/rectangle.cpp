#include<iostream>
using namespace std;
class rectangle
{
   float length,breadth,area;
   public:
   void calc(float a,float b)
   {
      length=a;
      breadth=b;
      area=length*breadth;
   }
   void disp()
   {
      cout<<"area of rectangle is : "<<area<<endl;
   }
};
int main()
{
   rectangle r;
   r.calc(12.1,2);
   r.disp();
   return 0;
}

