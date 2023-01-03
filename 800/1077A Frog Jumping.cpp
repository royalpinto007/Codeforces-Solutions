#include <iostream>
using namespace std;

int main()
{
    int T;
    long long A, B, K, two_step;

    cin >> T;
    for (int i = 0; i < T; ++i)
    {

        cin >> A >> B >> K;

        two_step = A - B;

        if (K % 2 == 0)
        {

            cout << two_step * K / 2 << endl;
        }

        else
        {

            cout << two_step * (K / 2) + A << endl;
        }
    }

    return 0;
}