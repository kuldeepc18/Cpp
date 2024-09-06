#include <iostream>

using namespace std;

int main()
{

    int score;
    score = 110;

    const int uid = 232323;

    int myBalance = 500;
    myBalance = 1000;

    // gives error as uid is declared as const int
    //  uid = 1000;
    cout << "Welcome to chai with cpp 1" << endl;

    // cout << "Welcome to chai with cpp 2" << endl;
    return 0;
}