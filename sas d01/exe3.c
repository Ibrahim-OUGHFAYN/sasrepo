#include <stdio.h>

int main(){
    float pi=3.14;
    int r;
    float rdt=3.0/4.0;
    printf("donner le rayon du cercle :");
    scanf("%d", &r);
    float vol=rdt*pi*r*r*r;
    printf("le volume de cercle est :%f", vol);
    return 0;
}