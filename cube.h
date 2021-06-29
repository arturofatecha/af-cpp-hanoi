#pragma once

#include <iostream>

class cube{
    public:
        cube();
        cube(double length);
        void setLength(double length);
        double getLength(void);
        double getSurfaceArea(void);
        double getVolume(void);
    private:
        double length_;
};