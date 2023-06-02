int main(){
    int w, h, n, d, x, y, l, a[150][150]={};

    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d%d%d%d", &l, &d, &x, &y);
        for(int j = 0; j < l; j++){
            if(d==1) a[x+j][y] = 1;
            else a[x][y+j] = 1;
        }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}