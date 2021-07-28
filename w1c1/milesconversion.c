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
float convert_miles_to_metric(float mi) {
    float km = (mi * 1.609);
    return km; 
}

int main() {
    double miles, kilometers, meters;

    //print out user information
    printf("This program converts from miles to kilometers(or meters).\n");

    //get user input
    printf("Enter a distance in miles >");
    scanf("%lf", &miles);

if (km>1) {
    // calculate the distance in km
    kilometers = convert_miles_to_km(miles);
    
    // output the result
    printf("%lfC == %lfF\n", mi, km);
} else {
    // calculate the distance in km
    meters = convert_miles_to_km(miles) * 1000;
    
    // output the result
    printf("%lfC == %lfF\n", mi, m);
}
    return(0);
}