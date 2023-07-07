#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t_case;
    cin >> t_case;
    while (t_case--)
    {
        int n;
        cin >> n;
        int cut_rope = 0;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b < a)
            {
                cut_rope++;
            }
        }
        cout << cut_rope << endl;
    }

    return 0;
}