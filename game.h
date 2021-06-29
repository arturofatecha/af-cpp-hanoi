#include "stack.h"

#define nSTACKS 3

class game{

    public:
        game(int nCubes);
        void move(int src, int dst);
        void hanoi(int nCubes, int src, int dst, int spare);
        void displayStacks(void);
    private:
        stack stacks_[nSTACKS];
};