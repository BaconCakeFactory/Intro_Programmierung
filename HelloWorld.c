#include <stdio.h>

int ausgabe(char a[]) {

    printf ("Hello, World! %s \n", a);
    //printf (a);
}

int main() {
    char a[] = "Das ist mein erstes C-Programm";
    
    ausgabe(a);
}

