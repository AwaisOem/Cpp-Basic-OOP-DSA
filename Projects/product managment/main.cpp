#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
struct product
{
	int product_number;
	char product_name[50];
	float product_price,product_quantity,product_discount;
};
void create_product()
{
	cout<<"\n please enter the product no:";
	cin>>product_number;
	cout<<"\n please enter the nmae of product:";
	cin.getline(product_name,50);
	cout<<"\n please enter price of product:";
	cin>>product_price;
	cout<<"\n please enter the discount(%):";
	cin>>product_discount;
}
void show_product()
{
	cout<<endl<<"product no:"<<product_number;
	cout<<endl<<"product name:"<<product_name;
	cout<<endl<<"product price:"<<product_price;
	cout<<endl<<"Discount:"<<product_discount;


	
	return product_number;
	
	
return product_price;
	
	
return product_name;


	return product_discount;
	
}
fstream fp;
product produc;

void save_product()
{
	fp.open("billing.txt");
	produc.create_product();
	fp.write((char*)&produc,sizeof(product));
	fp.close();
	cout<<endl<<"The Producthas been sucessfullcreated..";
}

void show_all_product()
{
	cout<<endl<<"\tRecords:";
	fp.open("billing.txt");
	while(fp.read((char*)&produc,sizeof(product)))
	{
		produc.show_product();
	}
	fp.close();
}
 void product_menu()
 {
 fp.open("billing.txt");
 cout<<endl<<"\t Product Menu \n:";
 cout<<"\tP.No.\tName\tprice\n";
 while((fp.read(char8)&produc,sizeof(product)))
 {
 	cout<<produc.getProduct()<<"\t"<<produc.getName<<"\t"<<produc.getPrice()<<endl;
 }
fp.close();
}
void edit_product()
{
	int num;
	bool found=false
	cout<<endl<<"\t Please Enter the product no:";
	cin>>num;
	fp.open("billing.txt");
	while(fp.read((char*)&produc,sizeof(product))&&found=false)
	{
		if(produc>getProduct()==num)
	{
		produc.show_product();
		cout<<endl<<"please enter the new datails of product:"<<endl;
		produc.create_product();
		int pos=-1*sizeof(produc);
		fp.seekp(pos,ios::cur);
		fp.write((char*)&produc,sizeof(product));
		cout<<endl<<"record sucessfull updated..";
		found=true;
	}
	}
	fp.close();
	if(found==false)
	cout<<endl<<"record not found..";	
}
void delete_product()
{
	int num;
	cout<<endl<<"please enter the product no:";
	cin>>num;
	fp.open(billing.txt);
	fstream fp2;
	fp2.open("temp.txt");
	fp.seekg(0,ios::beg);
	while(fp.read(char*)&produc,sizeof(product))
	{if(produc.getProduct()!num)
	{fp2.write((char*)produc,sizeof(product));
	}
	}
	fp2.close();
	fp.close();
	remove("billing.txt");
	rename("temp.txt","billing.txt");
	cout<<endl<<"\trecord deleted..";
}
int main ()
{
	product produc;
	int option;
	cout<<"ADMINISTRATER:\n";
	cout<<"CUSTOMER:\n";
	cout<<"Eixt:\n";
	cout<<"Option";
	cin>>option;
	switch(option)
	{
	case 1:
admin_menu();
	break;
	case 2:
			place_order();
		break;
		case 3:
			cout<<"GOOD BYE\n ";
			exit(0);
		default:
			cout<<"\t INVALID INPUT";
		
		
	}
	
}
void admin_menu()
{
	int choice;
	cout<<"press 1 to create product:\n";
	cout<<"press 2 to display product:\n";
	cout<<"press 3 to modify:\n";
	cout<<"press 4 to delete: \n";
	cout<<"press 5 to back to menu: \n";
	cout<<"Enter choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			save_product();
			break;
			case 2:
				show_all_product();
				break;
				case 3:
					edit_product();
					break;
					case 4:
						delete product();
						break;
						case 5:
							system("cls");
							break;
							default:
								admin_menu();
	}	
}
void product_menu()
{
	int order_arr[50],quan[50],c=0;
	float amt,damt,total=0;
	char ch;
	product_menu();
	cout<<"\nplace order";
	do
{
	cout<<"\nEnter the product no:";
	cin>>order_arr[c];
	cout<<"\nEnter quantity:";
	cin>>quan[c];
	c++;
	cout<<"\n Do ou want to place another order:(y/n)";
	cin>>ch;
	}	
	while(ch=='y',ch=='Y');
	cout<<"\n Thank You";
	cout<<"\nPr no.\tPr name\tQuantity\tprice\tamount\tAmount after discount\n";
	for(int x=0;x<=c;++)
	{
	fp.open("billing.txt");
	fp.read((char*)&produc,sizeof(product));
	while(!fp.eof())
	{
	if(produc.getProduct()==order_arr[x])
	{amt=produc.getPrice()*quan[x];
	damt=amt-(amt*produc.getDiscount()/100);
	cout<<"\n"<<order_arr[x]<<"\t"<<produc.getName()<<"\t"<<quan<<"\t"<<produc.getPrice()<<"\t"<<amt<<"\t"<<damt;
	total+=damt;
	}
	fp.read((char*)&produc,sizeof(product));
		}	
		fp.close();
	}
	
	cout<<"\n Total="<<total;
}
