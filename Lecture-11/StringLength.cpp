#include<iostream>
using namespace std;

int length(char *a){
    int cnt = 0;
    for (int i = 0; a[i] != '\0';i++){
        cnt++;
    }
    return cnt;
}

int main() {
    char a[100] = "Hello World";
    cout << length(a) << endl;
    //NUll charactr is not included in the length because we stop the loop when a[i] = '\0'
    

    return 0;
}