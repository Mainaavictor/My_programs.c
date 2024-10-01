#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate = 0, fineAmount = 0;

    // Input values
    printf("Enter bookID: ");
    scanf("%d", &bookID);
    printf("Enter dueDate (in days): ");
    scanf("%d", &dueDate);
    printf("Enter returnDate (in days): ");
    scanf("%d", &returnDate);

    // Calculate daysOverdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate and amount
    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fineRate = 20;
        } else if (daysOverdue <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = fineRate * daysOverdue;
    } else {
        fineAmount = 0; // No fine if book is not overdue
    }

    // Output the result
    
    printf("bookID: %d\n", bookID);
    printf("dueDate: %d\n", dueDate);
    printf("returnDate: %d\n", returnDate);
    printf("daysOverdue: %d\n", daysOverdue > 0 ? daysOverdue : 0);
    printf("fineRate: Ksh %d per day\n", fineRate);
    printf("TotalfineAmount: Ksh %d\n", fineAmount);

return 0;
}
