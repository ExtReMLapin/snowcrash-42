#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

char *__cdecl ft_des(char *s);

int main(int argc, char ** argv) {
    // 0x804858c
   // if (getuid() == 0x1092) { // 4242
        // 0x80485cb
    return printf("your token is %s\n", (char *)ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I"));
   // }
    // 0x80485a1
    printf("UID %d started us but we we expect %d\n", getuid(), 0x1092);
    exit(1);
    // UNREACHABLE
}