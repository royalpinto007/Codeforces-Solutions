// referred
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int n = s.size();
        /*

            there will be four (4) cases:

            case 1:
                the last digit is even
            output:
                the answer is 0, then it is already even

            case 2:
                the first digit is even
            output:
                the answer is 1, since we need to reverse the whole number to make it even

            case 3:
                there is an even digit in the middle of the number
            output:
                the answer is 2, since we need to move the digit to the first position
                and move it again to the last position to make it even

            case 4:
                all three (3) previous cases failed
            output:
                the output is -1, since it means that there are no even digits in the number

        */
        int ans = -1;
        if ((s[n - 1] - '0') % 2 == 0)
        {
            ans = 0;
        }
        else if ((s[0] - '0') % 2 == 0)
        {
            ans = 1;
        }
        else
        {
            bool checker = false;
            for (int i = 0; i < n; i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    checker = true;
                    break;
                }
            }
            if (checker)
            {
                ans = 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}