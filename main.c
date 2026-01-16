#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, hata = 1, i, j, x, y, sayac, d, r, xyeni, yyeni, hamle;

    srand(time(NULL));

    n = rand() % 5 + 3;

    int xyon[] = {-1, 0, 0, 1};
    int yyon[] = {0, -1, 1, 0};

    char matris[n][n], word[] = ".NET_CORE";

    while (hata == 1)
    {
        hata = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                matris[i][j] = '#';
            }
        }

        x = rand() % n;
        y = rand() % n;

        matris[x][y] = word[0];

        sayac = 1;
        while (sayac < 9)
        {
            hamle = 0;
            for (d = 0; d < 15; d++)
            {
                r = rand() % 4;

                xyeni = x + xyon[r];
                yyeni = y + yyon[r];

                if (xyeni >= 0 && xyeni < n && yyeni >= 0 && yyeni < n && matris[xyeni][yyeni] == '#')
                {
                    matris[xyeni][yyeni] = word[sayac];
                    x = xyeni;
                    y = yyeni;
                    hamle = 1;
                    sayac++;
                    break;
                }
            }
            if (hamle == 0)
            {
                hata = 1;
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", matris[i][j]);
        }
        printf("\n");
    }
}
