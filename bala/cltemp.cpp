#include<iostream>
using namespace std;
template<class p>
class stack
{
 int i,count;
 p a[30];
 public:
 void get()
 {
    cout<<"Enter the no of elements:";
    cin>>count;
    for(i=0;i<count;i++)
    {
       cin>>a[i];
    }
 }
 void push()
 {
    if((i+1)<30)
    { cout<<"Enter a number to push"<<endl;
       i=i+1;
      cin>>a[i];
    }
 }
 void pop()
 {
    cout<<"The poped element is "<<a[i]<<endl;
    a[i]='\0';
    if(i<0)
    {
       cout<<"Stack underflow";
    }
 }
};
 int main()
 {
  stack<int> s1;
  s1.get();
  s1.push();
  s1.pop();
  stack<float> s2;
  s2.get();
  s2.push();
  s2.pop();
  return 0;
 }
