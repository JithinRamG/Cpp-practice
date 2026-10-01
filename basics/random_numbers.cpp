#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    long elapsedSeconds = time(NULL);
    srand(elapsedSeconds);
    int number = rand();
    cout << number;
    return 0;
}
