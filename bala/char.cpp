#include<iostream>
#include<string>
using namespace std;
class str
{
   string a;
   public:
   str (string s)
    {
     a=s;
    }
   str operator-(char c)
   {
      for(int i=0;a[i]!='\0';i++)
      {
        if(a[i]==c)
        {
           a[i]='\0';
        }
      }
      return str(a);
   }
   void display()
   {
     cout<<a<<endl;
   }
};
int main()
{
  char c;
  str s1("Balamurugan");
  s1.display();
  cout<<"enter character to remove:";
  cin>>c;
  str s2=s1-c;
  s2.display();
  return 0;
}
