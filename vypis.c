#include <stdio.h>

int main(){
    unsigned int pocitadlo;
    for(pocitadlo = 0;pocitadlo<=256;pocitadlo++){
        printf("Na hodnote %d je v ASCI tabulke zapisany znak %c\n",pocitadlo,pocitadlo);
        if(pocitadlo%10 == 0 && pocitadlo != 0)
          getchar(); }
    return 0;
}
