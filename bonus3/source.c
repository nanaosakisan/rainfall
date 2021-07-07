#include <stdio.h>

int main(int ac, char **av)
{
    FILE *file;
    char buf[];
    char buf2[];
    int num;

    file = fopen("/home/user/end/.pass", "r"); //-> essaie d'ouvrir un fichier mais 
                                            //pas les droits
    if(!file || ac == 2)
        return -1;
    fread(buf1, 1, 66, file);
    num = atoi(av[1]);
    buf[nb] = 0;
    fread(buf2, 1, 65, file);
    fclose(file);
    if (strcmp(buf1, num) == 0)
        execl("/bin/sh", "sh"); //-> executer ca !
    puts(buf2);                 //-> ou afficher ca
    return (0);
}
