// Write a program to calculate simple and compound interest for given principal, rate, and time.


           #include <stdio.h>

            int main() {
                float si,ci,r,p,t,a;
                printf("Enter Principal,Rate and Time:");
                scanf("%f %f %f",&p,&r,&t);
                si=(p*r*t)/100;
                a=p;
                for(int i=1;i<=t;i++){
                    a=a*(1+(r/100));
                    
                }
                ci=a-p;
                printf("Simple Interest=%0.2f, Compound Interest=%0.2f",si,ci);
                return 0;
            }