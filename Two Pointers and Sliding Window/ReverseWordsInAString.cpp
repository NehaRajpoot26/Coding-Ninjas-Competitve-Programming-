// You are given a string of length 'N'. You need to reverse the string word by word.

// There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.

// Sample Input 1 :-
// Welcome   to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome

string reverseString(string str)
{
    // Write your code here.
    str += ' ';
    vector <string> v;
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == ' ') {
        if (temp.length())
          v.push_back(temp);
        temp = "";
      } else
        temp += str[i];
    }
    reverse(v.begin(), v.end());
    string ans = "";
    for (int i = 0; i < v.size(); i++) {
      ans += v[i];
      ans += ' ';
    }
    ans.pop_back();
    return ans;
}

