#include <stdio.h>
#include <stdlib.h>

void tend(void);

int main(void)
{
    int *list = malloc(3*sizeof(int));
    if (list == NULL) return 1;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4*sizeof(int));
    if (tmp == NULL) return free(list), 2;

    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++) printf("%i\n", list[i]);

    free(list);
}