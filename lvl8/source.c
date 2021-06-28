int main()
{
    char *str[]
    char *auth;
    char *copy;

    while (1)
    {
        printf("%p, %p \n", auth, copy);
        fgets(str , int len, 1); // taille len ?
        if (strncmp("auth ", str, 5) == 0) 
        {
            auth = malloc(4); //toujours malloc de 4 ou fonction de la taille de str ?
            strcpy(auth, str+5);
        }
        else if (strncmp("reset", str, 5) == 0)
            free(auth);
        else if (strncmp("service", str, 6) == 0)
            copy = strdup(split[1] + 6);
        else if (strncmp("login", str, 5) == 0)
        {
            puts("Password\n");
            if (auth+32 != 0)
                system("/bin/sh");
        }
    }
    return(0);
}