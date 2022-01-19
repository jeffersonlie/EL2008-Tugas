#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=0;
int b=0;
int x;
while (b!=4) {
    printf ("\nProgram Waterjug\n");
    printf ("Air di A: %d\n", a);
    printf ("Air di B: %d\n", b);
    printf ("1. Isi A sampai penuh\n");
    printf ("2. Isi B sampai penuh\n");
    printf ("3. Kosongkan A\n");
    printf ("4. Kosongkan B\n");
    printf ("5. Pindahkan air dari A ke B sampai penuh\n");
    printf ("6. Pindahkan air dari B ke A sampai penuh\n");
    printf ("Pilih instruksi:");
    scanf ("%d", &x);

    if (x==1) {
        a=a+3;
        if (a>3){a=3;}
    }
    if (x==2) {
        b=b+5;
        if (b>5){b=5;}
    }
    if (x==3) {
        a=0;
    }
    if (x==4) {
        b=0;
    }
    if (x==5) {
        b=b+a;
        a=0;
        if (b>5) {
            a=a+(b-5);
            b=5;
        }
    }
    if (x==6) {
        a=a+b;
        b=0;
        if (a>3) {
            b=b+(a-3);
            a=3;
        }
    }

}
printf ("Air di A: %d\n", a);
printf ("Air di B: %d\n", b);
return 0;
}
