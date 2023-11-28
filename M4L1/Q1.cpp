#include <bits/stdc++.h>
using namespace std;


long long maximumSubsequenceCount(string text, string pattern) {
    long long count1 = 0;
    long long count2 = 0;
    long long ans = 0;
    for(int i = 0;i < text.size();i++){
        if(text[i] == pattern[1]){
            ans += count1;
            count2++;
        }
        if(text[i] == pattern[0])
            count1++;
    }
    return ans + max(count1,count2);
}

int main() {
    string text,pttrn;
    cin>>text>>pttrn;
    cout<<maximumSubsequenceCount(text,pttrn);
    return 0;
}
                                                                                                                            