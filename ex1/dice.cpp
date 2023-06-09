#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

class DiceGame {
    private:
        int r1,r2;

    public:
        DiceGame() {
            srand(time(0));
            r1 = rand()%6 + 1;
            r2 = rand()%6 + 1;
        }
        int getValue(int id) { return (id > 2 || id <= 0)? 0: (id == 1)? r1:r2; }
        int getTotal() { return r1+r2; }
};

int main(void) {
    DiceGame game;

    cout << "Rolling dice..." << endl;
    cout << game.getValue(1) << endl;
    cout << game.getValue(2) << endl;
    cout << "total: " << game.getTotal() << endl;
    return 0;
}
