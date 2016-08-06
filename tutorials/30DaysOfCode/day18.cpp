#include <iostream>
#include <deque>
#include <stack>
#include <string>

class Solution {
    //Write your code here
public:
    void pushCharacter(const char ch)
    {
        stack_.push(ch);
    }

    void enqueueCharacter(const char ch)
    {
        queue_.push_back(ch);
    }

    char popCharacter()
    {
        const char ch = stack_.top();
        stack_.pop();
        return ch;
    }

    char dequeueCharacter()
    {
        const char ch = queue_.front();
        queue_.pop_front();
        return ch;
    }

private:
    std::stack<char> stack_;
    std::deque<char> queue_;
};

int main()
{
    // read the string s.
    std::string s;
    std::getline(std::cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (std::size_t i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (std::size_t i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome)
    {
        std::cout << "The word, " << s << ", is a palindrome.";
    } else {
        std::cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
