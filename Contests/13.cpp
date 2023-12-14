//EliminationGame

#include <iostream>
#include <cstdio>
using namespace std;


int lastRemaining(int n) {
    if(n == 1) {
        return 1;
    }
    return 2*(n/2 +1 - lastRemaining(n/2));
}

int main() {
    int n;
    cin>>n;
    cout<<lastRemaining(n);
}