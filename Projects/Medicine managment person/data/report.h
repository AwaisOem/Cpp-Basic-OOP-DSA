void report()
{
    system("cls");
    cout << "Medicine Managment System" << endl;
    cout << "\n";
    cout << "Reports....." << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\n";
    cout << "Press Enter to continue..." << endl;
    cin.ignore();
    cout << "1-number of Total sales" << endl;
    cout << "2-Details of total sales" << endl;
    cout << "3-Show Last Purchase" << endl;
    cout << "4-Total price of Sales" << endl;
    cout << "5-All in One Report" << endl;
    cout << "\n\n";
    int flag(-1);
    cout << "Enter your choice >>  ";
    int choice;
    cin >> choice;
    cout << "\n\n\n";
    switch (choice)
    {
    case 1:
        nts();
        break;
    case 2:
        dts();
        break;
    case 3:
        L_purchase();
        break;
    case 4:
        total_price();
        break;
    case 5:
       nts();
       total_price();
       dts();
        break;
    default:
        cout << "Invalid" << endl;
        cout << "Do you want to see again(Y/N)?  >";
        char dis5;
        cin >> dis5;
        if (dis5 == 'Y' || dis5 == 'y')
        {
            report();
        }
        break;
    }
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "Press Enter to continue...";
    cin.get();
    cin.ignore();
    report_menu();
}


void nts(){
        color(14);
        cout << "Number of total sales are " << count_sales << endl;
        color(7);
}
void dts(){
        cout << "----------------------------------------------------------------------------------" << endl;
        cout.flags(ios::left);
        cout << setw(30) << "Medicine" << setw(25) << "Buyer" << setw(17) << "Price" << setw(9) << "Tablets" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < count_sales; i++)
        {
            color(14);
            cout.flags(ios::left);
            cout << setw(30) << sales_list[i].name << setw(20) << sales_list[i].buyer_name << setw(23) << sales_list[i].price << setw(7) << sales_list[i].how_many << endl;
            color(7);
        }
}

void L_purchase(){
    if (count_sales>0)
    {
        
    
    
 cout << setw(15) << "Recent Sale" << endl;
        color(14);
        cout << setw(15) << "Buyer name:" << sales_list[count_sales - 1].buyer_name << endl;
        cout << setw(15) << "Medicine name:" << sales_list[count_sales - 1].name << endl;
        cout << setw(15) << "Medicine price:" << sales_list[count_sales - 1].price << endl;
        cout << setw(15) << "No of Tablets:" << sales_list[count_sales - 1].how_many << endl;
        color(7);
    }else{
        cout<<"No Last SAle..."<<endl;
    }
}
void total_price(){
      int sum = 0;
        for (int i = 0; i < count_sales; i++)
        {
            sum += sales_list[i].price;
        }
        color(14);
        cout << "Total Sales Price Is ";
        cout << sum << endl;
        color(7);
}