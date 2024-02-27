#include <bits/stdc++.h>
using namespace std;

// Two friends are playing a game. They are given a number n. The player can make two moves:
// 1. Friend 1 provides a 4 digit number and friend 2 has to find the next 4 digit number which has all the digits distinct.

int Solution(int n)
{
    while (true)
    {
        n++;
        string s = to_string(n);
        unordered_set<char> st(s.begin(), s.end());
        if (s.size() == st.size())
        {
           return n;
            break;
        }
        else if (s.size() > 4)
        {
            return -1;
        }
        n++;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Number\n";
    cin >> n;

    int ans = Solution(n);
    if(ans != -1){
        cout<<ans<<endl;
    }
    else{
        cout<<"There is No four Digit Available\n";
    }

    return 0;
}