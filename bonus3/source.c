#include <stdio.h>

int main(int ac, char **av)
{
    FILE *file;
    char buf[];
    int num;

    file = fopen("/home/user/end/.pass", "r"); //-> essaie d'ouvrir un fichier mais 
                                            //pas les droitsset
    if(!file || ac == 2)
        return -1;
    fread(buf, 1, 66, file);
    num = atoi(av[1]);
    fread(buf, 1, 66, file);
    fclose();
    strcmp();
    execl("/bin/sh", "sh"); //-> executer ca !
    puts();
    return (0);
}

0x80486f2:	0x6d6f682f -> retour 1er read
0xb7fd0ff4:	0x001a4d7c -> retour 2eme read

