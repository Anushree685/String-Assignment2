#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int max = 0;
    for(int i=0;i<s.length();i++){
        int a = (int)s[i];
        int b = a - 48;
        if(max<b) max = b;
    }
    cout<<"Maximum number is "<<max<<endl;
    int Smax=0;
    for(int i=0;i<s.length();i++){
        int a = (int)s[i];
        int b = a - 48;
        if(b!=max && Smax<b) Smax = b;
    }
    cout<<"Second Maximum No. is "<<Smax;
}