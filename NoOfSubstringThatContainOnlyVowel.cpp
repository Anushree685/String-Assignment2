#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int count1 = 0;
    for(int i=0;i<s.size();i++){            
        int count = 0;
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            count1++;
            for(int j = i+1;j<s.length();j++){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ){
                    count++;
                }
                else break;
            }
        }
        if(count>=1) count1++;
    }
    cout<<count1;
}