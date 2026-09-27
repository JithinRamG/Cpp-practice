#include <iostream>
using namespace std;

int main() {
    float penCost , pencilCost , eraserCost;
    cin >> penCost;
    cin >> pencilCost;
    cin >> eraserCost;

    float totalCost = penCost + pencilCost + eraserCost;

    cout << "total = " << totalCost << endl;
    cout << "total with GST = " << (totalCost + (0.18 * totalCost)) << endl;

    return 0;

}
    
