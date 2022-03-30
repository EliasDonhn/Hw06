#include<iostream>
#include<string.h>

using namespace std;

string minNumber(string decimalString){
    if(decimalString.length() == 1) return decimalString;
    else{
        if(decimalString[0] <= decimalString[1]){
            decimalString.erase(decimalString.begin() + 1);
            return minNumber(decimalString);
        }
        else{
            decimalString.erase(decimalString.begin());
            return minNumber(decimalString);
        }
    }
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
    cout << "Chu so thap phan nho nhat la " << minNumber(decimalString);
    return 0;
}