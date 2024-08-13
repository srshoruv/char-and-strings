#include <iostream>
#include <string.h>
using namespace std;

void reverse(char *ch, int n){
    int start = 0, end = n-1;
    while ( start < end) {
        swap(ch[start++], ch[end--]);
    } cout << ch << endl;
}

int main(){
    char ch[] = "shoruv";
    reverse(ch, strlen(ch));
}