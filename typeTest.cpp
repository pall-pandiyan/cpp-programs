#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

int N;
double dist[20] [20], memo[1<<16]; // 1<<16 is 2^16

double matching(int bitMask) {
    if (memo[bitMask] > -0.5) {
        return memo[bitMask];
    }
    if (bitMask == (1<<2 * N)-1) {
        return memo[bitMask] = 0;
    }
    double matchingValue = 32767 * 32767;
    for(int p1=0; p1<2*N; p1++)
        if (!(bitMask & (1<<p1))) {
            for(int p2 = p1+1; p2<2*N; p2++)
                if (!(bitMask & (1<<2)))
                    matchingValue = min(matchingValue, dist[p1][p2]+ matching(bitMask | (1<<p1) | (1<<p2)));
            break;
        }
    return memo[bitMask] = matchingValue;
}
int main() {
    char line[1000], name[1000];
    int i, j, caseNo=1, x[20], y[20];

    while(sscanf(gets(line), "%d", &N),N) {
        for(i=0; i<2*N; i++)
            sscanf(gets(line), "%s %d %d", &name, &x[i], &y[i]);
        for (i=0; i<2*N; i++)
            for (j=0; j<2*N; j++)
                dist[i][j] = sqrt( (double) (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]) );
        memset(memo, -1, sizeof memo);
        printf("Case %d: %.2lf\n", caseNo++, matching(0));
    }
    return 0;
}