#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()

{
    int k;
    int cnt=0;
    int arry[10] = {0};
    cin>>k;
    //将整形转化为字符串
    string  text;
    text = to_string(k);
    for(auto i =text.begin();i!=text.end();i++)
    {
        cnt = *i - '0';//将字符串中的数字字符转换为整型，注意，stoi不能将字符转化为int
        arry[cnt] ++;
        
    }
    for(int i =0;i<10;i++)
    {
        if(arry[i]!=0)
        {
            cout<<i<<":"<<arry[i]<<endl;
        }
    }
    return 0;


}