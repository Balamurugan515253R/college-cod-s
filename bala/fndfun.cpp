#include<iostream>
using namespace std;
class distance
{
   int feet,inch;
   public:
      void getdata()
      {
	 cout<<"enter the feet:";
	 cin>>feet;
	 cout<<"enter the inch:";
	 cin>>inch;
      }
      void display()
      {
	 cout<<"the feet is:"<<feet<<endl;
	 cout<<"the inch is:"<<inch<<endl;
      }
};
friend void add(int,int)
   void add(a,b)
{
   int fe,in;
   fe=obj1.feet+obj2.feet;
   in=obj1.in+obj2.in;
   fe=fe+(in/12);
   in=in%12;
   cout<<"finalfeet is:"<<fe<<endl;
   cout<<"final inch is:"<<in<<endl;
}
int main()
{
   float obj1,obj2;
   distance obj1,obj2;
   obj1.getgata();
   obj2.getdata();
   obj1.diaplay();
   obj2.display();
   add(obj1,obj2);
   return 0;
}



