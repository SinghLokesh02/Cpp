// program to find surface area and volume of a cylinder


// C++ 

#include <bits/stdc++.h>
using namespace std;

const double pi = 3.141592653589793238463;

// Function to calculate surface area
double surfaceArea(double radius, double height)
{
    return 2 * pi * radius * (radius + height);
}

// Function to calculate volume
double volume(double radius, double height)
{
    return pi * radius * radius * height;
}

int main()
{

    // Radius = 3, Height = 5
    double radius = 3, height = 5;

    cout << "Surface Area = "
         << surfaceArea(radius, height) << endl;

    cout << "Volume = "
         << volume(radius, height) << endl;

    return 0;
}


//  C


// #include <stdio.h>
// const double pi = 3.141592653589793238463;

// // Function to calculate surface area
// double surfaceArea(double radius, double height)
// {
//     return 2 * pi * radius * (radius + height);
// }

// // Function to calculate volume
// double volume(double radius, double height)
// {
//     return pi * radius * radius * height;
// }

// int main()
// {

//     // Radius = 3, Height = 5
//     double radius = 3, height = 5;

//     printf("Surface Area = %f\n",
//          surfaceArea(radius, height));
//     printf("Volume = %f\n",
//          volume(radius, height));


//     return 0;
// }




// Python
// pi = 3.141592653589793238463

// Function to calculate surface area
// def surfaceArea(radius, height):
//     return 2 * pi * radius * (radius + height)

// Function to calculate volume
// def volume(radius, height):
//     return pi * radius * radius * height

// Radius = 3, Height = 5
// radius = 3
// height = 5

// print("Surface Area = ", surfaceArea(radius, height))
// print("Volume = ", volume(radius, height))



// JavaScript
// const pi = 3.141592653589793238463;
// Function to calculate surface area
// let surfaceArea = (radius, height) => {
//     return 2 * pi * radius * (radius + height);
// }

// // Function to calculate volume
// let volume = (radius, height) => {
//     return pi * radius * radius * height;
// }

// // Radius = 3, Height = 5
// radius = 3;
// height = 5;

// console.log("Surface Area = ", surfaceArea(radius, height));
// console.log("Volume = ", volume(radius, height));






