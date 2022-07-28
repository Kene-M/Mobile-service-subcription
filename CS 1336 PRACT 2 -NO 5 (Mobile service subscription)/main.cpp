/*

    This program will calculate a customer's monthly service bill with the package
    he has chosen and shows how much they could have saved with other packages.


1. Initialize the constants.
        Assign the initial price of package A.
        Assign the initial price of package B.
        Assign the price of package C.
        Assign the minutes that the initial price of A covers.
        Assign the minutes that the initial price of B covers.

2. Ask the user to select a package between a, b, or c.
3. Validate the input.
        If it is invalid: Display an error message

        If it is valid:
            Display the charges based the selected package.
                Display output if package A was selected.
                    Get the number of minutes the customer used the package.
                        Check if the minutes that was gotten is more than the base minutes for package A.
                            If it is greater than the base minutes:
                                Calculate the new charge of package A.
                                Display the charges to the customer.
                            If it isn't:
                                Display the charges to the customer.

                Display output if package B was selected.
                    Get the number of minutes the customer used the package.
                        Check if the minutes that was gotten is more than the base minutes for package B.
                            If it is greater than the base minutes:
                                Calculate the new charge of package B.
                                Display the charges to the customer.
                            If it isn't:
                                Display the charges to the customer.

                Display output if package C was selected.
                    Get the number of minutes the customer used the package.
                    Display the charges to the customer.

4. Display the savings if another package was selected.
        Display the possible savings if a package other than package A was selected.
            Check if the minutes that was gotten is more than the base minutes for package B.
                If it is then:
                    Calculate the charge of package B.

            Check if the charge of package A is more than that of B.
                If it is then:
                    Display the amount that would have been saved if package B was selected.

                If it isn't then:
                    Check if the charge of package A is more than that of the base charge of B.
                        Display the amount that would have been saved if package B was selected.

            Check if the charge of package A is more than that of the charge of C.
                If it is then:
                    Display the amount that would have been saved if package C was selected.

        Display the possible savings if a package other than package B was selected.
            Check if the charge of package B is more than that of the charge of C.
                If it is then:
                    Display the amount that would have been saved if package C was selected.

*/


// This program will calculate a customer's monthly service bill with the package
// he has chosen and shows how much they could have saved with other packages.

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
         // Declare the constants.
    const double BASE_CHARGES_A = 39.99 ;  // The initial price of package A.
    const double BASE_CHARGES_B = 59.99 ;  // The initial price of package B.
    const double BASE_CHARGES_C = 69.99 ;  // The unchanging price of package C.
    const double BASE_MINUTES_A = 450.0 ;  // The minutes that the initial price of A covers.
    const double BASE_MINUTES_B = 900.0 ;  // The minutes that the initial price of B covers.

        // Declare other variables.
    char choice ;  // The user's package choice.
    double minutes ;  // The extended minutes that the package A and B don't cover.
    double charges_A ;  // The new charge of package A after the extended minutes.
    double charges_B ;  // The new charge of package B after the extended minutes.

        // Ask the user to select a package between a, b, or c.
    cout << "Enter the customer's pkg (A, B, or C): " ;
    cin >> choice ;

        // Set desired output formatting for numbers.
    cout << setprecision (2) << fixed << showpoint ;

        // Display the charges based the selected package.
    switch ( choice )
    {
            // Display output if package A was selected.
        case 'A' :
        case 'a' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

                // Check if the minutes that was gotten is more than the base minutes for package A.
            if ( minutes > BASE_MINUTES_A )
            {
                    // Calculate the new charge of package A.
                charges_A = BASE_CHARGES_A + ( ( minutes - BASE_MINUTES_A ) * 0.45 );

                    // Display the charges to the customer.
                cout << "The charges are " << charges_A << endl ;
            }

                // If the above check fails, display the the output.
            else
            {
                    // Display the charges to the customer.
                cout << "The charges are " << BASE_CHARGES_A << endl ;
            }
                break ;

            // Display output if package B was selected.
        case 'B' :
        case 'b' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

               // Check if the minutes that was gotten is more than the base minutes for package B.
            if ( minutes > BASE_MINUTES_B )
            {
                    // Calculate the new charge of package B.
                charges_B = BASE_CHARGES_B + ( ( minutes - BASE_MINUTES_B ) * 0.40 );

                    // Display the charges to the customer.
                cout << "The charges are " << charges_B << endl ;
            }

                // If the above check fails, display the the output.
            else
            {
                    // Display the charges to the customer.
                cout << "The charges are " << BASE_CHARGES_B << endl ;
            }
                break ;

            // Display output if package C was selected.
        case 'C' :
        case 'c' :

                // Get the number of minutes the customer used the package.
            cout << "Enter the number of minutes used: " ;
            cin >> minutes ;

                // Display the charges to the customer.
            cout << "The charges are " << BASE_CHARGES_C << endl ;
                break ;

            // Validate the input.
        default :

                // Display an error message.
            cout << "Please select a package: A, B, or C." << endl ;
    }

        // Display the savings if another package was selected.
    switch ( choice )
    {
            // Display the possible savings if a package other than package A was selected.
        case 'A' :
        case 'a' :

                // Check if the minutes that was gotten is more than the base minutes for package B.
            if ( minutes > BASE_MINUTES_B )
            {
                    // Calculate the charge of package B.
                charges_B = BASE_CHARGES_B + ( ( minutes - BASE_MINUTES_B ) * 0.40 ) ;
            }

                // Check if the charge of package A is more than that of B.
            if ( charges_A > charges_B )
            {
                    // Display the amount that would have been saved if package B was selected.
                cout << "With package B you would have saved " ;
                cout << ( charges_A - charges_B ) << endl ;
            }

                // Check if the charge of package A is more than that of the base charge of B.
            else if ( charges_A > BASE_CHARGES_B )
            {
                    // Display the amount that would have been saved if package B was selected.
                cout << "With package B you would have saved " ;
                cout << ( charges_A - BASE_CHARGES_B ) << endl ;
            }

                // Check if the charge of package A is more than that of the charge of C.
            if ( charges_A > BASE_CHARGES_C )
            {
                    // Display the amount that would have been saved if package C was selected.
                cout << "With package C you would have saved " ;
                cout << ( charges_A - BASE_CHARGES_C ) << endl ;
            }
                break ;

            // Display the possible savings if a package other than package B was selected.
        case 'B' :
        case 'b' :

                // Check if the charge of package B is more than that of the charge of C.
            if ( charges_B > BASE_CHARGES_C )
            {
                    // Display the amount that would have been saved if package C was selected.
                cout << "With package C you would have saved " ;
                cout << ( charges_B - BASE_CHARGES_C ) << endl ;
            }
                break ;

    }

    return 0 ;
}

/*

    RUN 1:

Enter the customer's pkg (A, B, or C): B
Enter the number of minutes used: 1000
The charges are 99.99
With package C you would have saved 30.00

    --------------------------------------------

    RUN 2:

Enter the customer's pkg (A, B, or C): A
Enter the number of minutes used: 1200
The charges are 377.49
With package B you would have saved 197.50
With package C you would have saved 307.50

    ---------------------------------------------

    RUN 3:

Enter the customer's pkg (A, B, or C): C
Enter the number of minutes used: 1400
The charges are 69.99

    ----------------------------------------------

    RUN 4: Package: a , minutes: 100

Enter the customer's pkg (A, B, or C): a
Enter the number of minutes used: 100
The charges are 39.99

    ----------------------------------------------

    RUN 5: Package: b , minutes: 856

Enter the customer's pkg (A, B, or C): b
Enter the number of minutes used: 856
The charges are 59.99

    ---------------------------------------------

    RUN 6: Package: B , minutes: 1110.5

Enter the customer's pkg (A, B, or C): B
Enter the number of minutes used: 1110.5
The charges are 144.19
With package C you would have saved 74.20

    ----------------------------------------------

    RUN 7: Package: 5

Enter the customer's pkg (A, B, or C): 5
Please select a package: A, B, or C.

*/
