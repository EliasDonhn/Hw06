#include<iostream>
#include<string.h>

using namespace std;

int ones(string s, int i){
    if(i == 0) return 0;
    else{
        if(s[i - 1] == '1') return ones(s, i - 1) + 1;
        else return ones(s, i - 1);
    }
}

int main(){
    string binaryString;
    cout << "Hay nhap vao xau nhi phan" << endl;
    cin >> binaryString;
    for(int i = 0; i < binaryString.length(); i++){
        if(binaryString[i] != '0' && binaryString[i] != '1'){
            cout << "Xau tren khong phai xau nhi phan";
            return 0;
        }
    }
    int count = ones(binaryString, binaryString.length());
    cout << "So bit 1 trong xau nhi phan la " << count << endl;
    return 0;
}