#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    f = fopen("000.txt", "r");
    if (f == NULL)
    {
        printf("Cannot open file!\n");
        return 0;
    }
    else
    {
        int n;
        while (fscanf(f, "%d", &n) != -1)
        {
            printf("%d ", n);
        }
        // // doc tu file
        // int n;
        // fscanf(f, "%d", &n);
        // int a[n];
        // for (int i = 0; i < n; i++)
        // {
        //     fscanf(f, "%d", &a[i]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
        // char c[100];
        // fscanf(f, "%s", c);
        // printf("%s", c);

        // in ki tu tu file ra ngoai
        //  char c = fgetc(f);
        //  while (c != EOF) {
        //     printf("%c", c);
        //     c = fgetc(f);
        //  }
    }
    fclose(f);
    return 0;
}