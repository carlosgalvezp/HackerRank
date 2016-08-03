#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book
{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a)
        {
            title= t;
            author= a;
        }
        virtual void display()=0;

};

class MyBook : public Book
{
public:
    MyBook (const std::string& title,
            const std::string& author,
            const int price)
        : Book (title, author),
          price_(price)
    {}

    virtual void display()
    {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Price: " << price_ << std::endl;
    }

private:
    int price_;
};

int main()
{
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
