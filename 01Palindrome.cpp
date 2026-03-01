#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string str, revstr;
    cout << "Enter any string" << endl;
    getline(cin, str);
    
    for(char &c : str){
        c = tolower(c);
    }
    for(int i = str.length() - 1; i >= 0; i--){
        revstr += str[i];
    }

    if(revstr == str){
        cout << "The given String is palindrome" << endl;
    }
    else{
        cout << "The given String is not palindrome" << endl;
    }

    return 0;
}