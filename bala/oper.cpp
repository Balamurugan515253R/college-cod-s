#include<iostream>
using namespace std;
class Time
{
   int hr,min,sec;
public:
   Time()
   {
    hr=0;
    min=0;
    sec=0;
   }
   Time(int a,int b, int c)
   {
      hr=a;
      min=b;
      sec=c;
   }
   Time operator++()
   {
    return Time(++hr,++min,++sec);
   }
   Time operator++(int)
   {
      Time temp;
      temp.hr=hr;
      temp.min=min;
      temp.sec=sec;
      hr++;
      min++;
      sec++;
      return temp;
   }
   Time operator--()
   {
   return Time(--hr,--min,--sec);
   }
   Time operator--(int)
   {
     Time temp;
     temp.hr=hr;
     temp.min=min;
     temp.sec=sec;
     hr--;
     min--;
     sec--;
     return temp;
   }
   void display()
   {
      cout<<hr<<":"<<min<<":"<<sec<<endl;
   }
};
int main()
{ Time t1(4,30,20),t(2,20,40);
   cout<<"Initial time:"<<endl;
   t1.display();
   t.display();
   Time t2=++t1;
   cout<<"After pre increment:"<<endl;
      t2.display();
   Time t3=t2++;
   cout<<"After post incremnet:"<<endl;
      t3.display();
   Time t4=--t;
   cout<<"After pre decrement:"<<endl;
      t4.display();
   Time t5=t--;
   cout<<"Afer post decrement:"<<endl;
      t5.display();
   return 0;
   }
