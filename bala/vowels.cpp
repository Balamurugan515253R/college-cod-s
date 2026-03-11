#include<iostream>
#include<cstring>
using namespace std;
class S
{
   public:
      char* str;
      S()
      {
         str=NULL;
      }
      S(const char* s)
      {
         str=new char [strlen(s)+1];
         strcpy(str,s);
      }
      S ( const char *s1, const char *s2)
         {
            str=new char[strlen(s1)+strlen(s2)+1];
            strcpy(str,s1);
            strcat(str,s2);
         }
         char* vowels()
         {
            if(str==NULL)
               return NULL;
            int count=0;
            for(int i=0;str[i]!='\0';i++)
            {
               char ch=tolower(str[i]);
               if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                  count++;
            }
            char* vowel=new char[count+1];
            int n=0;
            for (int i=0;str[i]!='\0';i++)
            {
              char ch=tolower(str[i]);
               if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                  vowel[n++]=str[i];
            }
            vowel[n]='\0';
            return vowel;
         }
         ~S()
         {
            delete[]str;
         }
      };
int main ()
{
      S s1();
      S s2("bala");
      S s3("bala","murugan");
      cout<<"string 1: "<<s2.str<<endl;
      char* vowel1=s2.vowels();
      cout<<"vowels in string 1: "<<vowel1<<endl;
      cout<<"string 2: "<<s3.str<<endl;
      char* vowels1=s3.vowels();
      cout<<"vowels in string 2: "<<vowels1<<endl;
      return 0;
}

