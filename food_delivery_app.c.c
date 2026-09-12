#include<stdio.h>
void print()
{
    printf("1.Burger=200 tk\n 2. Pizza = 300 tk\n 3.Juice = 120 tk\n 4. French Fries =150tk\n 5. Coffee=100tk\n");
    return ;

}

float calculate_discount( float amount)
{
    if(amount >=1000)
    {
        return (amount*0.8);
    }
    else if(amount>=500&&amount<=999)
    {
        return(amount*0.9);
    }
    else
    {
        return(amount);
    }
}


float add_service_charge(float amount)
{
    return (amount+amount*0.05);
}


float delivery_charge(float amount,int distance)
{
    if(amount>=1500)
    {
        return amount;
    }
    else
    {
        if (distance<=5)
        {
            return(amount+50);
        }
        else
        {
            return(amount+50+(distance-5)*12);
        }
    }
}

int main() {
    int choice, qty, dist;
    float order_amount = 0;

    print();

    printf("Enter number of items you want to order: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter item number and quantity: ");
        scanf("%d %d", &choice, &qty);

        switch (choice) {
            case 1: order_amount += 200 * qty; break;
            case 2: order_amount += 300 * qty; break;
            case 3: order_amount += 120 * qty; break;
            case 4: order_amount += 150 * qty; break;
            case 5: order_amount += 100 * qty; break;
            default: printf("Invalid choice!\n"); break;
        }
    }

    printf("Enter delivery distance (km): ");
    scanf("%d", &dist);

    float p1 = calculate_discount(order_amount);
    float p2 = add_service_charge(p1);
    float final_bill = delivery_charge(p2, dist);

   printf("\n--- BILL SUMMARY ---\n");
    printf("Initial Order Amount: %.2f tk\n", order_amount);
    printf("After Discount:       %.2f tk\n", p1);
    printf("After Service (5%%):   %.2f tk\n", p2);
    printf("Final Bill Amount:    %.2f tk\n", final_bill);
    printf("--------------------\n");
}

