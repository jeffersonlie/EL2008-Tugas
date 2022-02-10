#include <stdio.h>
#include <stdlib.h>

struct kehadiran {
    char nama[10];
    int nim[10];
    float hadir[10];
};

struct kehadiran daftar[10] = {{"Andi", 132001, 80},{"Budiman", 132003, 95},{"Cecep", 132005, 65},{"Dodi", 132007, 90},{"Eka", 132009, 75},
{"Fani", 132011, 100},{"Gopi", 132015, 45},{"Hana", 132017, 70},{"Irina", 132019, 85},{"Jeri", 132021, 55}};

int main()
{
    int i;
    for (i=1; i<10; i++){
        if ((int)daftar[i].hadir < 80){
            printf("%d%f\n", daftar[i].nama, daftar[i].nim);
        }
    }
}
