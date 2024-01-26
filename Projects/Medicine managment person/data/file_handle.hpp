void file_to_prog()
{

    ifstream prog_to_file1;
    prog_to_file1.open("data/counts.txt");
    if (prog_to_file1.is_open())
    {
    prog_to_file1 >> count_medicine >> count_employee >> count_sales;
    }else{
        cout<<"Error in opning count file....."<<endl;
    }
    prog_to_file1.close();

    ifstream prog_to_file;
    prog_to_file.open("data/medicine.txt");
    int i=0;
    if (prog_to_file.is_open())
    {
    while (!prog_to_file.eof())
    {
        prog_to_file >> medicine[i].name >> medicine[i].formula >> medicine[i].price >> medicine[i].expiry_date.day >> medicine[i].expiry_date.month >> medicine[i].expiry_date.year >> medicine[i].how_many >> medicine[i].code;
        i++;
    }}else{
        cout<<"Error to open medicine datafile....."<<endl;
    }
    prog_to_file.close();






    ifstream prog_to_file2;
    prog_to_file2.open("data/Employee.txt");
    int j=0;
    if (prog_to_file2.is_open())
    {
    while (!prog_to_file2.eof())
    {
        prog_to_file2 >>employee[j].name>> employee[j].id >>  employee[j].phone >>employee[j].adress >> employee[j].salary >>employee[j].timings;
        j++;
    }}else{
        cout<<"Error to open employee datafile...."<<endl;
    }
    prog_to_file2.close();
    




    ifstream prog_to_file3;
    prog_to_file3.open("data/Sells.txt");
    int k=0;
    if(prog_to_file3.is_open()){
    while (!prog_to_file3.eof())
    {
        prog_to_file3 >> sales_list[k].name>> sales_list[k].buyer_name  >> sales_list[k].price>> sales_list[k].how_many;
        k++;
    }}else{
        cout<<"Error in opning Sells file........."<<endl;
    }
    prog_to_file3.close();
}

void prog_to_file()
{
    ofstream prog_to_file1;
    prog_to_file1.open("data/counts.txt");
    prog_to_file1 << count_medicine << " " << count_employee << " " << count_sales;
    prog_to_file1.close();

    ofstream prog_to_file;
    prog_to_file.open("data/medicine.txt");
    for (int i = 0; i < count_medicine; i++)
    {
        prog_to_file << medicine[i].name << " " << medicine[i].formula << " " << medicine[i].price << " " << medicine[i].expiry_date.day << " " << medicine[i].expiry_date.month << " " << medicine[i].expiry_date.year << " " << medicine[i].how_many << " " << medicine[i].code << endl;
    }
    prog_to_file.close();

    ofstream prog_to_file2;
    prog_to_file2.open("data/Employee.txt");
    for (int i = 0; i < count_employee; i++)
    {
        prog_to_file2 << employee[i].name << " " << employee[i].id << " " << employee[i].phone << " " << employee[i].adress << " " << employee[i].salary << " " << employee[i].timings << endl;
    }
    prog_to_file2.close();

    ofstream prog_to_file3;
    prog_to_file3.open("data/Sells.txt");
    for (int i = 0; i < count_sales; i++)
    {
        prog_to_file3 << sales_list[i].name << " " << sales_list[i].buyer_name << " " << sales_list[i].price << " " << sales_list[i].how_many << endl;
    }
    prog_to_file3.close();
}
