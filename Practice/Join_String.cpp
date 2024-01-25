// ************************ Concatenate Multiple String in one line ************************

// Method - 1 -> Using Vector and Loops

    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;

    int main()
    {
        string s1 = "Lokesh";
        string s2 = " Singh";
        string s3 = " is";
        string s4 = " Beginner";
        string s5 = " in Programming";

        // Creating a empty vector
        vector<string>ans;

        // Pushing all the string in the vector
        ans.push_back(s1);
        ans.push_back(s2);
        ans.push_back(s3);
        ans.push_back(s4);
        ans.push_back(s5);

        string combined;

        // Joining all the string
        for(auto i : ans){
            combined += i;
        }

        cout << "The Concatenated string is : " << combined << endl;
        return 0;
    }


// Method - 2 -> Using + Operator

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Lokesh";
    string s2 = " Singh";
    string s3 = " is";
    string s4 = " Beginner";
    string s5 = " in Programming";

    string ans;
    ans = s1 + s2 + s3 + s4 + s4 + s5;

    cout << "The Concatenated string is : " << ans << endl;

    return 0;
}


// Method - 3 -> Using Append Method

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Lokesh";
    string s2 = " Singh";
    string s3 = " is";
    string s4 = " Beginner";
    string s5 = " in Programming";

    string ans;
    ans.append(s1);
    ans.append(s2);
    ans.append(s3);
    ans.append(s4);
    ans.append(s5);

    cout << "The Concatenated string is : " << ans << endl;

    return 0;
}

// Method - 4 -> Using insert() method

    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        string s1 = "Lokesh";
        string s2 = " Singh";
        string s3 = " is";
        string s4 = " Beginner";
        string s5 = " in Programming";

        
        s1.insert(s1.end(),s2.begin(),s2.end());
        s1.insert(s1.end(),s3.begin(),s3.end());
        s1.insert(s1.end(),s4.begin(),s4.end());
        s1.insert(s1.end(),s5.begin(),s5.end());

        cout << "The Concatenated string is : " << s1 << endl;

        return 0;
    }
