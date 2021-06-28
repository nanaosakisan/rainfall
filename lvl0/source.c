#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int     nb;
    char    **arr;
    uid_t   uid;
    gid_t   gid;

    nb = argv[1];
    if (atoi(nb) == 423)
    {
        arr[0] = strdup("/bin/sh");
        arr[1] = NULL;

        gid = getegid();
        uid = geteuid();

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);

        execv("/bin/sh", arr);
    }
    else
    {
        fwrite("No !\n", 1, 5, stderr);
    }
}