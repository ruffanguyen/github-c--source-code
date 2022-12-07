#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int rollDice();

int main() {
    int sum = 0, playerPoint = 0;
    enum status {WON, LOST, CONTINUE};
    status resultStatus;
    srand(time(0));
    sum = rollDice();
    switch (sum) {
        case 7: case 11:
            resultStatus = WON;
            break;
        case 2: case 3: case 12:
            resultStatus = LOST;
            break;
        default:
            playerPoint = sum;
            cout << "Your point is: " << playerPoint << endl;
            resultStatus = CONTINUE;
            break;
    }
    while (resultStatus == CONTINUE) {
        sum = rollDice();
        if (sum == playerPoint)
            resultStatus = WON;
        else if (sum == 7)
            resultStatus = LOST;
    }
    if (resultStatus == WON)
        cout << "You win" << endl;
    else
        cout << "You lose" << endl;
    return 0;
}

int rollDice (void) {
    int die1 = 0, die2 = 0, sum = 0;
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    sum = die1 + die2;
    cout << "You rolled: " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}