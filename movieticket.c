#include <stdio.h>

int main() {
    int choice;
    int seatsSelected = 0;
    int movieChoice = 0;

    do {
    // Display menu options
    printf("===========Welcome to Online Movie Ticket Booking System===========\n");
    printf("1. Browse Movies\n");
    printf("2. Select Showtime\n");
    printf("3. Choose Seats\n");
    printf("4. Confirm Booking\n");
    printf("5. Payment\n");
    printf("6. Generate Ticket\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case to handle user choices
    switch (choice) {
        case 1:
            printf("Welcome to Movie Browser!\n");
            printf("Here are the available movies:\n");
            printf("1. The Shawshank Redemption\n");
            printf("2. The Godfather\n");
            printf("3. The Dark Knight\n");
            printf("4. Schindler's List\n");
            printf("5. Pulp Fiction\n");

    int moviechoice;
    printf("Enter the number of the movie you want to watch: ");
    scanf("%d", &moviechoice);

    if (moviechoice == 1) {
        printf("You have chosen to watch: The Shawshank Redemption\n");
    } else if (moviechoice == 2) {
        printf("You have chosen to watch: The Godfather\n");
    } else if (moviechoice == 3) {
        printf("You have chosen to watch: The Dark Knight\n");
    } else if (moviechoice == 4) {
        printf("You have chosen to watch: Schindler's List\n");
    } else if (moviechoice == 5) {
        printf("You have chosen to watch: Pulp Fiction\n");
    } else {
        printf("Invalid choice.\n");
    }
            
            break;

//--------------------------------------------------------------------------------------------------------------------------
        case 2:

            printf("Welcome to Showtime Selector!\n");
            printf("Here are the available showtimes:\n");
            printf("1. 10:00 AM\n2. 1:00 PM\n3. 4:00 PM\n4. 7:00 PM\n");

            int timechoice;
            printf("Enter the number of the showtime you prefer: ");
            scanf("%d", &timechoice);

            if (timechoice == 1) {
        printf("You have chosen showtime: 10:00 AM\n");
    } else if (timechoice == 2) {
        printf("You have chosen showtime: 1:00 PM \n");
    } else if (timechoice == 3) {
        printf("You have chosen showtime: 4:00 PM\n");
    } else if (timechoice == 4) {
        printf("You have chosen showtime: 7:00 PM\n");
    } else {
        printf("Invalid choice.\n");
    }
            break;

//--------------------------------------------------------------------------------------------------------------------------

        case 3:
           
            printf("Choose Seats selected\n");
            char seats[5][5]; // Array to store seat information
            int seatsSelected = 0; // Variable to keep track of total seats selected

            // Initialize all seats as available
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    seats[i][j] = 'O'; // 'O' represents an available seat
                }
            }

            // Display the seating arrangement
            printf("Seating Arrangement:\n");
            printf("   1 2 3 4 5\n");
            for (int i = 0; i < 5; i++) {
                printf("%d  ", i + 1);
                for (int j = 0; j < 5; j++) {
                    printf("%c ", seats[i][j]);
                }
                printf("\n");
            }

            // Asking the user to choose a seat
            int row, col;
            printf("\nEnter the row and column of the seat you want to choose (Enter 0 0 to stop): ");
            do {
                scanf("%d %d", &row, &col);

                // Check if the chosen seat is valid
                if (row >= 1 && row <= 5 && col >= 1 && col <= 5) {
                    if (seats[row - 1][col - 1] == 'O') {
                        seats[row - 1][col - 1] = 'X'; // 'X' represents a booked seat
                        seatsSelected++;
                        printf("Seat at row %d, column %d has been booked. Total seats selected: %d\n", row, col, seatsSelected);
                    } else {
                        printf("Seat at row %d, column %d is already booked.\n", row, col);
                    }
                } else if (row != 0 || col != 0) {
                    printf("Invalid row or column.\n");
                }

                // Display the updated seating arrangement
                printf("\nUpdated Seating Arrangement:\n");
                printf("   1 2 3 4 5\n");
                for (int i = 0; i < 5; i++) {
                    printf("%d  ", i + 1);
                    for (int j = 0; j < 5; j++) {
                        printf("%c ", seats[i][j]);
                    }
                    printf("\n");
                }

                printf("\nEnter the row and column of the seat you want to choose (Enter 0 0 to stop): ");
            } while (row != 0 && col != 0); // Changed the condition here

            printf("Thank you for selecting seats. Total seats selected: %d\n", seatsSelected);




            break;
//--------------------------------------------------------------------------------------------------------------------------

        case 4:
            printf("Confirm Booking selected\n");

    printf("\n=========== Booking Confirmation ===========\n");
        printf("Movie: ");
        if (moviechoice == 1) {
            printf("The Shawshank Redemption\n");
        } else if (moviechoice == 2) {
            printf("The Godfather\n");
        } else if (moviechoice == 3) {
            printf("The Dark Knight\n");
        } else if (moviechoice == 4) {
            printf("Schindler's List\n");
        } else if (moviechoice == 5) {
            printf("Pulp Fiction\n");
        }

        printf("Showtime: ");
        if (timechoice == 1) {
        printf("You have chosen showtime: 10:00 AM\n");
        } else if (timechoice == 2) {
        printf("You have chosen showtime: 1:00 PM \n");
        } else if (timechoice == 3) {
        printf("You have chosen showtime: 4:00 PM\n");
        } else if (timechoice == 4) {
        printf("You have chosen showtime: 7:00 PM\n");
        } else {
        printf("Invalid choice.\n");
        }

        printf("Number of seats selected: %d\n", seatsSelected);
        
        int cost;
        cost=300*seatsSelected;
        printf("Total cost = %d\n", cost);

        printf("============================================\n");

            break;

//--------------------------------------------------------------------------------------------------------------------------

        case 5:
            printf("Payment selected\n");
            
            int creditCardNumber;
            int expiryDate;
            int cvv;

            
            printf("Enter your credit card number: ");
            scanf("%d", &creditCardNumber);

            printf("Enter the expiry date (MMYY): ");
            scanf("%d", &expiryDate);

            printf("Enter the CVV: ");
            scanf("%d", &cvv);

            printf("Processing payment...\n");
            printf("...Payment processed\n");

            break;

//--------------------------------------------------------------------------------------------------------------------------

        case 6:
            printf("Generate Ticket selected\n");
            // Code for generating ticket
            printf("\n");
            printf("*********** Ticket ***********\n");
            printf("\n");
            printf("Movie: ");
            if (moviechoice == 1) {
                printf("The Shawshank Redemption\n");
            } else if (moviechoice == 2) {
                printf("The Godfather\n");
            } else if (moviechoice == 3) {
                printf("The Dark Knight\n");
            } else if (moviechoice == 4) {
                printf("Schindler's List\n");
            } else if (moviechoice == 5) {
                printf("Pulp Fiction\n");
            }

            printf("Showtime: ");
            if (timechoice == 1) {
            printf("You have chosen showtime: 10:00 AM\n");
            } else if (timechoice == 2) {
            printf("You have chosen showtime: 1:00 PM \n");
            } else if (timechoice == 3) {
            printf("You have chosen showtime: 4:00 PM\n");
            } else if (timechoice == 4) {
            printf("You have chosen showtime: 7:00 PM\n");
            } else {
            printf("Invalid choice.\n");
            }

            printf("Number of seats selected: %d\n", seatsSelected);
            printf("\n");
            printf("***********************************\n");

            break;

//--------------------------------------------------------------------------------------------------------------------------

        case 7:
            printf("Exiting...\n");
            break;
//--------------------------------------------------------------------------------------------------------------------------

        default:
            printf("Invalid choice\n");
    }
    } while (choice != 7);
    return 0;
}
