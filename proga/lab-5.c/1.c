int main()
{
    double e = 0.00001;
    int i =1;
    int k = 1;
    double res = 0;
    double ch = 0; // текущий элемент последовательности
     // cчетчик
    double s = 0.0; // сумма и разность всех
    do{
        if(i % 2 != 0){
            ch = 1.0/k;
        }if(i %2 == 0){
            ch = -1.0/k;
      
        } 
        s+=ch;
        i++;
        k+=2;
    }while(fabs(ch) > e);
    res = 4.0 * s;
     
    printf("%lf",res);   
}
    
