#include<iostream>
using namespace std;
class dc
{
   public:
     float Ra=1.2;
     float Rse=6;
     float Rsh=75;
     float V,e1,e2,e3;
     float Ia,Il,Ish;
     void getdata()
      {
         cout<<"Enter terminal voltage:"<<endl;
         cin>>V;
         cout<<"enter line current:"<<endl;
         cin>>Il;
      }
};
class series:public dc
{   public:
    void find()
     {
      Ia=Il;
      cout<<"The Current is dc Series motor:"<<Ia<<endl;
      e1=V-Ia*(Ra+Rse);
      cout<<"The voltage in dc series motor:"<<e1<<endl;
     }
 };
class shunt:public dc
{  public:
   void find()
   {
    Ish=V/Rsh;
    Ia=Il-Ish;
    cout<<"The current in dc shunt motor:"<<Ia<<endl;
    e2=V-(Ia*Ra);
    cout<<"The Voltage in dc shunt motor:"<<e2<<endl;
   }
};

class compound:public dc
{  public:
   void find()
      {
       Ish=V/Rsh;
       Ia=Il-Ish;
       cout<<"The current in dc compuond motor:"<<Ia<<endl;
       e3=V-Ia*(Ra+Rse);
       cout<<"The Voltage in dc compound motor:"<<e3<<endl;
      }
};
int main()
{
   series se;
   se.getdata();
   se.find();
   shunt sh;
   sh.getdata();
   sh.find();
   compound cp;
   cp.getdata();
   cp.find();
   return 0;
}
