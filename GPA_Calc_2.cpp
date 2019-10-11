#include <iostream>
using namespace std;

//My name:Dylan Miyamura
//The purpose of this program is to calculate the GPA of a
//term


int main()
{

        //Variables
        int am_class = 0; //The amount of classes the user is taking
        char response = 'Y'; //Confirmation variable
        int gpa = 0; //GPA that will be shown to the user
        int grade_amount = 0; //The grades interger value sum
        cont int SIZE = 15;
        cont float A = 4.0;
        cont float B = 3.0;
        cont float C = 2.0;
        cont float D = 1.0;
        cont float F = 0.0;
        int user_storage[am_class] = {}; //stores the users input of classes



        //Welcoming User
        cout << "Welcome to the GPA calculator program!!"
             <<endl << endl
             << "The GPA calculator is used by inputting the number of "
             << "courses you are taking. Then typing in" <<endl;
        cout << "the name of the course you are taking. Then"
             << " input the letter grade +/- after that and repeat" <<endl;
        cout << "for as many courses inputted." <<endl <<endl;

        //Asking for course name
        cout << "How much classes are you currently taking:";
        cin  >> am_class;
        cin.ignore(100,'\n');

        //Getting grades

        return 0;

}