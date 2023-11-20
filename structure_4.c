/*Reliance Smart bazaar store wants to store the following details -
 * Product name , product name and product price . Write a program in C to to store
 * the details and search the product by id or name to show its name , id and price*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c,choice,flag,rt; // i for loop and c for number of products to store ,choice for search options
    long int id;
    char name[20];
    l1:
    printf("Enter the number of products to log >> ");
    scanf("%d",&c);
    if(c>99)
    {
        printf("!!! Enter a lower number of products !!! \n");
        goto l1;
    }
        struct reliance
    {
        char name[20];
        int p;
        long int id;
    }s[c];
    for(i=0;i<c;i++)
    {
        printf("Enter Product %d Name >> ",i+1);
        getchar();
        gets(s[i].name);
        printf("Enter Product %d ID >>",i+1);
        scanf("%ld",&s[i].id);
        printf("Enter Product %d Price >> ",i+1);
        scanf("%d",&s[i].p);
    }
    l2: // to Search again
    flag=0;// resets the value of flag for re use
    printf("Search by ?\n1.Product Name \n2.Product ID \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter Product Name to be searched >> ");
        getchar();
        gets(name);
        for(i=0;i<c;i++)
        {
            if((strcmp(name,s[i].name))==0)
            {
                printf("! Product found !\n");
                printf("Product Name >> %s\n",s[i].name);
                printf("Product ID >> %ld\n",s[i].id);
                printf("Product Price >> %d",s[i].p);
                flag++;
                break;
            }
        }
    }
    else if (choice==2)
    {
        printf("Enter Product ID to be searched >> ");
        scanf("%ld",&id);
        for(i=0;i<c;i++)
        {
            if(id==s[i].id)
            {
                printf("! Product found !\n");
                printf("Product Name >> %s\n",s[i].name);
                printf("Product ID >> %ld\n",s[i].id);
                printf("Product Price >> %d",s[i].p);
                flag++;
                break;
            }
        }
    }
    else
        printf("WRONG CHOICE !!");
    if(flag==0)
        printf("PRODUCT NOT FOUND ");
    printf("\nEnter 0 to search again >> ");
    scanf("%d",&rt);
    if(rt==0)
        goto l2;

}