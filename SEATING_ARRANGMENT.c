#include<stdio.h>
int main()
{int x,i,z,p,y;
scanf("%d",&x);
 
    for(i=0;i<x;i++){
                     scanf("%d",&y);
                     z=y%12;
                     p=y/12;
                     if(z==1)
                     printf("%d WS",12+(p*12));
                     if(z==2)
                     printf("%d MS",11+(p*12));
                     if(z==3)
                     printf("%d AS",10+(p*12));
                     if(z==4)
                     printf("%d AS",9+(p*12));
                     if(z==5)
                     printf("%d MS",8+(p*12));
                     if(z==6)
                     printf("%d WS",7+(p*12));
                     if(z==7)
                     printf("%d WS",6+(p*12));
                     if(z==8)
                     printf("%d MS",5+(p*12));
                     if(z==9)
                     printf("%d AS",4+(p*12));
                     if(z==10)
                     printf("%d AS",3+(p*12));
                     if(z==11)
                     printf("%d MS",2+(p*12));
                     if(z==0)
                     printf("%d WS",1+((p-1)*12));
                     printf("\n");
    }
}
