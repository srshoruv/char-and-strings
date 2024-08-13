#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char *ch, int n){
    int start = 0, end = n-1;

    while ( start < end) {
        if (ch[start++] != ch[end--]) {
            cout << "NOT a valid palindrome";
            return false;
        }

    } cout << "VALID palindrome";
        return true; 
}

int main(){
    char ch[] = "madam";
    isPalindrome(ch, strlen(ch));
}