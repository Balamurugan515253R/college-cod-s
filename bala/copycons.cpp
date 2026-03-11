#include<iostream>
using namespace std;
class stud
{
   int regno,collegecode;
   public:
   stud(int a,int b)
   {
      regno=a;
      collegecode=b;
   }
   stud(stud &x)
   {
      collegecode=x.collegecode;
   }
   void display()
   {
      cout<<"college code:"<<collegecode<<endl;
   }
};
int main()
{
   stud s(23,23456);
   s.display();
   stud s1(s);
   stud s2=s;
   s1.display();
   s2.display();
   return 0;
}

