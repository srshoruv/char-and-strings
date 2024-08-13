#include <iostream>
#include <string.h>
using namespace std;

void toUpper(char ch[], int n) {
    for (int i=0; i<n; i++){
        char newCh = ch[i];
        if (newCh >= 'A' && newCh <= 'Z') {
            continue;
        } else {
            ch[i] = newCh - 'a' + 'A';
        }
    } cout << ch << endl;
}

int main(){
    char ch[] = "ShoRuv";
    toUpper(ch, strlen(ch));
}