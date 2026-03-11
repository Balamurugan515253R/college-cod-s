#include<iostream>
#include<string>
using namespace std;
class book
{
   string title;
   int accno,price,copies;
   public:
   book()
   {
      title="null";
      accno=0;
      price=0;
      copies=0;
   }
   ~book(){}
   void getdata()
   {
      cout<<"enter title of the book:"<<endl;
      cin>>title;
      cout<<"enter the accno:"<<endl;
      cin>>accno;
      cout<<"enter the price:"<<endl;
      cin>>price;
      cout<<"enter no of copies:"<<endl;
      cin>>copies;
   }
   int getprice()
   {
      return price;
   }
   int getcopies()
   {
      return copies;
   }
};
int main()
{
   int a,b,c,d,totalworth,stock;
   book b1,b2;
   b1.getdata();
   b2.getdata();
   a=b1.getprice();
   b=b1.getcopies();
   c=b2.getprice();
   d=b2.getcopies();
   totalworth=(a*b)+(c*d);
   cout<<"total cost of books:"<<totalworth<<endl;
   stock=(b+d);
   cout<<"total no of books in library:"<<stock<<endl;
   return 0;
}

