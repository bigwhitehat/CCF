#include<iostream>
#include<algorithm>
using namespace std;
pair<int,int> pii[100005];      //pair数组储存信息，每个pair存储一个同学的y和result
int pre0[100005];               //记录该位置及前面的result为0的个数（前缀和）
int rear1[100005];              //记录该位置及后面的result为1的个数（后缀和）
int k = -1,ma = 0;              //k用来记录最佳阈值，ma用来存储最佳阈值对应的预测成国公数目
int main(){
    int m;
    cin>>m;                     //输入m
    pii[0] = pair<int,int>(-1,-1);
    for(int i = 1;i <= m;++i)   //初始化pii数组
        cin>>pii[i].first>>pii[i].second;
    sort(pii + 1,pii + 1 + m);  //将所有学生信息按照阈值从小到大排序，方便后续前缀后缀和的操作
    for(int i = 1;i <= m;++i)            //记录前缀0个数
        if(pii[i].second == 0)
            pre0[i] = pre0[i - 1] + 1;
        else
            pre0[i] = pre0[i - 1];
    for(int i = m;i >= 1;--i)           //记录后缀1个数
        if(pii[i].second == 1)
            rear1[i] = rear1[i + 1] + 1;
        else
            rear1[i] = rear1[i + 1];
    for(int i = 1;i <= m;++i){          //最终处理
        if(pii[i].first == pii[i - 1].first)
            continue;                   //如果有阈值相同的情况，那么在相同区间的第一个位置统计了，直接跳过
        if(ma <= pre0[i - 1] + rear1[i])//更新k和ma
            ma = pre0[i - 1] + rear1[i],k = pii[i].first;
    }
    cout<<k;
    system("pause");
    return 0;
}
