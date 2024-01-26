// C++

#include <bits/stdc++.h>
using namespace std;

void farenheit_to_celcius(float farenheit)
{
    float celcius = (farenheit - 32) * 5 / 9;
    cout << "Temperature in Degree Celcius : " << setprecision(3) << celcius << endl;
}

int main()
{
    float farenheit = 40;
    farenheit_to_celcius(farenheit);

    return 0;
}



//  C

// #include <stdio.h>
// void farenheit_to_celcius(float farenheit)
// {
//     float celcius = (farenheit - 32) * 5 / 9;
//     printf("Temperature in Degree Celcius : %.2f ", celcius);
// }
// int main()
// {
//     float farenheit = 40;
//     farenheit_to_celcius(farenheit);
//     return 0;
// }



// Python

// def farenheit_to_celcius(num):
//     celcius = (farenheit - 32) * 5 / 9
//     print(round(celcius, 2))

// farenheit = 40
// farenheit_to_celcius(farenheit)



// Javascript
// let farenheit_to_celcius = num =>{
//     celcius = (farenheit - 32) * 5 / 9
//     console.log(celcius)
// }

// farenheit = 40
// farenheit_to_celcius(farenheit)