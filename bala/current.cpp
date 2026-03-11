#include<iostream>
using namespace std;
class current
{
   public:
      current()
        {
           float v=100;
        }
      void calc(float r1,float r2)
      {
         float ct1,ct2,v;
         ct1=v/r1;
         ct2=v/r2;
         cout<<"the current in resistor 1:"<<ct1<<endl;
         cout<<"the current in resistor 2:"<<ct2<<endl;
      }
      void calc(float r1,float r2,float r3)
      {
         float ct1,ct2,ct3,v;
         ct1=v/r1;
         ct2=v/r2;
         ct3=v/r3;
         cout<<"The current in resistor 1:"<<ct1<<endl;
         cout<<"The current in resistor 2:"<<ct2<<endl;
         cout<<"The current in resistor 3:"<<ct3<<endl;
      }
};
int main()
{
   current c1;
   c1.calc(2,5);
   c1.calc(3,6,7);
   return 0;
}
