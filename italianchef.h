#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class italianChef : public Chef
{
private:
    std::string password = "pizza";
    int flour;
    int water;

public:
    italianChef(std::string name);
    ~italianChef();

    bool askSecret(std::string secret, int flourAmount, int waterAmount);

private:
    void makePizza(int flourAmount, int waterAmount);
};

#endif // ITALIANCHEF_H
