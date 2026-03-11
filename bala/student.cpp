#include<iostream>
using namespace std;
class student
{
   char name;
   int rollnumber;
   float mark;
   public:
   void get()
   {
      cout<<"enter name  : "<<endl;
      cin>>name;
      cout<<"enter roll number :"<<endl;
      cin>>rollnumber;
      cout<<"enter mark : "<<endl;
      cin>>mark;
   }
   void disp()
   {
      cout<<"name is "<<name<<endl;
      cout<<"roll number is  "<<rollnumber<<endl;
      cout<<"mark = "<<mark<<endl;
   }
};
int main()
{
   student s;
   s.get();
   s.disp();
   return 0;
}



