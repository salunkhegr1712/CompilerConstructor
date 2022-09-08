#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE*fl=fopen("input.txt","r");
    FILE*fo=fopen("output.txt","w");


    char s[4];
    int i=0001;


    sprintf(s, "%04d",i);
    fwrite(&s, sizeof(i), 1, fo);

    char g=32;
    fwrite(&g, sizeof(g), 1, fo);
    char z;
    char ch=fgetc(fl);


    // EOF is end of the file 
    while (ch!=EOF)
    {       // printf("%c",ch);
        if(z=='\n'){
            
            i++;
            sprintf(s, "%04d", i);
            fwrite(&s, sizeof(s), 1, fo);
            g=32;
            fwrite(&g, sizeof(g), 1, fo);
        }
        /* code */
        fwrite(&ch, sizeof(ch), 1, fo);
        z=ch;
        ch=fgetc(fl);
    }
    return 0;
}