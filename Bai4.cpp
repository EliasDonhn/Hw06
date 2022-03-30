#include<iostream>
#include<string.h>

using namespace std;

string reverseString(string str, int n){
    if(n >= str.length()/2)  return str;
    else{
        swap(str[n], str[str.length() - n - 1]);
        return reverseString(str, n + 1);
    }
}

int main(){
    string str;
    cout << "Nhap vao xau can dao" << endl;
    cin >> str;
    cout << "Xau sau khi duoc dao nguoc la " << reverseString(str, 0) << endl;
    return 0;
}