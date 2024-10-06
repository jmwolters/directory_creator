#include <iostream>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));

    int x;
    int y;
    cout << "Guess a number between 1 and 10\n";
    cin >> x;
    y = rand() % 10;
    if(x==y) {
        cout << "You guessed correct!\n";
    }
    else {
        cout << "Wrong number. The right number was " << y << ".\n";
    }
    cout << "Done";
    char c;
    cin >> c;
    // return 0;
    // cin >> x;
}