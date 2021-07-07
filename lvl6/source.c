void n()
{
    system("/bin/cat /home/user/level7/.pass");
    return ;
}

void m()
{
    puts("Nope");
    return ;
}

int main(int ac, char **av) 
{
    char *s1;
    void (*f)(void);

    s1 = malloc(64);
    f = malloc(4);
    f = &m;
    strcpy(s1, av[1]);
    f();
    return (0);
}