#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int *p = new int [n];
    int min = 0, max = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> p[i];
        max += p[i];
    }
    for(i = 0; i < n; i++)
    {
        if(p[i] == 0)
        {
            min += p[i];
        }
        else if(p[i + 1] == p[i])
        {
            min = min;
        }else
        {
            min += p[i];
        }
    }

    cout << max << endl << min << endl;
    delete []p;
    system("pause");
    return 0;

}