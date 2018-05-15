#include <stdint.h>
#include <string.h>
#include <stdbool.h>


int32_t ft_des(char * str) {
    char * str2 = strdup(str); // 0x8048481
    int32_t result = (int32_t)str2; // 0x8048481_3
    if (strlen(str2) == 0) {
        // 0x8048583
        return result;
    }
    int32_t v1 = 0; // 0x804857a2943
    int32_t v2 = 0; // 0x80485573142
    while (true) {
        int32_t v3 = v2 == 6 ? 0 : v2; // 0x804855731
        char * v4 = (char *)(v3 + (int32_t)"0123456");
        unsigned char v5 = *v4; // 0x804854837
        int32_t v6; // 0x8048553
        if (v1 % 2 == 0) {
            // 0x80484ff
            if (v5 > 0) {
                char * v7 = (char *)(v1 + result); // 0x804851a_0
                char v8 = *v7 - 1; // 0x804851d
                char v9 = v8 == 31 ? 126 : v8; // 0x804851d
                *v7 = v9;
                int32_t v10 = 1; // 0x804853c
                // branch -> 0x8048512
                while ((int32_t)*v4 > v10) {
                    // 0x8048512
                    v8 = v9 - 1;
                    v9 = v8 == 31 ? 126 : v8;
                    *v7 = v9;
                    v10++;
                    // continue -> 0x8048512
                }
              lab_0x8048553:
                // 0x8048553
                v6 = v1 + 1;
                if (strlen(str2) <= v6) {
                    // break -> 0x8048583
                    break;
                }
                v1 = v6;
                v2 = v3 + 1;
                // continue -> 0x804849c
                continue;
            }
        } else {
            // 0x80484ea
            if (v5 <= 0) {
                goto lab_0x8048553;
            }
            char * v11 = (char *)(v1 + result); // 0x80484c4_0
            char v12 = *v11 + 1; // 0x80484c7
            char v13 = v12 == 127 ? 32 : v12; // 0x80484c7
            *v11 = v13;
            int32_t v14 = 1; // 0x80484e6
            // branch -> 0x80484bc
            while ((int32_t)*v4 > v14) {
                // 0x80484bc
                v12 = v13 + 1;
                v13 = v12 == 127 ? 32 : v12;
                *v11 = v13;
                v14++;
                // continue -> 0x80484bc
            }
            // 0x8048553
            v6 = v1 + 1;
            if (strlen(str2) <= v6) {
                // break -> 0x8048583
                break;
            }
            v1 = v6;
            v2 = v3 + 1;
            // continue -> 0x804849c
            continue;
        }
        // 0x8048553
        v6 = v1 + 1;
        if (strlen(str2) <= v6) {
            // break -> 0x8048583
            break;
        }
        v1 = v6;
        v2 = v3 + 1;
        // continue -> 0x804849c
    }
    // 0x8048583
    return result;
}