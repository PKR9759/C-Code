# include<stdio.h>

int main(){
    int nodays, years,days, months;
    printf("Enter your days :");
    scanf("%d",&days);
    nodays =days;
    years = days/356;
    days = days%356;
    months = days/30;
    days = days%30;
    printf("%d days = %d years , %d months , %d days ", nodays, years, months,days);
    
    return 0;
}