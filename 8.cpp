#include <bits/stdc++.h>
using namespace std;

    int power(int a, int b){
        if(b==1)
        return a;
        else
        return (a*power(a,b-1));
    }
    int main(){
        int a=5;
        int b=3;
        int res =0;
        res=power(a,b);
        cout<<res;
        return 0;
    }