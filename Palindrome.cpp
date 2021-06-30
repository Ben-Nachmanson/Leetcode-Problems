#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) 
    {
       long n = x, num = x, digit, rev = 0;
 
       if(num < 0)
        {
            return false;
        }
        
       while(num!=0)
       {
           digit = num % 10;
           rev = (rev*10) + digit;
           num = num/10;
       }
        
        return n == rev;
    
    }
};

int main()
{
    Solution x;
    std::cout << x.isPalindrome(-121);
}