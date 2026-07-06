#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ialo";
    int i =0;
    bool pal = true;
    int j =s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            cout<<"NO";
            pal = false;
            break;
        }
        i++;
        j--;
    }
    if(pal == true)
    cout<<"YES";
    return 0;
}
