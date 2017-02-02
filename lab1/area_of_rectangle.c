//
// Created by Paul Brittain on 01/02/2017.
//

#include <stdio.h>
#include "area_of_rectangle.h"

int area_of_rectangle(int length, int width) {

    int area;
    int len = length;
    int wdth = width;

    printf("Finding area of Rectangle");

    printf("Length: %d\n",len);
    printf("Width: %d\n",wdth);

    area = len * wdth;

    printf("Area: %d",area);

    return area;
}