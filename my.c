#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

void getMinimumPenalty(char *x, char *y, int pxy, int pgap)
{
    int i, j, m, n;
    m = strlen(x);
    n = strlen(y);
    int dp[n + m + 1][n + m + 1];
    memset(dp, 0, sizeof(dp));

    for (i = 0; i <= (n + m); i++)
    {
        dp[i][0] = i * pgap;
        dp[0][i] = i * pgap;
    }

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(max(dp[i - 1][j - 1] + pxy, dp[i - 1][j] + pgap), dp[i][j - 1] + pgap);
            }
        }
    }

    int l = n + m;
    i = m;
    j = n;
    int xpos = l;
    int ypos = l;
    int xans[l + 1], yans[l + 1];
    while (!(i == 0 || j == 0))
    {
        if (x[i - 1] == y[j - 1])
        {
            xans[xpos--] = (int)x[i - 1];
            yans[ypos--] = (int)y[j - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j - 1] + pxy == dp[i][j])
        {
            xans[xpos--] = (int)x[i - 1];
            yans[ypos--] = (int)y[j - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] + pgap == dp[i][j])
        {
            xans[xpos--] = (int)x[i - 1];
            yans[ypos--] = (int)'_';
            i--;
        }
        else if (dp[i][j - 1] + pgap == dp[i][j])
        {
            xans[xpos--] = (int)'_';
            yans[ypos--] = (int)y[j - 1];
            j--;
        }
    }
    while (xpos > 0)
    {
        if (i > 0)
            xans[xpos--] = (int)x[--i];
        else
            xans[xpos--] = (int)'_';
    }
    while (ypos > 0)
    {
        if (j > 0)
            yans[ypos--] = (int)y[--j];
        else
            yans[ypos--] = (int)'_';
    }

    int id = 1;
    for (i = l; i >= 1; i--)
    {
        if ((char)yans[i] == '_' && (char)xans[i] == '_')
        {
            id = i + 1;
            break;
        }
    }
    printf("Hamgiin baga haritsuulaltiin torguuli ni = ");
    printf("%d\n", dp[m][n]);
    printf("haritsuulagdsan daraallud : \n");
    for(i = id; i <= l; i++){
        printf("%c", (char)xans[i]);
    }
    printf("\n");
    for(i = id; i <= l; i++){
        printf("%c", (char)yans[i]);
    }
    return;
}

int main(){
    char gene1[20];
    char gene2[20];
    printf("hoyr daraalalaa oruulaarai:\n");
    scanf("%s", gene1);
    scanf("%s", gene2);
    int misMatchPenalty;
    int gapPenalty;
    scanf("%d", &misMatchPenalty);
    scanf("%d", &gapPenalty);    
    getMinimumPenalty(gene1, gene2, misMatchPenalty, gapPenalty);
    return 0;
}