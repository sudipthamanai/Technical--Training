#include <stdio.h>

int main() {
    // Declare variables with proper data types
    int service_no;
    long long phone_no;
    float previous_reading, present_reading;
    float units_consumed, cost_per_unit = 2.0;
    float base_amount, tax, total_bill;

    // Input values
    printf("Enter Service Number: ");
    scanf("%d", &service_no);

    printf("Enter Phone Number: ");
    scanf("%lld", &phone_no);

    printf("Enter Previous Reading (in units): ");
    scanf("%f", &previous_reading);

    printf("Enter Present Reading (in units): ");
    scanf("%f", &present_reading);

    // Calculate units consumed
    units_consumed = present_reading - previous_reading;

    // Calculate base amount and tax
    base_amount = units_consumed * cost_per_unit;
    tax = 0.05 * base_amount;
    total_bill = base_amount + tax;

    // Print the bill
    printf("\n----- Electricity Bill -----\n");
    printf("Service No      : %d\n", service_no);
    printf("Phone No        : %lld\n", phone_no);
    printf("Units Consumed  : %.2f\n", units_consumed);
    printf("Base Amount     : Rs. %.2f\n", base_amount);
    printf("5%% Tax          : Rs. %.2f\n", tax);
    printf("Total Bill      : Rs. %.2f\n", total_bill);
    printf("-----------------------------\n");

    return 0;
}

