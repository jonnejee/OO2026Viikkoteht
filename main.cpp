#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int game(int maxnum)
{
    int luku = (rand() % maxnum) + 1;
    int arvaus;
    int kierros = 0;
    do
    {
        cout << "Arvaa luku 1-" << maxnum << " ";
        cin >> arvaus;
        kierros++;
        {
        if (arvaus < luku)
        {
            cout << "Liian pieni" << endl;
        }
        else if (arvaus > luku)
        {
            cout << "Liian suuri" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
        }
        }

    } while (arvaus != luku);
    return kierros;
}

int main()
{
    srand(time(0));
    int kierros = game(40);
    cout << "Arvasit oikein " << kierros << " Yrityksen jalkeen." << endl;

}
