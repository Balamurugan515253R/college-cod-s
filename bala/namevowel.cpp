#include<iostream>
#include<cstring>
using namespace std;
class mystring
{

   public:
      char*str;
      mystring()
      {
	 str="NULL";
      };
      mystring(char*mystring0);
      {
	 str=new char[strlen(mystring)+1];
	 strcpy(str,mystring);
	 mystring(new char*s1,new char*s2);
	 {
	    str=new char[strlen(s1)+strlen(s2)+1];
	    strcpy(str,s1);
	    strcat(str,s2);
	 }
	 char*vowels()
	 {
	    if(!str)
	       return null;
	    int count=0;
	    char ch;
	    for(inti=0;str[i]!='\0';i++)
	    {
	       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		  vowel[n++]=str[i];
	    }
	    vowel[n]='\0';
	    return vowel;
	 }
	 mystring()
	 {
	    delete[]str;
	 }
      }
};

int main()
{
   mystring s1;
   mystring s2("bala");
   mystring s3("bala","baa");
   cout<<"string1:"<<s2.str<<endl;
   char*vowel 1=s2.vowel();
   cout<<"vowel in 1"<<vowel 1<<endl;
   delete[]vowel 1;
   cout<<"string2:"<<s3.str<<endl;
   char*vowel2=s3.vowel();
   cout<<"vowel in 2:"<<vowel2<<endl;
   delete[]vowel 2;
   return 0;
}

