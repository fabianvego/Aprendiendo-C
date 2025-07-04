#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[],int max);
int strindex(char source[], char searchfor[]);

char pattern []="ould";

int main()
{
    char line[MAXLINE];
    int found=0;

    while (get_line(line, MAXLINE)>0)
    {
        if (strindex(line, pattern)>=0)
        printf("%s", line);
        found ++;
    }
    return found;
}

int get_line(char s[], int lim) 
{
    int c,i;
    i=0;
    while (--lim>0 && (c=getchar())!= EOF && c !='\n')
    {
        s[i++]=c;
    }
    if (c=='\n'){
            s[i++]=c;
    }
    s[i]='\0';
    return i;
}
int strindex(char source[], char searchfor[]) {
    int i, j, k;
    for (i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++);
        if (k > 0 && searchfor[k] == '\0')
            return i; 
    return -1; 
}

// $ ./buscar
// You could try again     ← escribes esto
// You could try again     ← el programa imprime esta línea porque contiene "ould"
// Maybe you would help    ← escribes esto
// Maybe you would help    ← se imprime también
// That can't work          ← escribes esto
// ^D                       ← presionas Ctrl+D para terminar (EOF)


