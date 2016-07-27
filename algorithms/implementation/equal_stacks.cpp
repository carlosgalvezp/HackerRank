#include <iostream>  // std::cin
#include <deque>
#include <algorithm>

void computeTest();

template <class T>
class Stack
{
public:
    Stack()
        : cylinders_(0U),
          height_()
    {
    }
    void push(const T& height)
    {
        cylinders_.push_front(height);
        height_ += height;
    }

    void pop()
    {
        auto it = cylinders_.end() - 1U;
        height_ -= *it;
        cylinders_.pop_back();
    }

    T getHeight() const { return height_; }

private:
    std::deque<T> cylinders_;
    T height_;
};

void readStack(const std::size_t n, Stack<std::size_t>& stack);

int main()
{
    // Read stacks
    std::size_t n1;
    std::size_t n2;
    std::size_t n3;


    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    Stack<std::size_t> stack1;
    Stack<std::size_t> stack2;
    Stack<std::size_t> stack3;

    readStack(n1, stack1);
    readStack(n2, stack2);
    readStack(n3, stack3);

    // Pop element from highest stack until equal height
    bool equal_height = false;
    while (!equal_height)
    {
        // Get stack of max height
        const std::size_t h1 = stack1.getHeight();
        const std::size_t h2 = stack2.getHeight();
        const std::size_t h3 = stack3.getHeight();

        if ((h1 == h2) && (h2 == h3) && (h1 == h3))
        {
            equal_height = true;
        }
        else
        {
            std::size_t h_max = std::max({h1, h2, h3});

            // Pop element from it
            if (h_max == h1)
            {
                stack1.pop();
            }
            else if (h_max == h2)
            {
                stack2.pop();
            }
            else
            {
                stack3.pop();
            }
        }
    }
    std::cout << stack1.getHeight();

    return 0;
}

void readStack(const std::size_t n,
               Stack<std::size_t>& stack)
{
    for (std::size_t i = 0U; i < n; ++i)
    {
        std::size_t height;
        std::cin >> height;
        stack.push(height);
    }
}
