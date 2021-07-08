#include <iostream>
#include <string>
#include <stdio.h>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;

        for (auto &x : s)
        {
            if (x == '(' || x == '[' || x == '{')
            {
                stack.push(x);
            }
            else if (x == ')' && !stack.empty() && stack.top() == '(')
            {
                stack.pop();
            }
            else if (x == ']' && !stack.empty() && stack.top() == '[')
            {
                stack.pop();
            }
            else if (x == '}' && !stack.empty() && stack.top() == '{')
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }

        return stack.empty();
    }
};