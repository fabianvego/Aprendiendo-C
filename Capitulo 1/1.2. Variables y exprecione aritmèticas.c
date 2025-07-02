/*imprime la tabla Fahrenheit-Celsius
    para farh = 0, 20, 40.. 300*/

#include <stdio.h>
int main(){
    int farh, celsius;
    int lower, upper, step;

    lower = 0;/*limite inferior*/
    upper = 300;/*limite superio*/
    step = 20;/*pasos*/

    farh=lower;
    while (farh<=upper)
    {
        celsius = 5 * (farh-32) / 9;
        printf("%d\t%d\n", farh, celsius);
        farh= farh + step;
    }
}