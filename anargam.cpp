#include <iostream>
#include <string>
using namespace std;

bool anargam(string s, string s1) {
    if (s.length() != s1.length()){
        cout << "Not an anargam!";
        return false;
    }

    int arr[26];
    for ( int i=0; i<s.length(); i++) {
        arr[s[i]-'a']++;
    }
    for ( int i=0; i<s.length(); i++) {
        if (arr[s1[i]- 'a'] == 0) {
            cout << "Not an anargam!";
        return false;
        }
        arr[s1[i]-'a']--;
    } 
    cout << "an anargam!";
    return true;
}

int main(){
    string str1 = "anargam";
    string str2 = "anaguam";

    anargam(str1, str2);
}