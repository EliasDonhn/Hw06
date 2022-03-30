#include<iostream>
#include<string.h>

using namespace std;

char minNumber(string decimalString, int n){
    
}

int main(){
    cout << "Hay nhap vao xau thap phan" << endl;
    string decimalString;
    cin >> decimalString;
    for(int i = 0; i < decimalString.length(); i++){
        if(decimalString[i] < '0' || decimalString[i] > '9'){
            cout << "Xau tren khong phai xau thap phan";
            return 0;
        }
    }
    char minNum = minNumber(decimalString, decimalString.length());
    cout << "Chu so thap phan nho nhat la " << minNum;
    return 0;
}