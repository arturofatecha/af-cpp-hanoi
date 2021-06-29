#include "cube.h"

#define MAX 64

class stack{

    public:
        stack();
        void push (cube c);
        cube pop (void);
        bool isEmpty(void);
        int peek(void);
        void displayStack(void);

    private:
        cube cubes_[MAX];
        int top_;
        
};