#include <iostream>
#include <string>
using namespace std;

void count(string str) {
    int count = 0;
    string vowels = "aeiou";
    for (int i=0; i<str.length(); i++) {
        for (int j=0; j<vowels.length(); j++) {
            if (str[i] == vowels[j]) {
                count++;
            }
        }
    } cout << count << endl;
}

int main(){
    string str;
    
    cout << "Input your string: ";
    getline(cin, str);
    count(str);
}