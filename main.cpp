#include "game.h"

int main(void){

    int src = 0, dst = 2, sp = 1;
    int nCubes = 3;

    game hanoiGame(nCubes);

    std::cout << " ++++ Stacks BEFORE Hanoi Game +++ " << std::endl;
    hanoiGame.displayStacks();
    hanoiGame.hanoi(nCubes,src,dst,sp);

    std::cout << " ++++ Stacks AFTER Hanoi Game +++ " << std::endl;    
    hanoiGame.displayStacks();

    return 0;
}
