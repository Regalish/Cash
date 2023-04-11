#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents % 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents % 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("\nTotal coins: %i", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Change: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    printf("\nQuarters: %i", cents / 25);
    return cents / 25;
}

int calculate_dimes(int cents)
{
    printf("\nQuarters: %i", cents / 10);
    return cents / 10;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;        
    }
    printf("\nNickels: %i", nickels);
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 0;
    while (cents >=1)
    {
        cents = cents - 1;
        pennies++;
    }
    printf("\nPennies: %i", pennies);
    return pennies;
}