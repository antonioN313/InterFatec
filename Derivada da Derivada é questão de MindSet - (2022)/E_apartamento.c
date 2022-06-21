#include<stdio.h>
#include<math.h>

double t_ap(double, double, double);


int main()
{
    double I,A,T;

    scanf("%lf",&I);
    scanf("%lf",&A);
    scanf("%lf",&T);



    if ((t_ap(I,A,T)) == 0 || (t_ap(I,A,T)) < 0 )
    {
        printf("pode comprar agora");
    }
    else if((t_ap(I,A,T) == 1)||(t_ap(I,A,T) > 0))
    {
        printf("possivel em %.0lf mes",t_ap(I,A,T));
    }
    else if((t_ap(I,A,T) != 0) || (t_ap(I,A,T) > 1))
    {
        printf("possivel em %lf meses",t_ap(I,A,T));
    }

    return 0;
}

double t_ap(double inicial,double ap, double taxa)
{
    double tempo,t,d_montante;

    t= 1+(taxa/100);
    d_montante = ap/inicial;

    tempo = log(d_montante) / log(t);

    if( tempo != 0)
    {
      ceil(tempo);
    }
    else if(ceil(tempo) == 0)
    {
        tempo = 0;
    }
    return (tempo);
}



