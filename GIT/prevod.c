#include <stdio.h>

float max(float r,float g,float b){
    float m = (r > g) ? r : g;
    return (m > b) ? m : b;
}

void prevod(int r,int g,int b){
    float red = r/255.0;
    float green = g/255.0;
    float blue = b/255.0;

    float K = 1.0 - max(red,green,blue);
    float C,M,Y;
    if(K != 1){
        C = (1.0 - red - K)/(1.0 - K);
        M = (1.0 - green - K)/(1.0 - K);
        Y = (1.0 - blue - K)/(1.0 - K);}
    else{
        C = 0;
        M = 0;
        Y = 0;}
    printf("Pre zadane vstupy je vyskup pre CMYK nasledovny: C<%.2f> M<%.2f> Y<%.2f> K<%.2f>",C,M,Y,K);
}

int main(){
    unsigned int r,g,b;
    printf("Zadaj hodnotu pre RED (0-255) :");
    scanf("%u",&r);printf("\n");
    printf("Zadaj hodnotu pre GREEN (0-255) :");
    scanf("%u",&g);printf("\n");
    printf("Zadaj hodnotu pre BLUE (0-255) :");
    scanf("%u",&b);printf("\n");
    prevod(r,g,b);
    return 0;
}
