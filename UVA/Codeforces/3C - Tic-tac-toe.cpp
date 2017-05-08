#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    string mark="";
    char c;

    int res=-1;

    for(int i=0;i<9;i++){
        cin>>c;
        mark+=c;
    }

    //cout<<"Mark: "<<mark<<endl;

    int len=mark.size();
    int countCross=0,countZero=0,dot=0;

    for(int i=0;i<len;i++){
        if(mark[i]=='X')
            countCross++;
        else if(mark[i]=='0')
            countZero++;
        else
            dot++;
    }

    //cout<<"count : "<<countCross<<" "<<countZero<<endl;

    int flag=0;
    int player1=0,player2=0;

    if (mark[0] == 'X' && mark[1]=='X' && mark[2]=='X'){
        player1=1;
    }
    else if (mark[0]=='X' && mark[4]=='X' && mark[8]=='X'){
        player1=1;
    }
    else if (mark[0]=='X' && mark[3]=='X' && mark[6]=='X'){
        player1=1;
    }
    else if (mark[3]=='X' && mark[4]=='X' &&  mark[5]=='X'){
        player1=1;;
    }

    else if (mark[6]=='X' && mark[7]=='X' && mark[8]=='X'){
        player1=1;
    }
    else if (mark[1]=='X' && mark[4]=='X' && mark[7]=='X'){
        player1=1;
    }
    else if (mark[2]=='X' && mark[5]=='X' && mark[8]=='X'){
        player1=1;
    }

    else if (mark[2] == 'X' && mark[4]=='X' &&  mark[6]=='X'){
        player1=1;
    }



    if (mark[0] == '0' && mark[1]=='0' && mark[2]=='0'){
        player2=1;
    }
    else if (mark[0]=='0' && mark[4]=='0' && mark[8]=='0'){
        player2=1;
    }
    else if (mark[0]=='0' && mark[3]=='0' && mark[6]=='0'){
        player2=1;
    }
    else if (mark[3]=='0' && mark[4]=='0' &&  mark[5]=='0'){
        player2=1;
    }

    else if (mark[6]=='0' && mark[7]=='0' && mark[8]=='0'){
        player2=1;
    }

    else if (mark[1]=='0' && mark[4]=='0' && mark[7]=='0'){
        player2=1;
    }
    else if (mark[2]=='0' && mark[5]=='0' && mark[8]=='0'){
        player2=1;
    }
    else if (mark[2] == '0' && mark[4]=='0' &&  mark[6]=='0'){
        player2=1;
    }


    //cout<<player1<<" "<<player2<<endl;


    if ((countZero > countCross || countZero < countCross-1) && flag==0) {
        printf("illegal\n");
        flag=1;
        return 0;
    }

    if (player1==1 && player2==1 && flag==0) {
        printf("illegal\n");
        flag=1;
        return 0;
    }

    if ((player2==1 && countCross > countZero) || (player1==1 && (countCross==countZero)) && flag==0) {
        printf("illegal\n");
        flag=1;
        return 0;
    }

    if (player1==1 && flag==0) {
        printf("the first player won\n");
        flag=1;
        return 0;
    }

    if (player2==1 && flag==0) {
        printf("the second player won\n");
        flag=1;
        return 0;
    }

    if (dot==0 && flag==0) {
        printf("draw\n");
        flag=1;
        return 0;
    }

    if (countCross <= countZero && flag==0) {
        printf("first\n");
        flag=1;
        return 0;
    }

    else if(flag==0) {
        printf("second\n");
        flag=1;
        return 0;
    }
}