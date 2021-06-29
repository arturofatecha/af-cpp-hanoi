#include "game.h"

game::game(int nCubes){

    int i = nCubes;
    cube c;

    while (i > 0){
        c.setLength(i);
        stacks_[0].push(c);
        i--;
    }
    return;
}

void game::move(int src, int dst){

    //std::cout << "Moving cube --" << stacks_[src].peek() << "-- FROM Stack " << src << " TO Stack " << dst << std::endl;
    stacks_[dst].push(stacks_[src].pop());

    return;
}

void game::hanoi(int nCubes, int src, int dst, int spare){

    if(nCubes == 1){
        move(src,dst);
    }
    else{
        hanoi(nCubes-1,src,spare,dst);
        move(src,dst);
        hanoi(nCubes-1,spare,dst,src);
    }

    return;
}

void game::displayStacks(void){

    std::cout << "*** STACK A contents: " << std::endl;
    stacks_[0].displayStack();
    std::cout << "*** STACK B contents: " << std::endl;
    stacks_[1].displayStack();
    std::cout << "*** STACK C contents: " << std::endl;
    stacks_[2].displayStack();
}