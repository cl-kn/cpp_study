//***************************************************
/** 21/1/28
 * P152 list3.11 「NSDMIとメンバー初期化リスト」
 */
//***************************************************

#include <iostream>
#include <stdio.h>

class Book
{
    std::string title = "";
    int pageNum = 0;

public:
    Book();
    explicit Book(std::string title, int pageNum);

    void show() const;
};

Book::Book() : title("untitled")
{
}

Book::Book(std::string title, int pageNum)
    : title(title), pageNum(pageNum)
{
}

void Book::show() const
{
    std::cout << "title: " << title << std::endl
              << "pageNum:" << pageNum << std::endl;
}

int main(void)
{
    Book book1("dogs", 41);
    book1.show();

    std::cout << std::endl;

    Book book2;
    book2.show();
    return 0;
}