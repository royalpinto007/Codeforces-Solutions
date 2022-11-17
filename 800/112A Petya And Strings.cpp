#include <iostream>
#include <algorithm>
using namespace std;

string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } 
    else if (a > b) {
        cout << 1;
    } 
    else if (a == b) {
        cout << 0;
    }
}

// #include <iostream>
// #include <string>
// #include <cctype>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
//     cout << strcmp(s1.c_str(), s2.c_str()) << endl;
//     return 0;
// }