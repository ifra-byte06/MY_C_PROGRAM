#include <stdio.h>

int main() {
    int branches, products;

    printf("Enter number of branches: ");
    scanf("%d", &branches);

    printf("Enter number of products: ");
    scanf("%d", &products);

    int units[branches][products];
    float revenuePerUnit[products];
    float branchRevenue[branches];

    
    printf("\nEnter revenue per unit for each product:\n");
    for (int i = 0; i < products; i++) {
        printf("Product %d: ", i + 1);
        scanf("%f", &revenuePerUnit[i]);
    }

    
    printf("\nEnter units shipped (Branch x Product):\n");
    for (int i = 0; i < branches; i++) {
        printf("\nBranch %d:\n", i + 1);
        for (int j = 0; j < products; j++) {
            printf("Units of Product %d: ", j + 1);
            scanf("%d", &units[i][j]);
        }
    }

  
    for (int i = 0; i < branches; i++) {
        branchRevenue[i] = 0;
        for (int j = 0; j < products; j++) {
            branchRevenue[i] += units[i][j] * revenuePerUnit[j];
        }
    }

 
    printf("\n--- Total Revenue per Branch ---\n");
    for (int i = 0; i < branches; i++) {
        printf("Branch %d Revenue: %.2f\n", i + 1, branchRevenue[i]);
    }

  
}

