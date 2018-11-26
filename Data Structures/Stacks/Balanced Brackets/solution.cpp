#include <bits/stdc++.h>
using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
stack<char> stk;
for(int i=0; i<s.size(); i++)
{
    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
        stk.push(s[i]);
    }
    else if(!stk.empty() && 
            (s[i]==')' && stk.top()=='(' ||
            s[i]=='}' && stk.top()=='{' ||
            s[i]==']' && stk.top()=='[')){
                stk.pop();
            }
    else
        return "NO";
}
if(stk.empty()){return "YES";}
else{return "NO";}
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
