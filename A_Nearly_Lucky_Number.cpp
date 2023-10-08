/*#include<bits/stdc++.h>
using namespace std;
bool isLuckyDigit(char digit) {
    return digit == '4' || digit == '7';
}

bool isNearlyLuckyNumber(long long n) {
    string w = to_string(n);
    int luckyDigitCount = 0;

    for (char digit : w) {
        if (isLuckyDigit(digit))
            luckyDigitCount++;
    }

    return luckyDigitCount == 4 || luckyDigitCount == 7;
}

int main() {
    long long n;
    cin >> n;

    if (isNearlyLuckyNumber(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    int rem;
    long long temp = num;
    int flag=0;
    int count = 0;
    vector<int> v;
    while ( temp != 0 )
    {
        rem = temp % 10;
        v.push_back(rem);
        temp = (temp-rem) / 10;
    }
    for ( int i = 0; i < v.size(); i++ )
    {
        if( v[i] == 4 || v[i] == 7)
        {
            count++;
        }
    }
    if ( count == 4 || count == 7 )
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;

}