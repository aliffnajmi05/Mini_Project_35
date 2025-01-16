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
#include <iostream>

using namespace std;

int main() 
{

    welcomePage();
    LoginRegisterForgot loginregisterforgot;
    mainMenu(loginregisterforgot);

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
