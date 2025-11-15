#include<iostream>
#include<string>
#include<algorithm>   // ← IMPORTANT

using namespace std;

int main() {
    string s = "roshan is a teacher";
    cout << s << endl;

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
