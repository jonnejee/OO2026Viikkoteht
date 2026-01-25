#include "italianchef.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

italianChef::italianChef(string name) : Chef(name)
{
    cout << "ItalianChef "<< name << " konstruktori" << endl;
}

italianChef::~italianChef()
{
    cout << "ItalianChef "<< chefName << " destruktori" << endl;
}

bool italianChef::askSecret(string secret, int flourAmount, int waterAmount)
{
    if (secret == password)
    {
        makePizza(flourAmount, waterAmount);
        return true;
    }
    return false;
}

void italianChef::makePizza(int flourAmount, int waterAmount)
{
    int pizzas = std::min(flourAmount / 5, waterAmount / 5);
    if (pizzas > 0)
    {
        cout << "ItalianChef " << getName() << " with " << flourAmount << " flour and " << waterAmount << " water can make " << pizzas << " pizzas" << endl;
    }
}
