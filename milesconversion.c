/* milesconversion.c
 * a basic c program which converts a user input
 * distance in miles to kilometers or meters.
 */

#include <stdio.h>
#include <stdlib.h>

/* convert_miles_to_km
 * this function converts a distance in miles to km or m
 * params: 
 *      mi (float) - the distance in miles
 * return:
 *      float - the distance in km or m
 */
float convert_miles_to_km(float mi)
if (km > 1) {
    float km = (mi * 1.609)
    return km;
} else {
    float m = (mi * 1.609)/1000;
    return m; 
}

int main() {
    double kilometers, miles;

    //print out user information
    printf("This program converts from miles to kilometers(or meters).\n");

    //get user input
    printf("Enter a distance in miles >");
    scanf("%lf", &miles);

    // calculate the distance in km
    kilometers = convert_miles_to_km(miles);
    
    // output the result
    printf("%lfC == %lfF\n", miles, km);

    return(0);
}