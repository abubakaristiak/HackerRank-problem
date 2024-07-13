#include<bits/stdc++.h>
using namespace std;
bool isLeap1(int year){
    return (year%4==0);
}

bool isLeap2(int year){
    if(year%400 ==0 ) return true;
    if(year% 100 == 0) return false;
    return (year % 4 == 0);
}
string dayOfProgrammer(int year){
    if(year == 1918){
        return "26.09.1918";
    }
    else if((year<1918 && isLeap1(year)) || (year >= 1919 && isLeap2(year))){
        return "12.09."+to_string(year);
    }
    else{
        return "13.09."+to_string(year);
    }
}
int main()
{
    int year; cin >> year;
    cout << dayOfProgrammer(year)<<endl;
    return 0;
}

