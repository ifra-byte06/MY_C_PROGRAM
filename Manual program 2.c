#include <stdio.h>
int main() {
    int id;
    int PAN=6222;
    int Aadhaar=5333;
    int Apaar=4555;
    int Driving_License=3777;
    int Paasport=2999;
    printf("Enter your Unique Identification Number");
    scanf("%d",&id);
switch(id){
    case 6222:
    printf("Verified:PAN number matched");
    break;
    case 5333:
    printf("Verified: Aadhaar number is matched");
    break;
    case 4555:
    printf("Verified:Apaar Id matched");
    break;
    case 3777:
    printf("Verified: Driving licence matched");
    break;
    case 2999:
    printf("Verified: Passport matched");
    break;
    default :
    printf(" Not Verified:ID not found in  Records");
    }
}
    
    
    
