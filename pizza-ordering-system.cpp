#include<stdio.h>
#include<string.h>
void Order_Dis(struct Types_of_Pizza pizzaCart[100],struct Cost_of_Pizza costOnSize[12],char itemNames[12][100],int sidesCost[4]);
struct Types_of_Pizza{
 int Small_Qty,Med_Qty,Lg_Qty,others,Fresh_Crispt_Pan,Cheese_Bursting,Thin_wheat_crusting;
};
struct Cost_of_Pizza{
 int SM_Cost,MED_Cost,LG_Cost,Fresh_Crisp_Pan_Cost,Cheese_Bursting_Cost,Thin_wheat_crusting_cost;
};
main()
{
 int i=0,c=1,j=0,mainChoice,cost[24]={99,195,395,155,295,445,155,295,445,195,365,545,155,295,445,225,425,635,235,455,685,235,455,685},totalCost=0,a[10];
 char name[20];
 char itemNames[12][100]={
  "Negros Hawaiian(Vegetable)",
  "Candoni Spicy Triple(Vegetable)",
  "Double Cheese Hawaiian(Vegetable)",
  "Kab Farm House(Vegetable)",
  "Cheese and Barbeque Chicken(Non Vegetable)",
  "Chicken Fiesta(Non Vegetable)",
  "Chicken Negros(Non Vegetable)",
  "Chicken Golden Delight(Non Vegetable)",
  "Beans String Vegetable",
  "Beans String Non Vegetable",
  "Spring Roll Vegetable",
  "Spring Roll Non Vegetable"
 };
 int sidesCost[4]={29,35,119,129};

 struct Types_of_Pizza pizzaCart[100];
 struct Cost_of_Pizza costOnSize[12];
 for(i=0;i<12;i++)
 {
  pizzaCart[i].Small_Qty=0;
  pizzaCart[i].Med_Qty=0;
  pizzaCart[i].Lg_Qty=0;
  pizzaCart[i].Fresh_Crispt_Pan=0;
  pizzaCart[i].Thin_wheat_crusting=0;
  pizzaCart[i].Cheese_Bursting=0;
  pizzaCart[i].others=0;

 }
 i=0;
 while(i<24)
 {
  costOnSize[j].SM_Cost=cost[i++];
  costOnSize[j].MED_Cost=cost[i++];
  costOnSize[j].LG_Cost=cost[i++];
  costOnSize[j].Fresh_Crisp_Pan_Cost=30;
  costOnSize[j].Cheese_Bursting_Cost=95;
  costOnSize[j].Thin_wheat_crusting_cost=40;
  j++;
 }
 do{
  if(c==1){
   printf("Enter\n1 - Vegetable Pizzas\n2 - Chicken Pizzas\n3 - Sides\n4 - Exit\n");
         scanf("%d",&mainChoice);
   switch(mainChoice)
   {
    case 1:
    {
     int second_choice;
     printf("Enter\n1 - Negros Hawaiian\n2 - Candoni Spicy Triple\n3 - Double Cheese Hawaiian\n4 - Kab Farm House\n5 - Exit\n");
     scanf("%d",&second_choice);
     if(second_choice!=5){
      int sizeChoice;
              printf("Enter\n1 - Small\n2 - Medium\n3 - Large\n");
              scanf("%d",&sizeChoice);
      if(sizeChoice==1)
       pizzaCart[second_choice-1].Small_Qty++;
      if(sizeChoice==2)
                   pizzaCart[second_choice-1].Med_Qty++;
         if(sizeChoice==3)
       pizzaCart[second_choice-1].Lg_Qty ++;
      printf("Need Special Crusts\n1 - Fresh Crispy Pan\n2 - Cheese Burst\n3 - Wheat thin Crust\n4 - No Need\n");
      int extraCrust;
      scanf("%d",&extraCrust);
      if(extraCrust==1)
      pizzaCart[second_choice-1].Fresh_Crispt_Pan++;
      else if(extraCrust==2)
      pizzaCart[second_choice-1].Cheese_Bursting++;
      else if(extraCrust==3)
      pizzaCart[second_choice-1].Thin_wheat_crusting++;

      if(second_choice!=5)
      printf("Pizza Added to Cart Successfully\n");
     }

     break;
     }
    case 2:
    {
     int second_choice;
     printf("Enter\n1 - Cheese and Barbeque Chicken\n2 - Chicken Fiesta\n3 - Chicken Negros\n4 - Chicken Golden Delight\n5 - Exit\n");
     scanf("%d",&second_choice);
     if(second_choice!=5){
      int sizeChoice;
              printf("Enter\n1 - Small\n2 - Medium\n3 - Large\n");
              scanf("%d",&sizeChoice);
      if(sizeChoice==1)
       pizzaCart[second_choice+4-1].Small_Qty++;
      if(sizeChoice==2)
                   pizzaCart[second_choice+4-1].Med_Qty++;
         if(sizeChoice==3)
       pizzaCart[second_choice+4-1].Lg_Qty ++;
      printf("Need Special Crusts\n1 - Fresh Crispy Pan\n2 - Cheese Burst\n3 - Wheat thin Crust\n4 - No Need\n");
      int extraCrust;
      scanf("%d",&extraCrust);
      if(extraCrust==1)
      pizzaCart[second_choice+4-1].Fresh_Crispt_Pan++;
      else if(extraCrust==2)
      pizzaCart[second_choice+4-1].Cheese_Bursting++;
      else if(extraCrust==3)
      pizzaCart[second_choice+4-1].Thin_wheat_crusting++;
      if(second_choice!=5)
      printf("Pizza Added to Cart Successfully\n");
     }

     break;
    }
    case 3:
    {
     int second_choice;
     printf("Enter\n1 - Beans String Vegetable\n2 - Beans String Non Vegetable\n3 - Spring Roll Vegetable\n4 - Spring Roll Non Vegetable\n5 - Exit\n");
     scanf("%d",&second_choice);
     if(second_choice<5 && second_choice>0)
         pizzaCart[second_choice+8-1].others++;
        if(second_choice!=5)
      printf("Added to Cart Successfully\n");
     break;
     }
     default:
     {
      printf("Invalid Choice\n");
      break;
     }
     }
  }
  if(c==2)
  {
   int id,qty_pizza,qty_crust,qty,wrongIdFlag=1;
   printf("Enter Id to change Quantity\n");
   scanf("%d",&id);
   if(id>=0 && id<=11)
   {
    if(id>=0&&id<=7)
    {
     if(pizzaCart[i].Small_Qty >0||pizzaCart[i].Med_Qty >0||pizzaCart[i].Lg_Qty ||pizzaCart[i].others>0||pizzaCart[i].Fresh_Crispt_Pan >0||pizzaCart[i].Cheese_Bursting ||pizzaCart[i].Thin_wheat_crusting >0){
      printf("Enter\n1 - To Change Small Pizza Quantity\n2 -Change Quantity for Medium Pizza\n3 -Change Quantity for Large Pizza\n4 -Change Quantity for Crust\n5 - Exit\n");
      scanf("%d",&qty_pizza);
      printf("Enter quantity to change and to delete Enter 0\n");
      scanf("%d",&qty);
      if(qty>=0){
          if(qty_pizza==1)
          pizzaCart[id].Small_Qty=qty;
          if(qty_pizza==2)
          pizzaCart[id].Med_Qty=qty;
          if(qty_pizza==3)
          pizzaCart[id].Lg_Qty=qty;
          if(qty_pizza==4)
          {
           printf("Enter\n1 - To Change Fresh Pan\n2 - Cheese Burst\n3 - Wheat Thin Crust\n4 - Exit\n");
           scanf("%d",&qty_crust);
           if(qty_crust==1)
           pizzaCart[id].Fresh_Crispt_Pan =qty;
           if(qty_crust==2)
           pizzaCart[id].Cheese_Bursting =qty;
           if(qty_crust==3)
           pizzaCart[id].Thin_wheat_crusting =qty;
          }
      }
      else{
       printf("Enter Quantity greater than or equal to zero\n");
      }
     }
     else{
      printf("Id Not Found\n");
      wrongIdFlag=0;
     }
    }
    else{
     printf("Enter\n1 - To Change Quantity of Zingy Parcel(Veg)\n2 - To Change Quantity of Zingy Parcel(Non Veg)\n3 - To Change Quantity of Taco Mexicana(Veg)\n4 - To Change Quantity of Taco Mexicana(Non Veg)\n5 - To Change Quantity of  - Exit\n");
     scanf("%d",&qty_pizza);
     if(qty_pizza>=1 && qty_pizza<=4)
     {
      printf("Enter quantity\n");
      scanf("%d",&qty);
      pizzaCart[id].others=qty;
     }

    }
    if(wrongIdFlag==1)
    {
                   printf("Quantity Changed Successfully\nRearranged Order is\n");
                   Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost);
    }

   }
   else{
    printf("Please Enter Valid Id\n");
   }
  }
  if(c==4)
  {
   int id;
   printf("Enter Id to delete from Cart\n");
   scanf("%d",&id);
   pizzaCart[id].Small_Qty =0;
   pizzaCart[id].Med_Qty =0;
   pizzaCart[id].Lg_Qty =0;
   pizzaCart[id].others=0;
   pizzaCart[id].Fresh_Crispt_Pan =0;
   pizzaCart[id].Cheese_Bursting =0;
   pizzaCart[id].Thin_wheat_crusting =0;
    printf("Item Deleted Successfully\nRearranged Order is\n");
     Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost);
  }
  if(c==3)
  {
   Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost);
  }

      printf("Enter\n1 - Add Item\n2 - Change Quantity\n3 - View Cart\n4 - Delete from Cart\n Else any number to Calculate Cost\n");
      scanf("%d",&c);
 }while(c==1 || c==2 || c==3 || c==4);
 printf("Final Order \n");
Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost);
printf("Thanks for Shopping with us\n");
}

void Order_Dis(struct Types_of_Pizza pizzaCart[100],struct Cost_of_Pizza costOnSize[12],char itemNames[12][100],int sidesCost[4])
{
 int totalCost=0,i;
 printf("---------------------List in Cart-------------------------\n");
 for(i=0;i<11;i++)
 {
  if(pizzaCart[i].Small_Qty >0||pizzaCart[i].Med_Qty >0||pizzaCart[i].Lg_Qty ||pizzaCart[i].others>0||pizzaCart[i].Fresh_Crispt_Pan >0||pizzaCart[i].Cheese_Bursting ||pizzaCart[i].Thin_wheat_crusting >0)
  {
   if(i>=0&&i<=7){
   printf("Id : %d\n",i);
      printf("Item Name : %s\n",itemNames[i]);
   if(pizzaCart[i].Small_Qty >0)
   printf("Small Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Small_Qty,costOnSize[i].SM_Cost *pizzaCart[i].Small_Qty);
   if(pizzaCart[i].Med_Qty>0)
   printf("Medium Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Med_Qty,costOnSize[i].MED_Cost *pizzaCart[i].Med_Qty);
   if(pizzaCart[i].Lg_Qty>0)
   printf("Large Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Lg_Qty,costOnSize[i].LG_Cost *pizzaCart[i].Lg_Qty );
   if(pizzaCart[i].Fresh_Crispt_Pan >0)
   printf("Fresh Pan Quantity: %d -> Cost : %d\n",pizzaCart[i].Fresh_Crispt_Pan ,costOnSize[i].Fresh_Crisp_Pan_Cost *pizzaCart[i].Fresh_Crispt_Pan);
   if(pizzaCart[i].Thin_wheat_crusting >0)
   printf("Wheat Thin Crust Quantity: %d -> Cost : %d\n",pizzaCart[i].Thin_wheat_crusting ,costOnSize[i].Thin_wheat_crusting_cost *pizzaCart[i].Thin_wheat_crusting );
   if(pizzaCart[i].Cheese_Bursting >0)
   printf("Cheese Burst Quantity: %d -> Cost : %d\n",pizzaCart[i].Cheese_Bursting ,costOnSize[i].Cheese_Bursting_Cost *pizzaCart[i].Cheese_Bursting );
   totalCost+=pizzaCart[i].Small_Qty*costOnSize[i].SM_Cost;
   totalCost+=pizzaCart[i].Med_Qty*costOnSize[i].MED_Cost;
   totalCost+=pizzaCart[i].Lg_Qty*costOnSize[i].LG_Cost;
   totalCost+=pizzaCart[i].Fresh_Crispt_Pan*costOnSize[i].Fresh_Crisp_Pan_Cost;
   totalCost+=pizzaCart[i].Cheese_Bursting*costOnSize[i].Cheese_Bursting_Cost;
   totalCost+=pizzaCart[i].Thin_wheat_crusting*costOnSize[i].Thin_wheat_crusting_cost;
  }
  else{
   printf("Id : %d\n",i);
   printf("Item Name : %s\n",itemNames[i]);
   printf("Quantity : %d\n",pizzaCart[i].others);
   printf("Cost : %d\n",pizzaCart[i].others*sidesCost[i-8]);
   totalCost+=(pizzaCart[i].others)*sidesCost[i-8];
  }
 }
  }
   printf("-------------------Total Cost : %d-----------------------\n",totalCost);
}