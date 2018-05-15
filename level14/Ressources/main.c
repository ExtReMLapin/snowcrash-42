#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>


int main(void)
{
    printf("%s\n", ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|"));
    return (1);
}

int32_t ft_des(char * str) {
    char * str2 = strdup(str); // 0x8048611
    int32_t result = (int32_t)str2; // 0x8048611_3
    if (strlen(str2) == 0) {
        // 0x8048713
        return result;
    }
    int32_t v1 = 0; // 0x804870a2943
    int32_t v2 = 0; // 0x80486e73142
    while (true) {
        int32_t v3 = v2 == 6 ? 0 : v2; // 0x80486e731
        char * v4 = (char *)(v3 + (int32_t)"0123456");
        unsigned char v5 = *v4; // 0x80486d837
        int32_t v6; // 0x80486e3
        if (v1 % 2 == 0) {
            // 0x804868f
            if (v5 > 0) {
                char * v7 = (char *)(v1 + result); // 0x80486aa_0
                int32_t v8 = 0;
                // branch -> 0x80486a2
                while (true) {
                    // 0x80486a2
                    *v7 = *v7 - 1;
                    if (*v7 == 31) {
                        // 0x80486c1
                        *v7 = 126;
                        // branch -> 0x80486cc
                    }
                    int32_t v9 = v8 + 1; // 0x80486cc
                    if ((int32_t)*v4 <= v9) {
                        // break -> 0x80486e3
                        break;
                    }
                    v8 = v9;
                    // continue -> 0x80486a2
                }
              lab_0x80486e3:
                // 0x80486e3
                v6 = v1 + 1;
                if (strlen(str2) <= v6) {
                    // break -> 0x8048713
                    break;
                }
                v1 = v6;
                v2 = v3 + 1;
                // continue -> 0x804862c
                continue;
            }
        } else {
            // 0x804867a
            if (v5 <= 0) {
                goto lab_0x80486e3;
            }
            char * v10 = (char *)(v1 + result); // 0x8048654_0
            int32_t v11 = 0;
            // branch -> 0x804864c
            while (true) {
                // 0x804864c
                *v10 = *v10 + 1;
                if (*v10 == 127) {
                    // 0x804866b
                    *v10 = 32;
                    // branch -> 0x8048676
                }
                int32_t v12 = v11 + 1; // 0x8048676
                if ((int32_t)*v4 <= v12) {
                    // break -> 0x80486e3
                    break;
                }
                v11 = v12;
                // continue -> 0x804864c
            }
            // 0x80486e3
            v6 = v1 + 1;
            if (strlen(str2) <= v6) {
                // break -> 0x8048713
                break;
            }
            v1 = v6;
            v2 = v3 + 1;
            // continue -> 0x804862c
            continue;
        }
        // 0x80486e3
        v6 = v1 + 1;
        if (strlen(str2) <= v6) {
            // break -> 0x8048713
            break;
        }
        v1 = v6;
        v2 = v3 + 1;
        // continue -> 0x804862c
    }
    // 0x8048713
    return result;
}