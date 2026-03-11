#include<iostream>
using namespace std;
class motor
{
  public:
  void emf(int Ia,int V=220,float Ra=1.2,int Rse=6,int Rsh=75)
  {
   float eb=V-(Ia*(Ra+Rse));
   cout<<"The back emf of series motor is:"<<eb<<"\n";
  }
 void emf(float Il, int V=220,float Ra=1.2,int Rse=6,int Rsh=75)
 {
    float Ish=V/Rsh;
    float Ia=Il-Ish;
    float eb=V-(Ia*Ra);
    cout<<"The back emf of shunt motor is:"<<eb<<"\n";
 }
 void emf(double Il=4,float Ra=1.2,int V = 220, int Rse=6,int Rsh=75)
 {
   float Ish=V/Rsh;
   float Ia=Il-Ish;
   float eb=V-Ia*(Ra+Rse);
   cout<<"The back emf of compound motor is:"<<eb<<"\n";
 }
};
int main()
{
  motor m1;
  m1.emf(6);
  m1.emf(6.2);
  m1.emf();
  return 0;
}
