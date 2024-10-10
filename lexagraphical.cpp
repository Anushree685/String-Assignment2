#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> str;
    string temp;
    while(ss>>temp){
        str.push_back(temp);
    }
    sort(str.begin(), str.end());
    cout<<str[str.size()-1];
}