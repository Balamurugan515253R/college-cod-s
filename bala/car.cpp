#include<iostream>
#include<string>
using namespace std;
class car
{
   string brand;
   string model;
   int year,price;
   public:
   car()
   {
      brand="null";
      model="null";
      year=0;
      price=0;
   }
   ~car(){}
   void getdata()
   {
      cout<<"enter the model of car:"<<endl;
      cin>>model;
      cout<<"enter the brand of car:"<<endl;
      cin>>brand;
      cout<<"enter the price of car:"<<endl;
      cin>>price;
      cout<<"enter the year:"<<endl;
      cin>>year;
   }
   void display()
   {
      cout<<"the brand of car is:"<<brand<<endl;
      cout<<"the model of car is:"<<model<<endl;
      cout<<"price:"<<price<<endl;
      cout<<"year of model is:"<<year<<endl;
   }
};
int main()
{
   car b;
   b.getdata();
   b.display();
   return 0;
}

