#include<iostream>
using namespace std;
class Student
{int rno,arrear;
   char name[50];
   float gpa;
 public:
   void getdata();
   void printdata();
   void max(Student s[]);
   void min(Student s[]);
};
void Student::getdata()
{
   cout<<"Enter name:";
   cin>>name;
   cout<<"enter Roll no:";
   cin>>rno;
   cout<<"Enter no of arrears:";
   cin>>arrear;
   cout<<"Enter the gpa:";
   cin>>gpa;
}
void Student::printdata()
{cout<<"Student name:"<<name<<endl;
   cout<<"roll no:"<<rno<<endl;
   cout<<"gpa:"<<gpa<<endl;
   cout<<"No of arrears:"<<arrear<<endl;
}
void Student::max(Student s[])
{int max=0;
   for(int i=1;i<5;i++)
   {if(s[i].gpa > max)
      {
         max=s[i].gpa;
      }
   }
cout<<"The maximum gpa is "<<max<<"\n";
}
void Student::min(Student s[])
{int min=s[1].gpa;
   for (int i=1;i<5;i++)
   {
     if(s[i].gpa < min)
     {
        min=s[i].gpa;
     }
   }
   cout<<"The minimum gpa is "<<min;
}
int main()
{Student s[4];
   for(int i=1;i<5;i++)
   {
   s[i].getdata();
   cout<<"\n";
   }
   for(int i=1;i<5;i++)
   {
      s[i].printdata();
         cout<<"\n";
   }
s[1].max(s);
s[1].min(s);
return 0;
}
