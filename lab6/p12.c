// In digital world colors are speciƒed in RGB format, with values of R, G, and B varying on
// integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
// format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB
// color to CMYK as per formula:
// - White=Max(red/255,green/255,blue/255)
// - Cyan=(white - red/255)/white
// - Magenta=(white - green/255)/white
// - Yellow=(white - blue/255)/white
// - Black=1 - white
// Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.
#include<stdio.h>
#include<math.h>
void main()
{
    float red,green,blue,cyan,Meganta,Yellow,k,white,black;
    float a,b,c;
    printf("enter red(0-255): ");
    scanf("%f",&red); 
     printf("enter blue(0-255): ");
    scanf("%f",&blue);
     printf("enter  green(0-255): ");
    scanf("%f",&green);
    if(red==0 && blue==0 && green==0)
    {
        cyan=0;
        Meganta=0;
        Yellow=0;
        k=1;
    }
    else
    {
        a=(red/255);
        b=(green/255);
        c=(blue/255);
        (a>b)?((a>c)?(white=a):(white=c)):((b>c)?(white=b):(white=c));
        cyan=(white - red/255)/white;
        Meganta=(white - green/255)/white;
        Yellow=(white - blue/255)/white;
        black=1 - white;
    }
        printf("%f %f %f %f\n",white,cyan,Meganta,Yellow);       
}