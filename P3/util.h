#define DIAS_MES 30

int getMagikNumber(day, month, year){
    int sum = day + month + year;
    
    do{
        sum= digitSum(sum);
    }while(sum/10 != 0);
    
    return sum;
}

int isValidDate(int day, int month, int year){
    return  year > 0
            &&
            (month >= 1 && month <= 12)
            &&
            (
                (day >= 1 && day <= DIAS_MES)
                ||
                (month == 2 && month >= 1 && day <= 28)
            );
}

int digitSum(int number){
    int c = 0;
    while(number != 0){
        c += number%10;
        number /= 10;
    }
    return c;
}