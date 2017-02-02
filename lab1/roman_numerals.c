//
// Created by Paul Brittain on 01/02/2017.
//

#include <string.h>
#include <stdio.h>
#include "roman_numerals.h"

char* get_numeral(int val) {

    int a = 13;
    char* return_val = "";
    static int decimals[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    static char* roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    for (int i = a; --i >= 0;){

        if ( val > decimals[a] ) {
            return_val = roman[i];
            break;
        }
    }

    return  return_val;
}

char* get_roman_num( int number) {

    int x = number;
    char myString[255] = "";

    do {
        strcat(myString, get_numeral(x) );
        printf("%d\n",x);
        printf("%s\n",myString);

        x = number - x;

    } while ( x > 0 );

    return  myString;

}