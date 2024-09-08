#include <stdio.h>
#include <math.h>

//UCFID: 5239773

//Functions being implemented
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

//Helper function that uses the pythagorean theorem to find distance
    double distance(double x1, double y1, double x2, double y2){
        //pythagorean theorum distance = sqrt((x2-x1)^2 + (y2-y1)^2)
        return sqrt(pow(x2-x2, 2)+ pow(y2-y1, 2));

    }



//Main function
int main(int argc, char **argv){
    
    //Call other functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}



//Function for calculating distance
double calculateDistance(){
    //treats points as a double
    double x1, y1, x2, y2;
    
    //user askForUserInput to get each point
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();

    //Output user inputs
    printf("\nPoint #1 entered: x1 = %.2lf, y1 = %.2lf", x1, y1);
    printf("\nPoint #2 entered: x2 = %.2lf, y2 = %.2lf", x2, y2);

    //Used for calculating distance and calling it as a double
    double dist = distance(x1, y1, x2, y2);
    printf("\nThe distance between the two points is %.2lf", dist);

    return dist;
}

//Function for calculating perimeter
double calculatePerimeter(){
    //treats points as a double
    double x1, y1, x2, y2;
    
    //user askForUserInput to get each point
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();

    // Output user inputs
    printf("\nPoint #1 entered: x1 = %.2lf, y1 = %.2lf", x1, y1);
    printf("\nPoint #2 entered: x2 = %.2lf, y2 = %.2lf", x2, y2);

    //Call calculateDistance(); to get the distance
    double dist = distance(x1, y1, x2, y2);

    //Use the distance to calculate the perimeter
    double perimeter = 2 * dist;
    printf("\nThe perimeter of the city encompassed by your request is %.2lf", perimeter);

    return 3.0; //I originally had some difficulty with the section on using a helper function but luckily some stackoverflow forums and math helped.

}

double calculateArea(){
   //treats points as a double
    double x1, y1, x2, y2;
    
    //user askForUserInput to get each point
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    //Output user inputs
    printf("\nPoint #1 entered: x1 = %.2lf, y1 = %.2lf", x1, y1);
    printf("\nPoint #2 entered: x2 = %.2lf, y2 = %.2lf", x2, y2);
    
    //Call calculateDistance(); to get distance for area
    double dist = distance(x1, y1, x2, y2);

    //Calculate area using distance
    double area = dist * dist;
    printf("\nThe area of the city encompassed by your request is %.2lf", area);

    return 3.0; //Was still a little difficult but once I had the perimeter one figured out it was a lot easier.

}

double calculateWidth(){
   //treats points as a double
    double x1, y1, x2, y2;
    
    //user askForUserInput to get each point
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    //Output user inputs
    printf("\nPoint #1 entered: x1 = %.2lf, y1 = %.2lf", x1, y1);
    printf("\nPoint #2 entered: x2 = %.2lf, y2 = %.2lf", x2, y2);

    //Calculate Width using the distance between x using fabs to get the absolute value
    double width = fabs(x2 - x1);
    printf("\nThe width of the city encompassed by your request is %.2lf", width);

    return 1.0; //Easiest by far since its just the difference between the two points

}

double calculateHeight(){
   //treats points as a double
    double x1, y1, x2, y2;
    
    //user askForUserInput to get each point
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    //Output user inputs
    printf("\nPoint #1 entered: x1 = %.2lf, y1 = %.2lf", x1, y1);
    printf("\nPoint #2 entered: x2 = %.2lf, y2 = %.2lf", x2, y2);

    //Calculate Width using the distance between y using fabs to get the absolute value
    double height = fabs(y2 - y1);
    printf("\nThe height of the city encompassed by your request is %.2lf", height);

    return 1.0; //Easiest by far since its just the difference between the two points

}
//Function for asking for user input because the following was too much 
/*User input using scanf
   printf("Enter x1: ");
   scanf("%.2lf", &x1);
   printf("Enter y1: ");
   scanf("%.2lf", &y1);
   printf("Enter x2: ");
   scanf("%.2lf", &x2);
   printf("Enter y2: ");
   scanf("%.2lf", &y2);*/
double askForUserInput(){
   
   //Treats the point as a double and then returns it after the user inputs it
    double point;
    printf("\nEnter a point: ");
    scanf("%lf", &point);
    return point;

}