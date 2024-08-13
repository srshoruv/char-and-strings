#include <iostream>
#include <string.h>
using namespace std;

void toLower(char *ch, int n) {
    for (int i=0; i<n; i++) {
        char newCh = ch[i];
        if ( newCh >= 'a' && newCh <= 'z') {
            continue;
        } else {
            ch[i] = newCh - 'A' + 'a';
        }
    } cout << ch << endl;
}

int main(){

    char ch[] = "SHOrUV";
    toLower(ch, strlen(ch));

}