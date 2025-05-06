#include <string>
//https://leetcode.com/problems/palindrome-number/solutions/3651712/2-method-s-c-java-python-beginner-friendly
class Solution {
public:
    bool isPalindrome(int x) {
        //two pointers, one at the start of the list and one at the end. for half of the list, check if equal/ or until reaching the pivot. if not equal at any point, break and set false.
        if(x < 0){
            return false;
        }
        long long reversed = 0;
        long long temp = x;

        while(temp !=0){
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        return (reversed == x);
    }
};
