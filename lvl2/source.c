int p() 
{
    char str[76]
    
    gets(str);
    if (strcmp(str, "2952790016")) 
    {
        printf(str);
        exit();
    }
    puts(str);
    strdup(str, dest);
    return (0);
}

int main (int ac, char** av) 
{
    p();
    return (0);
}