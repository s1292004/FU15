#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

class DiceGame {
    private:
        int r1,r2;
        int total;
        string name;

    public:
        DiceGame() {
            srand(time(0));
            r1 = rand()%6 + 1;
            r2 = rand()%6 + 1;
            total = r1 + r2;
        }
        int getValue(int id) { return (id > 2 || id <= 0)? 0: (id == 1)? r1:r2; }
        int getTotal() { return r1+r2; }

        void play() {
            cout << "What is your name?\n" << "> ";
            char ch;
            while(cin.get(ch) && ch != '\n') name += ch;
            cout << "Hello, " << name << "!" << endl;

            cout << "Rolling dice..." << endl;
            cout << "Die 1: " << r1 << endl;
            cout << "Die 2: " << r2 << endl;
            cout << "Total Value: " << total << endl;
            cout << name << " " << ((total > 7)? "won!":"lost") << endl;
        }
};

int main(void) {
    DiceGame game;
    game.play();
    return 0;
}
