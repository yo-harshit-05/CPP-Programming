#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> hash(26,0);
    string s="Harshit Kumar";
    for(char ch:s){
        tolower(ch);
        hash[ch-'a']++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[i]>0){
            cout<<char(i+97)<<"="<<hash[i]<<endl;
        }
    }
}