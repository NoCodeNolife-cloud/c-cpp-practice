#include <iostream>
using namespace std;
int gcd(int m,int n){
    if(m%n==0){
        return n;
    }else{
        return gcd(n,m%n);
    }
}

int lcm(int m,int n){
    return m*n/gcd(m,n);
}
int main() {
    cout<<lcm(4,3);
    return 0;
}
