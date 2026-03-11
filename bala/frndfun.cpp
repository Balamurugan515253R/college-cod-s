#include<iostream>
using namespace std;
class Distance
{
   int feet,inch;
   public:
   Distance(int x,int y)
   {
      feet=x;
      inch=y;
   }
   friend void add(Distance s1 ,Distance s2);
   };
void add(Distance s1, Distance s2)
{
 int feet1=s1.feet + s2.feet;
 int inch1=s1.inch + s2.inch;
 feet1=feet1+(inch1/12);
 if((inch1/12)>=1)
 {
    inch1=inch1%12;
 }
 cout<<"The added value is:"<<feet1<<"'"<<inch1;
}
int main()
{
 Distance x1(4,2);
 Distance x2(5,3);
 add(x1,x2);
 return 0;
}
