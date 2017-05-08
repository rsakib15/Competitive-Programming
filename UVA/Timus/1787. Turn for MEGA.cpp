#include<iostream>
using namespace std;

main()
{
    int car , num,a,sum,result,i;
    while(cin>>car>>num)
    {
        result=0;
        for(i=0;i<num;i++)
        {
            cin>>a;
            sum=a-car;
            result=result+sum;
            if(result<0)result=0;
        }
        cout<<result<<endl;
    }
    return 0;
}