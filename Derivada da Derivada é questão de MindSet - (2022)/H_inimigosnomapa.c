#include <stdio.h>

int main()
{
    int I,II,III,IV,x,y,QI,i;

    i=1;
    I=0;
    II=0;
    III=0;
    IV=0;

    scanf("%d",&QI);

    while(i<=QI)
    {
        scanf("%d %d",&x,&y);

            if(x>=1 && y>=1)
            {
                I++;
            }
            else if(x>=1 && y<0)
            {
                II++;
            }
            else if(x < 0 && y<0)
            {
                III++;
            }
            else if(x<0 && y>=1)
            {
                IV++;
            }

        i++;

    }

    printf("I = %d\nII = %d\nIII = %d\nIV = %d\n",I,II,III,IV);

    return 0;
}
