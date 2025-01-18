/*                         GROUP 35
  _________________________________________________________
  |                                   |                   |
  |           NAME                    |      Matric No    |
  |___________________________________|___________________|
  |                                   |                   |
  |         TANG JIN SHEN             |      23301943     |
  |     GARETT KHOO BOO ZHENG         |      23301528     |
  |  MUHAMAD ALIFF NAJMI BIN ADENAN   |      23303539     |
  |                                   |                   | 
  |                                   |                   |
  |                                   |                   |
  |___________________________________|___________________|

  TITLE: AIRLINE RESERVATION SYSTEM  
*/

#include "LoginRegisterForgot.hpp"
#include "main_menu.hpp"
#include "welcome.hpp"
#include "destination.hpp"
#include "maxseats.hpp"
#include "checkmax.hpp"
#include <iostream>

using namespace std;

int main() 
{

    welcomePage();
    LoginRegisterForgot loginregisterforgot;
    mainMenu(loginregisterforgot);

    bool economySeats[ECONOMY_SEATS] = {false}; 
    bool firstClassSeats[FIRST_CLASS_SEATS] = {false};

    int choice;

    do {
        cin >> choice;

        switch (choice) {
            case 1: 
                if (isClassFullyBooked(economySeats, ECONOMY_SEATS)) {
                    cout << "\nAll economy class seats are fully booked. Returning to the main menu.\n";
                } else {
                    cout << "\nEconomy class seats are available. Proceeding with booking...\n";
                    
                }
                break;

            case 2: 
                if (isClassFullyBooked(firstClassSeats, FIRST_CLASS_SEATS)) {
                    cout << "\nAll first-class seats are fully booked. Returning to the main menu.\n";
                } else {
                    cout << "\nFirst-class seats are available. Proceeding with booking...\n";
                    
                }
                break;

            case 3: 
                cout << "Exiting the system. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);


    string destinations[TOTAL_DESTINATION] = {
        "India", "China", "Indonesia", "Pakistan", "Bangladesh", "Japan", "Philippines", "Vietnam", "Iran",
        "Turkiye", "Thailand", "Myanmar", "South Korea", "Iraq", "Afghanistan", "Yemen", "Uzbekistan", "Malaysia",
        "Saudi Arabia", "Nepal", "North Korea","Syria", "Sri Lanka", "Kazakhstan", "Cambodia", "Jordan", "United Arab Emirates",
         "Tajikistan", "Azerbaijan", "Laos", "Turkmenistan", "Kyrgyzstan","Singapore", "Lebanon", "Palestine", "Oman", "Kuwait", 
         "Georgia", "Mongolia", "Qatar", "Armenia", "Bahrain", "Timor Leste", "Cyprus", "Bhutan", "Maldives","Brunei"
    };

    string chosenDestination = selectDestination(destinations);
    cout << "You have chosen: " << chosenDestination << endl;

    return 0;

}
