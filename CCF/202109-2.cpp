#include <iostream>
#include <vector>
#include <set>
using namespace std;
int q[500002];
vector <int> pos[50002];

int main()
{
    int n;
    cin >> n;
    q[0] = 0;
    set<int> s;
    for(int i = 1; i <= n; i++)
    {
        cin >> q[i];
        s.insert(q[i]);                             //通过set容器存储，排序和去重
        pos[q[i]].push_back(i);                     //通过pos存储相同元素的位置
    }
    q[n + 1] = 0;

    int N = 0;                                      //记录最开始时，非0段的个数
    for(int i = 1; i <= n; i++)
    {
        if((q[i] > 0) && (q[i - 1] == 0))
        {
            N++;
        } 
    }

    int temp;
    int Nmax;
    temp = Nmax = N;
    set<int>::iterator it1 = s.begin();             //创建一个迭代器it1，指向set容器s（从小到大排序且去重之后的数组）的第一个元素
    if(*it1 == 0) ++it1;
    while(it1 != s.end())
    {
        vector<int> &cp = pos[*it1];                //cp别名，引用pos数组中的特定向量
        for(int i = 0; i < cp.size(); i++)
        {
            int idx = cp[i];
            q[idx] = 0;
            if((q[idx - 1] != 0) && (q[idx + 1] != 0)) temp++;
            if((q[idx - 1] == 0) && (q[idx + 1] ==0 )) temp--;
        }

        ++it1;
        Nmax = max(Nmax, temp);
    }
    cout << Nmax << endl;
    system("pause");
    return 0;

}