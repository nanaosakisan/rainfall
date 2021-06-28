int p()
{
    char buf[4120]
    char str[];

    puts(" - ");
    read(0, buf, 1000);
    strchr(buf, "\n");
    strncpy(str, buf, 20);
    return (str);
}

int pp()
{
    char str[50];
    input1[];
    input2[];

    input1 = p();
    input2 = p();
    strcpy(str, input1);
    strcat(str, input2);
    return (str);
}

int main(int ac, char **av)
{
    char str[64];
    
    str = pp();
    puts(str)
    return (0);
}