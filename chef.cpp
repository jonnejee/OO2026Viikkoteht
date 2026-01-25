#include "chef.h"
#include <iostream>

using namespace std;


Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int servings = (ingredients / 5);
    cout << "Chef " << chefName << " with " << ingredients << " items can make salad " << servings << " portions" << endl;
    return servings;
}
int Chef::makeSoup(int ingredients)
{
    int servings = (ingredients / 3);
    cout << "Chef " << chefName << " with " << ingredients << " items can make soup " << servings << " portions" << endl;
    return servings;
}
