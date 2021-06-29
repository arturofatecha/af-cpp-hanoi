#include "cube.h"

cube::cube(){
    length_ = 0;
}

cube::cube(double length){
    length_ = length;
    return;
}

void cube::setLength(double length){
    length_ = length;
    return;
}

double cube::getLength(void){
    return length_;
}

double cube::getSurfaceArea(void){
    return length_*length_*6;
}

double cube::getVolume(void){
    return length_*length_*length_;
}
