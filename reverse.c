int main(){
    int i, t=1, y=0, neg=0, x;
    printf("Enter the number to be reversed: ");
    scanf("%d",&x);
    if(x<0){
        neg=1;
        x=-1*x;
    }
    if(x>846384712){
        return 0;
    }
    while(x/t>=10){
        t=t*10;
    }
    int p=t;
    while(t>=1){
        int d=x/t;
        y=y+p*d/t;
        x=x-d*t;
        t=t/10;
    }
    if(neg==1){
        y=-1*y;
    }
    printf("\n%d",y);
}