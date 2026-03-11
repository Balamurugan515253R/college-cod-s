#include<iostream>
using namespace std;
template<class b>
void large(b x,b y)
{
 if(x>y)
 {
  cout<<" largest element= "<<x<<endl;
 }
 else
 {
    cout<<" largest element= "<<y<<endl;
 }
}
 int main()
 {
    large(5,6);
    large('a','m');
    large(7.8,10.2);
    return 0;
 }
