#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    char a[1000000],b[1000000];
    int i,j,len;
    while(gets(a)){
        j=0;
        len=strlen(a);
    for (i=0;i<len;i++){
        switch(a[i]){
            case 'W':
            b[j++]='Q';
            break;
            case (char)39:
                b[j++]=';';
                break;
            case 'S':
                b[j++]='A';
                break;
            case 'X':
                b[j++]='Z';
                break;
            case 'E':
                b[j++]='W';
                break;
            case 'D':
                b[j++]='S';
                break;
            case 'C':
                b[j++]='X';
                break;
            case 'R':
                b[j++]='E';
                break;
            case 'F':
                b[j++]='D';
                break;
            case 'V':
                b[j++]='C';
                break;
            case 'T':
                b[j++]='R';
                break;
            case 'G':
                b[j++]='F';
                break;
            case 'B':
                b[j++]='V';
                break;
            case 'Y':
                b[j++]='T';
                break;
            case 'H':
                b[j++]='G';
                break;
            case 'N':
                b[j++]='B';
                break;
            case 'U':
                b[j++]='Y';
                break;
            case 'J':
                b[j++]='H';
                break;
            case 'M':
                b[j++]='N';
                break;
            case 'I':
                b[j++]='U';
                break;
            case 'K':
                b[j++]='J';
                break;
            case ',':
                b[j++]='M';
                break;
            case 'O':
                b[j++]='I';
                break;
            case 'L':
                b[j++]='K';
                break;
            case '.':
                b[j++]=',';
                break;
            case 'P':
                b[j++]='O';
                break;
            case ';':
                b[j++]='L';
                break;
            case '/':
                b[j++]='.';
                break;
            case '[':
                b[j++]='P';
                break;
            case '\\':
                b[j++]=']';
                break;
            case '1':
                b[j++]='`';
                break;
            case '2':
                b[j++]='1';
                break;
            case '3':
                b[j++]='2';
                break;
            case '4':
                b[j++]='3';
                break;
            case '5':
                b[j++]='4';
                break;
            case '6':
                b[j++]='5';
                break;
            case '7':
                b[j++]='6';
                break;
            case '8':
                b[j++]='7';
                break;
            case '9':
                b[j++]='8';
                break;
            case '0':
                b[j++]='9';
                break;
            case '-':
                b[j++]='0';
                break;
            case '=':
                b[j++]='-';
                break;
            case ' ':
                b[j++]=' ';
                break;
            case ']':
                b[j++]='[';
                break;

            }
            }
                b[j]='\0';
                puts(b);
}
    return 0;
}
