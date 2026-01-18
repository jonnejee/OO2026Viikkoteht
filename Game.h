#ifndef GAME_H
#define GAME_H

class Game
{
private:
    int maxNum;
    int salaNum;
    int arvaus;
    int yritykset;

public:
    Game(int max);
    ~Game();
    void play();
    void printResult();
};














#endif // GAME_H
