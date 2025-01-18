#include "checkmax.hpp"

bool isClassFullyBooked(bool seats[], int totalSeats) {
    for (int i = 0; i < totalSeats; i++) {
        if (!seats[i]) { // If any seat is available
            return false;
        }
    }
    return true; // All seats in this class are booked
}
