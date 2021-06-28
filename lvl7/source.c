char c[68]

void m()
{
    t_time t;
    
    t = time(0);
    printf("%s - %d\n", c, t);
    return ;
}

int main (int ac, char **av)
{
    char *s1;
    char *s2;
    int fd;

    s1 = malloc(8);
    s1[0] = 1;
    s1[4] = malloc(8);

    s2 = malloc(8);
    s2[0] = 1
    s2[4] = malloc(8);

    strcpy(s1[4], av[1]);
    strcpy(s2[4], av[2]);
    fd = fopen("/home/user/level8/.pass");
    fgets(c, 68, fd);
    puts("~~");
    return (0);
}
