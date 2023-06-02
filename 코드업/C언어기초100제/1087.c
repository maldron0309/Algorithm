int main(void) {
  int n;
  
  scanf("%d", &n);
  
  int i = 0, s = 0;
  while(n >= i){
      
    if(n==i)
    break;
    
    s++;
    i += s;
  }
  printf("%d", i);
}
