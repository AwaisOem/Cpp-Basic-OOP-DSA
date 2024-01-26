#include<iostream>
using namespace std;
int usman(int a[],int y);
int usman1(int a[],int y);
int usman2(int a[],int y);
int usman3(int a[],int y);
int usman4(int a[],int y);
int usman5(int a[],int y);
int usman6(int a[],int y);
int usman7(int a[],int y);
int main()
{
	int n,d,e,f,b,a,o,m,h,l,k,p,u,z,count2,count3,count4,count5,count6,count7,count8,count9;
	e=0;
	do{
	cout<<"                | SELECT THE OPTION |           "<<endl;
		
	cout<<"       _______________                      "<<endl;
	cout<<"      | MANAGE RESTRUNENT ORDER SELECT OPTION 1|                          "<<endl;
		cout<<"       _______________                      "<<endl;  
	cout<<"      |SEARCH DEAILY ORDER QUANTITY DATA SELECT OPTION 2 |                         "<<endl;
		cout<<"  __________________                  "<<endl;
	cout<<"  |REPORT OF ALL HIGHEST ORDER AND SIZE SELECT OPTION 3 |                      "<<endl;
		cout<<"   __________________                     "<<endl;
		cout<<"         | EXIT PROGRAM SELECT OPTION 4|"<<endl;
		
		cout<<endl<<endl;
		cout<<"          PRESS THE KEY 1 TO 4                    "<<endl;
		
		cin>>n;
		cout<<endl<<endl;
		int arr[100];
		switch(n)
		{
			do{
			case 1:
				{
				  cout<<"1        SELECT THE ORDER MENU  "<<endl;
				  cout<<"2           DELECTE THE ORDER       "<<endl;
				  cout<<"3           DISPLAY THE ORDER       "<<endl;
				  cout<<"4             EXIT PROGRAM         "<<endl;
				  cin>>h;
			
			
				  switch(h)
				  	{
				  		case 1:
				  			{
				  			
			cout<<"       _________        "<<endl<<endl;
		cout<<"        | SELECT THE MENU  |            "<<endl;
		cout<<"       _________       "<<endl;
	
		cout<<endl<<endl;
		cout<<" 1    BARGER"<<endl;
		cout<<" 2    SHAWARAMA"<<endl;
		cout<<" 3    PIZZA"<<endl;
		cout<<" 4    ZINGER BARER"<<endl;
		cout<<" 5    ZINGER SHAWARAMA CHIZE"<<endl;
		cout<<" 6    COKE HALF LITTER "<<endl;
		cout<<" 7    COKE ONE LITTER"<<endl;
		cout<<" 8     HOT WRINGS 10 PECIES"<<endl<<endl<<endl;
		do{
		cout<<"        SELECT MENU ORDER           ";
		cin>>arr[e];
		e++;
		cout<<"AGAIN SELECT ORDER PRESS 1 AND STOP ORDER PRESS 0"<<endl;
		cin>>m;
	}while(m==1);
	break;
		  }
							  case 2:
							  	{
								cout<<"DELETE THE ORDER OF USER ";
	                            cin>>f;
                          	for(int i=0;i<=e-1;i++)
                          	{
							
                            	
	                               	if(arr[i]==f)
	                                 	{
	                                       	arr[i]=arr[i+1];
                                        	}
                                        }
                                        	   e--; 

	                                             
  
                                                	break;
					  }
					  case 3:
					  	{
					  		int count=0;
		for(int i=0;i<=e-1;i++)
		{
			cout<<"DISPLAY ORDER NUMBER       ";
			cout<<arr[i]<<endl;
			count++;
		}
		cout<<"DISPLAY ORDER SIZE       ";	 
	cout<<count<<endl;
	break;
						  }
						  case 4:
						  	{
						  		cout<<"       EXIT         "<<endl;
						  		break;
						  	
							  }
						  default:
						  	{
						  		cout<<"INVALID STATEMENT"<<endl;
						  		break;
							  }
							  
							
				}
			
			}
		
				  	cout<<"AGAIN CHOOSE MENU FIRST MENU PRESS ONE OTHERWISE 0"<<endl;
			cin>>l;
		}while(l==1);
		break;
			do{	
				case 2:
					{
					  cout<<"SELECT THE OPTION AND CHECK QUANTITY AGAIN AGAIN ANY MENU"<<endl<<endl;
					  	cout<<" 1    BARGER"<<endl;
	                	cout<<" 2    SHAWARAMA"<<endl;
	                   	cout<<" 3    PIZZA"<<endl;
		                cout<<" 4    ZINGER BARER"<<endl;
		                cout<<" 5    ZINGER SHAWARAMA CHIZE"<<endl;
		                cout<<" 6    COKE HALF LITTER "<<endl;
		                cout<<" 7    COKE ONE LITTER"<<endl;
	                 	cout<<" 8     HOT WRINGS 10 PECIES"<<endl<<endl<<endl;	
	                 	int count1=0;
	                 	int g;
	                 	cout<<"PRESS NUMBER AND SELECT MENU STRENGTH FIND"<<endl;
	                 	cin>>g;
	                 	for(int i=0;i<=e-1;i++)
	                 	{
	                 		if(arr[i]==g)
	                 		{
	                 		 count1++;	
							 }
						 }
						 cout<<"TOTAL STRENGTH IN USER ENTER MENU::::"<<count1<<endl;
						 
					}
					cout<<"AGAIN MENU STRENGTH CHECK PRESSS 1"<<endl;
					cin>>p;
				}while(p==1);
				break;
					case 3:
						{
							int x;
							cout<<"1 PRESS     CHECK TOTAL ALL MENU HIGHEST MENU 1 TO 8 MENU :"<<endl;
							cout<<"2 PRESS      CHECK THE TOTAL SIZE OF ALL ORDER "<<endl;
							cin>>x;
							switch(x)
								{
									case 1:
										{

                            cout<<"HIGHEST ORDER OF MENU"<<endl;
				    	cout<<" 1    BARGER"<<endl;
	                	cout<<" 2    SHAWARAMA"<<endl;
	                   	cout<<" 3    PIZZA"<<endl;
		                cout<<" 4    ZINGER BARGER"<<endl;
		                cout<<" 5    ZINGER SHAWARAMA CHIZE"<<endl;
		                cout<<" 6    COKE HALF LITTER "<<endl;
		                cout<<" 7    COKE ONE LITTER"<<endl;
	                 	cout<<" 8     HOT WRINGS 10 PECIES"<<endl<<endl<<endl;
                           	if(count2>count3 && count2>count4 && count2>count5 && count2>count6 && count2>count7 && count2>count8)
                           	{
                           		cout<<"THE BARGER HIGHEST ORDER :::::::::::::";
                           		usman(arr,e);
                           		cout<<endl;
							   }
							else if(count3>count2 && count3>count4 && count3>count5 && count3>count6 && count3>count7 && count3>count8)
                           	{
                           		cout<<"THE SHAWAMARA HIGHEST ORDER::::::::::::";
                           		usman1(arr,e);
                           		cout<<endl;
							   }
							else if(count4>count2 && count4>count3 && count4>count5 && count4>count6 && count4>count7 && count4>count8)
                           	{
                           			cout<<"THE PIZZA HIGHEST ORDER:::::::::::::";
                           		usman2(arr,e);
                           		cout<<endl;
							   }
							   	else if(count5>count2 && count5>count3 && count5>count4 && count5>count6 && count5>count7 && count5>count8)
                           	{
                           			cout<<"THE ZINGER BARGER HIGHEST ORDER::::::::::::";
                           		usman3(arr,e);
                           		cout<<endl;
							   }
	                 			else if(count6>count2 && count6>count3 && count6>count4 && count6>count5 && count6>count7 && count6>count8)
								 {
								 		cout<<"THE ZINGER SHAWARAMA CCHIZE HIGHEST ORDER::::::::::";
								 	usman4(arr,e);
								 	cout<<endl;
								 }
						 			else if(count7>count2 && count7>count3 && count7>count4 && count7>count5 && count7>count6 && count7>count8)
								 {
								 		cout<<"THE COKE HALF LITTER HIGHEST ORDER:::::::::::";
								 	usman5(arr,e);
								 	cout<<endl;
								 }
								 else if(count8>count2 && count8>count3 && count8>count4 && count8>count5 && count8>count6 && count8>count7)
								 {
								 		cout<<"THE COKE ONE LITTER HIGHEST ORDER:::::::";
								 	usman6(arr,e);
								 	cout<<endl;
								 }
								 else
								 {
								 		cout<<"THe HOT WINGS HIGHEST ORDER::::::::"<<endl;
								 		usman7(arr,e);
								 		cout<<endl;
								 }
								 break;
						 		}
						 		case 2:
						 			{
						 				 int count10=0;
						 			   for(int i=0;i<=e-1;i++)
										{
										   count10++; 
											}
											cout<<"THE TOTAL SIZE OF ORDER ::::::::"<<count10<<endl;
												
									 }
									 break;
						
					
					}
					   break;
						}
						case 4:
							{
							cout<<"         EXIT            "<<endl;
							break;	
							}
							default:
								{
									cout<<"INVALID SATEMENT:";
								}
		}
		cout<<"AGAIN SELECT TOTAL MENU PRESS 1"<<endl;
		cin>>u;
	}while(u==1);
}
int usman(int a[],int y)
{
	int count2=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==1)
		{
			loc=a[i];
			count2++;
		}
	}
	cout<<count2;
}
int usman1(int a[],int y)
{
	int count3=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==2)
		{
			loc=a[i];
			count3++;
		}
	}
	cout<<count3;
}
int usman2(int a[],int y)
{
	int count4=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==3)
		{
			loc=a[i];
			count4++;
		}
	}
	cout<<count4;
}
int usman3(int a[],int y)
{
	int count5=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==4)
		{
			loc=a[i];
			count5++;
		}
	}
	cout<<count5;
}
int usman4(int a[],int y)
{
	int count6=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==5)
		{
			loc=a[i];
			count6++;
		}
	}
	cout<<count6;
}
int usman5(int a[],int y)
{
	int count7=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==6)
		{
			loc=a[i];
			count7++;
		}
	}
	cout<<count7;
}
int usman6(int a[],int y)
{
	int count8=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==7)
		{
			loc=a[i];
			count8++;
		}
	}
	cout<<count8;
}
int usman7(int a[],int y)
{
	int count9=0;
	int loc;
	for(int i=0;i<=y-1;i++)
	{
		if(a[i]==8)
		{
			loc=a[i];
			count9++;
		}
	}
	cout<<count9;
}