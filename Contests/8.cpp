//maximumSubsequenceCount

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long maximumSubsequenceCount(string text, string pattern) {
        long long res = 0, cnt1 = 0, cnt2 = 0;
        for (char& c: text) {   
            if (c == pattern[1])
                res += cnt1, cnt2++;
            if (c == pattern[0])
                cnt1++;
        }
        return res + max(cnt1, cnt2);
    }


int main() {
    // Get user input
    std::string text, pattern;
    std::getline(std::cin, text);;
    std::getline(std::cin, pattern);

    // Call the function and display the result
    int result = maximumSubsequenceCount(text, pattern);
    std::cout << result << std::endl;

    return 0;
}