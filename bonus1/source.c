int main (int ac, char **av)
{
    int num;
    char dest[40]

    num = atoi(av[1]);
    if (num <= 9)
    {
        memcpy(dest, av[2], sizeof(int)*num);
        if (num == 0x574f4c46)
            execl("/bin/sh","sh",0);
    }
    return (0);
}