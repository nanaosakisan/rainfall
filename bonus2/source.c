int greetuser(av1, langue)
{
    char str[88];

    if (1 == langue)
        str = "Hyvää päivää";
    else if (2 == langue)
        str = "Goedemiddag!"; 
    else
        str = "Hello ";
    str = strcat("Hello ", av1);
    puts(str);
    return 0;
}

int main(in ac, char **av)
{
    char    str[36];
    char    str2[36];
    char    *lang;
    int     langue;

    if (ac == 3)
    {
        strncpy(str, av[1], len); //-> 0xbffff6c0
        strncpy(str2, av[2], len); //-> 0xbffff6e8
        lang = getenv("LANG");

        if (lang != 0) 
        {
            if memcmp(lang, "fi", len) != 0
                langue = 1;
            if memcmp(lang, "nl", len) != 0
                langue = 2;
            greetuser(av1, langue)
        }
    }
    return (0);
}