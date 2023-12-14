//lastRemaining


#include <bits/stdc++.h>
using namespace std;

  int lastRemaining(int n) {
        int head=1, step=1;
        bool direction=true; //t for ->, f for <-;
        while (n>1) {
            if (direction)
                head+=step;
            else
                head+=n%2==0?0:step;
            step*=2;
            n/=2;
            direction=!direction;
        }
        return head;
    }


int main() {
    int n;
    cin >> n;

    int result = lastRemaining(n);
    cout <<result << std::endl;

    return 0;
}