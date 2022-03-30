#include<iostream>

using namespace std;

int gcd(int n1, int n2){
    if(n1 < n2)                             return gcd(n2, n1);    
    else if(n2 == 0)                        return n1;
    else if(n1 % 2 == 0 && n2 % 2 == 0)     return 2 * gcd(n1/2, n2/2);
    else if(n1 % 2 == 0 && n2 % 2 == 1)     return gcd(n1/2, n2);
    else                                    return gcd(n1 - n2, n2);
}

int main(){
    cout << "Nhap vao hai so nguyen" << endl;
    int a, b;
    cin >> a >> b;
    int ucln = gcd(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
    return 0;
}