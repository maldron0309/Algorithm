int main(){
    int n[10000], a, min = 24;
    scanf("%d", &a);
    for(int i=1; i<=a;i++){
        scanf("%d", &n[i]);
    }
    for(int i = 1; i <= a; i++){
        if (n[i] < min){
            min = n[i];
        }
    }
    printf("%d", min);
}