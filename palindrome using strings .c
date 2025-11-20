int main()
{
    int num,original,rev=0,rem;
    printf("enter the number");
    scanf("%d",&num);
    
    original=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
        if(original==rev)
        printf("palindrome\n");
        else
        printf(" not a palindrome\n");
}
