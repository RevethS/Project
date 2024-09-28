#include "func.h"
#include <iostream>
using namespace std;

int main () {
    Setup();
    while (!gameOver) 
    {
        Draw();
        Input();
        Logic();
        Sleep(100);  
    }
    return 0;
}
