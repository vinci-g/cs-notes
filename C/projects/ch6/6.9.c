#include <stdio.h>

int main(void) {
    float loan, irate, monthly, m_irate, bal;
    int n;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &irate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    printf("Enter number of payments: ");
    scanf("%d", &n);

    m_irate = (irate / 100) / 12;

    for (float i = 1, bal = loan; i <= n; i++) {
        bal = (bal - monthly) + (bal * m_irate);
        printf("Payment %.0f: %.2f\n", i, bal);
    }
    
    return 0;
}

