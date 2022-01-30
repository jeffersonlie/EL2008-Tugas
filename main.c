#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FILE_NAME[]="Jefferson Grizzlie.pdf";
    char CC;
    FILE *myfile;
    int retval;

    myfile=fopen(FILE_NAME,"r");
    retval = fscanf (myfile,"%c","%8", &CC);
    if(myfile==NULL)
    {
        printf("File tidak terdefinisi");
    }
    else if (CC="25 50 44 46")
    {
        printf("File adalah file pdf");
    }
    else if (CC="FF D8")
    {
        printf("File adalah file jpg");
    }

    fclose(myfile);
}
