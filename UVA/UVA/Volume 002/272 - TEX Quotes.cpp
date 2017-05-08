#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main ()
{
    char a[10000],b[10000];
    int count=0;
   while(gets(a))
   {
    int len=strlen(a);
    int i,j=0;
    for(i=0;i<len;i++)
    {
        if(a[i]=='\"')
        {
            ++count;
            if(count%2)
            {
            b[j++]='\`';
            b[j++]='\`';
            }
            else
            {
                b[j++]='\'';
                b[j++]='\'';
            }
        }
        else
            b[j++]=a[i];
    }

    b[j]='\0';
    puts(b);
   }
   return 0;
}

