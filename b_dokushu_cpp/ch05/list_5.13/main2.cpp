//***************************************************
/** 21/3/9
 * 配列の動的確保、の練習
 */
//***************************************************

#include <iostream>

class Corgi
{
    std::string name;
    std::string like;

public:
    Corgi() : Corgi("dog", "unknown"){};
    explicit Corgi(std::string name, std::string like) : name(name), like(like){};
    ~Corgi();

    void show_value() const;
};

Corgi::~Corgi(){};

void Corgi::show_value() const
{
    std::cout << "Corgi name:" << name << " like:" << like << std::endl;
};

int main(void)
{
    Corgi *corgi1 = new Corgi[2]{
        Corgi{"harry", "play"},
        Corgi{"corgi", "eat"},
    };

    for (int i = 0; i < 2; i++)
    {
        corgi1[i].show_value();
    }

    return 0;
}