#include<iostream>
#include<conio.h>
using namespace std;
class Input
{
  public:
        float i;
};
class LengthConversion: public Input
{   
   public:
       void mm_m();
       void m_mm();
       void cm_m();
       void m_cm();
       void cm_km();
       void km_cm();
       void m_mile();
       void mile_m();
       void km_mile();
       void mile_km();
       void feet_m();
       void m_feet();
       void inch_m();
       void m_inch();
       void yard_m();
       void m_yard();
};
class TemperatureConversion: public Input
{ 
public:
       void cel_f();
       void f_cel();
       void cel_k();
       void k_cel();
       void f_k();
       void k_f();
};
class AreaConversion: public Input
{
   public:
       void mmSq_cmSq();
       void cmSq_mmSq();
       void cmSq_mSq ();
       void mSq_cmSq ();
       void mSq_kmSq ();
       void kmSq_mSq ();
       void feetSq_mSq();
       void mSq_feetSq();
       void yardSq_mSq();
       void mSq_yardSq();
       void mileSq_kmSq();
       void kmSq_mileSq();
       void acre_kmSq();
       void kmSq_acre();
       void acre_hect();
       void hect_acre();
};
class WeightConversion:public Input
    {
    public:
       void milligm_gm();
       void gm_milligm();
       void gm_kg();
       void kg_gm();
       void kg_mton();
       void mton_kg();
       void pound_kg();
       void kg_pound();
       void gm_pound();
       void pound_gm();

};
class VolumeConversion:public Input
  {
   public:
       void mL_L();
       void L_mL();
    };
void LengthConversion ::mm_m()
{
    cout<<"\nEnter value in Millimeter to convert into Meter: "; 
	cin>>i;
    cout<<i<<" Milimeter is "<<i*.001<<" "<<"Meter"<<endl;
}
void LengthConversion ::m_mm()
{
    cout<<"\nEnter value in Meter to convert into Milimeter: "; 
	cin>>i;
    cout<<i<<" Meter is "<<i*1000<<" "<<" MiliMeter"<<endl;
}
 void LengthConversion ::cm_m()
{
    cout<<"\nEnter value in  Centimeter to convert into Meter: ";
    cin>>i;
    cout<<i<<" CentiMeter is "<<i*.01<<" "<<" Meter"<<endl;
}
void LengthConversion ::m_cm()
{
    cout<<"\nEnter value in meter to convert into Centimeter :";
    cin>>i;
    cout<<i<<" Meter is" <<i*100<<" "<<" Centimeter"<<endl;
}
void LengthConversion::cm_km()
{
	cout<<"\nEnter value in Centimeter to convert into Kilometer:";
	cin>>i;
	cout<<i<<"Centimeter is"<<i*0.00001<<" "<<"Kilometer"<<endl;
}
void LengthConversion::km_cm()
{
	cout<<"\nEnter value in Kilometer to convert into Centimeter:";
	cin>>i;
	cout<<i<<"Kilometer is"<<i*100000<<" "<<"Centimeter"<<endl;
}
void LengthConversion::m_mile()
{
	cout<<"\nEnter value in Meter to convert into Mile:";
	cin>>i;
	cout<<i<<"Meter is"<<i*.00062<<" "<<"Mile"<<endl;
}
void LengthConversion::mile_m()
{
	cout<<"\nEnter value in Mile to convert into Meter:";
	cin>>i;
	cout<<i<<"Mile is"<<i*1609.344<<" "<<"Meter"<<endl;
}
void LengthConversion::km_mile()
{
	cout<<"\nEnter value in Kilometer to convert into Mile:";
	cin>>i;
	cout<<i<<"Kilometer is"<<i*0.621371<<" "<<"Mile"<<endl;
}
void LengthConversion::mile_km()
{
	cout<<"\nEnter value in Mile to convert into Kilometer:";
	cin>>i;
	cout<<i<<"Mile is"<<i*1.609344<<" "<<"Kilometer"<<endl;
}
void LengthConversion::feet_m()
{
	cout<<"\nEnter value in Feet to convert into Meter:";
	cin>>i;
	cout<<i<<"Feet is"<<i*0.3048 <<" "<<"Meter"<<endl;
}
void LengthConversion::m_feet()
{
	cout<<"\nEnter value in Meter to convert into Feet:";
	cin>>i;
	cout<<i<<"Meter is"<<i*3.2808  <<" "<<"Feet"<<endl;
}
void LengthConversion::inch_m()
{
	cout<<"\nEnter value in Inch to convert into Meter:";
	cin>>i;
	cout<<i<<"Inch is"<<i*0.0254 <<" "<<"Meter"<<endl;
}
void LengthConversion::m_inch()
{
	cout<<"\nEnter value in Meter to convert into Inch:";
	cin>>i;
	cout<<i<<"Meter is"<<i*39.3701<<" "<<"Inch"<<endl;
}
void LengthConversion::yard_m()
{
	cout<<"\nEnter value in Yard to convert into Meter:";
	cin>>i;
	cout<<i<<"Yard is"<<i*0.9144<<" "<<"Meter"<<endl;
}
void LengthConversion::m_yard()
{
	cout<<"\nEnter value in Meter to convert into Yard:";
	cin>>i;
	cout<<i<<"Meter is"<<i*1.09361<<" "<<"Yard"<<endl;
}
void TemperatureConversion::cel_f()
{
    cout<<"\nEnter value in Celsius to convert into Farenhit :";
    cin>>i;
    cout<<i<<" Celsius is " <<(((9*i)/5)+32)<<" "<<" Fahrenhite"<<endl;
}
void TemperatureConversion::f_cel()
{
    cout<<"\nEnter value in  Fahrenheit to convert into celsius:";   
	cin>>i;
    cout<<i<<" Fahrenheit is" <<(((i-32)/9)*5)<<" "<<" celsius"<<endl;
}
void TemperatureConversion::cel_k()
{
    cout<<"\nEnter value in  celsius to convert into kelvin :";
	cin>>i;
    cout<<i<<" celsius is "<<i+273<<" "<<" kelvin"<<endl;
}
void TemperatureConversion::k_cel()
{
    cout<<"\nEnter value in  kelvin to convert into celsius:";  
	cin>>i;
    cout<<i<<" kelvin is" <<i-273<<" "<<" celsius"<<endl;
}
void TemperatureConversion::f_k()
{
    cout<<"\nEnter value in Fahrenheit  to convert into kelvin :";  
	cin>>i;
    cout<<i<<"Fahrenheit is" <<i+457.8<<" "<<" kelvin "<<endl;
}
void TemperatureConversion::k_f()
{
    cout<<"\nEnter value in kelvin  to convert into Fahrenheit: ";  
	cin>>i;
    cout<<i<<"kelvin is" <<i-457.8<<" "<<" Fahrenheit "<<endl;
}
void AreaConversion::mmSq_cmSq()
{
	cout<<"\nEnter value in Millimeter square to convert into Centimeter square:";
	cin>>i;
	cout<<i<<"Millimeter square is"<<i*0.01<<" "<<"Centimeter square"<<endl;
}
void AreaConversion::cmSq_mmSq()
{
	cout<<"\nEnter value in Centimeter square to convert into  Millimeter square:";
	cin>>i;
	cout<<i<<"Centimeter square is"<<i*100<<" "<<" Millimeter square"<<endl;
}
void AreaConversion::cmSq_mSq()
{
	cout<<"\nEnter value in Centimeter square to convert into  Meter square:";
	cin>>i;
	cout<<i<<"Centimeter square is"<<i*0.000001<<" "<<" Meter square"<<endl;
}
void AreaConversion::mSq_cmSq()
{
	cout<<"\nEnter value in Meter square to convert into  Centimeter square:";
	cin>>i;
	cout<<i<<"Meter square is"<<i*10000<<" "<<" Centimeter square"<<endl;
}
void AreaConversion::mSq_kmSq()
{
	cout<<"\nEnter value in Meter square to convert into  Kilometer square:";
	cin>>i;
	cout<<i<<"Meter square is"<<i*0.000001<<" "<<" Kilometer square"<<endl;
}
void AreaConversion::kmSq_mSq()
{
	cout<<"\nEnter value in Kilometer square to convert into  Meter square:";
	cin>>i;
	cout<<i<<"Kilometer square is"<<i*1000000<<" "<<" Meter square"<<endl;
}
void AreaConversion::feetSq_mSq()
{
	cout<<"\nEnter value in Feet square to convert into  Meter square:";
	cin>>i;
	cout<<i<<"Feet square is"<<i*0.092903<<" "<<" Meter square"<<endl;
}
void AreaConversion::mSq_feetSq()
{
	cout<<"\nEnter value in Meter square to convert into  Feet square:";
	cin>>i;
	cout<<i<<"Meter square is"<<i*10.7639<<" "<<" Feet square"<<endl;
}
void AreaConversion::yardSq_mSq()
{
	cout<<"\nEnter value in Yard square to convert into  Meter square:";
	cin>>i;
	cout<<i<<"Yard square is"<<i*0.836127<<" "<<" Meter square"<<endl;
}
void AreaConversion::mSq_yardSq()
{
	cout<<"\nEnter value in Meter square to convert into  Yard square:";
	cin>>i;
	cout<<i<<"Meter square is"<<i*1.19599<<" "<<" Yard square"<<endl;
}
void AreaConversion::mileSq_kmSq()
{
	cout<<"\nEnter value in Mile square to convert into  Kilometer square:";
	cin>>i;
	cout<<i<<"Mile square is"<<i*2.58999<<" "<<" Kilometer square"<<endl;
}
void AreaConversion::kmSq_mileSq()
{
	cout<<"\nEnter value in Kilometer square to convert into  Mile square:";
	cin>>i;
	cout<<i<<"Kilometer square is"<<i*0.386102<<" "<<" Mile square"<<endl;
}
void AreaConversion::acre_kmSq()
{
	cout<<"\nEnter value in Acre to convert into  Kilometer square:";
	cin>>i;
	cout<<i<<"Acre is"<<i*0.00404686<<" "<<" Kilometer square"<<endl;
}
void AreaConversion::kmSq_acre()
{
	cout<<"\nEnter value in Kilometer square to convert into Acre:";
	cin>>i;
	cout<<i<<"Kilometer square is"<<i*247.105<<" "<<"Acre"<<endl;
}
void AreaConversion::acre_hect()
{
	cout<<"\nEnter value in Acre to convert into Hectare:";
	cin>>i;
	cout<<i<<"Acre is"<<i*0.404686<<" "<<"Hectare"<<endl;
}
void AreaConversion::hect_acre()
{
	cout<<"\nEnter value in Hectare to convert into Acre:";
	cin>>i;
	cout<<i<<"Hectare is"<<i*2.47105<<" "<<"Acre"<<endl;
}
void WeightConversion::milligm_gm()
{
	cout<<"\nEnter value in Milligram to convert into Gram:";
	cin>>i;
	cout<<i<<"Milligram is"<<i*0.001<<" "<<"Gram"<<endl;
}
void WeightConversion::gm_milligm()
{
	cout<<"\nEnter value in Gram to convert into milligram:";
	cin>>i;
	cout<<i<<"Gram is"<<i*1000<<" "<<"Milligram"<<endl;
}
void WeightConversion::gm_kg()
{
	cout<<"\nEnter value in Gram to convert into Kilogram:";
	cin>>i;
	cout<<i<<"Gram is"<<i*0.001<<" "<<"Kilogram"<<endl;
}
void WeightConversion::kg_gm()
{
	cout<<"\nEnter value in Kilogram to convert into Gram:";
	cin>>i;
	cout<<i<<"Kilogram is"<<i*1000<<" "<<"Gram"<<endl;
}
void WeightConversion::kg_mton()
{
	cout<<"\nEnter value in Kilogram to convert into Metric ton:";
	cin>>i;
	cout<<i<<"Kilogram is"<<i*0.001<<" "<<"Metric ton"<<endl;
}
void WeightConversion::mton_kg()
{
	cout<<"\nEnter value in Metric ton to convert into Kilogram:";
	cin>>i;
	cout<<i<<"Metric ton is"<<i*1000<<" "<<"Kilogram"<<endl;
}
void WeightConversion::pound_kg()
{
	cout<<"\nEnter value in pound to convert into Kilogram:";
	cin>>i;
	cout<<i<<"pound is"<<i*0.453592<<" "<<"Kilogram"<<endl;
}
void WeightConversion::kg_pound()
{
	cout<<"\nEnter value in Kilogram to convert into Pound:";
	cin>>i;
	cout<<i<<"Kilogram is"<<i*2.20462<<" "<<"Pound"<<endl;
}
void WeightConversion::gm_pound()
{
	cout<<"\nEnter value in Gram to convert into Pound:";
	cin>>i;
	cout<<i<<"Gram is"<<i*0.00220462<<" "<<"Pound"<<endl;
}
void WeightConversion::pound_gm()
{
	cout<<"\nEnter value in Pound to convert into Gram:";
	cin>>i;
	cout<<i<<"Pound is"<<i*453.592<<" "<<"Gram"<<endl;
}
void VolumeConversion::mL_L()
{
	cout<<"\nEnter value in Milliliter to convert into Liter:";
	cin>>i;
	cout<<i<<"Milliliter is"<<i*0.001<<" "<<"Liter"<<endl;
}
void VolumeConversion::L_mL()
{
	cout<<"\nEnter value in Liter to convert into Milliliter:";
	cin>>i;
	cout<<i<<"Liter is"<<i*1000<<" "<<"Milliliter"<<endl;
}
int main()
{
	LengthConversion l;
	TemperatureConversion t;
	AreaConversion a;
	WeightConversion w;
	VolumeConversion v;
	  int choice=0;
	 while(1)   
	  {
	  	    
   mainmenu:cout <<"Press 1: for length conversion"<<endl;
	  		cout <<"Press 2: for temperature conversion"<<endl;
	  		cout <<"Press 3: for area conversion"<<endl;
	  		cout <<"Press 4: for weight conversion"<<endl;
	  		cout <<"Press 5: for volume conversion"<<endl;
	  		cout <<"press 0: for exit"<<endl;
            cin >>choice;
	  	    if(choice==0)
	  	    {
	  	    	break;
	  	    }
	  	    if(choice==1)
	  	    {
	  	    	int x;
	  	        FOR:cout <<"Press 1 : for  mm to m"<<endl;
	  	        cout <<"Press 2 : for  m to mm"<<endl;
	  	        cout <<"Press 3 : for  cm to m"<<endl;
	  	        cout <<"Press 4 : for  m to cm"<<endl;
	  	        cout <<"Press 5 : for  cm to km"<<endl;
	  	        cout <<"Press 6 : for  km to cm"<<endl;
	  	        cout <<"Press 7 : for  m to mile"<<endl;
	  	        cout <<"Press 8 : for  mile to m"<<endl;
	  	        cout <<"Press 9 : for  km to mile"<<endl;
	  	        cout <<"Press 10 : for  mile to km"<<endl;
	  	        cout <<"Press 11 : for  feet to m"<<endl;
	  	        cout <<"Press 12 : for  m to feet"<<endl;
	  	        cout <<"Press 13 : for  inch to m"<<endl;
	  	        cout <<"Press 14 : for  m to inch"<<endl;
	  	        cout <<"Press 15 : for  yard to m"<<endl;
	  	        cout <<"Press 16 : for  m to yard"<<endl;
	  	      inputmenu1:  cin >>x;
	  	        if(x>16 || x<0)
	  	        {
	  	        	cout <<"Press valid choice"<<endl;
	  	        	goto inputmenu1;
	  	        }
	  	        if(x==0)
	  	        {
	  	        	break;
				}
	  	        if(x==1)
	  	        {
	  	        	l.mm_m();
	  	        }
	  	        else if(x==2)
	  	        {
	  	        	l.m_mm();
	  	        }
	  	        else if(x==3)
	  	        {
	  	        	l.cm_m();
	  	        }
	  	        else if(x==4)
	  	        {
	  	           l.m_cm();	
	  	        }
	  	        else if(x==5)
	  	        {
	  	            l.cm_km();
				}
				else if(x==6)
				{
					l.km_cm();
				}
				else if(x==7)
				{
					l.m_mile();
				}
				else if(x==8)
				{
					l.mile_m();
				}
				else if(x==9)
				{
					l.km_mile();
				}
				else if(x==10)
				{
					l.mile_km();
				}
				else if(x==11)
				{
					l.feet_m();
				}
				else if(x==12)
				{
					l.m_feet();
				}
				else if(x==13)
				{
					l.inch_m();
				}
				else if(x==14)
				{
					l.m_inch();
				}
				else if(x==15)
				{
					l.yard_m();
				}
				else
				{
					l.m_yard();
				}
	  	        char in;
	  	          cout <<"Press 'y' to convert another length or Press 'n' to goto main menu"<<endl;
	  	          cin >>in;
	  	          if(in=='y')
				     goto FOR;
				else 
				{
					goto mainmenu;
				}
	  	    }
	  	    else if(choice==2)
	  	    { 
	  	        
	  	    for1:cout <<"Press 1 : for cel to far"<<endl;
	  	        cout <<"Press 2 : for far to cel"<<endl;
	  	        cout <<"Press 3 : for cel to kel"<<endl;
	  	        cout <<"Press 4 : for kel to cel"<<endl;
	  	        cout <<"Press 5 : for far to kel"<<endl;
	  	        cout <<"Press 6 : for kel to far"<<endl;
	  	        int y;
				inputmenu2:  
				cin >>y;
	  	        if(y>6 || y<0)
	  	        {
	  	        	cout <<"Press valid choice"<<endl;
	  	        	goto inputmenu2;
	  	        }
	  	        if(y==0)
	  	        {
	  	        	break;	
				}
	  	        if(y==1)
	  	        {
	  	        	t.cel_f();
	  	        }
	  	        else if(y==2)
	  	        {
	  	        	t.f_cel();
	  	        }
	  	        else if(y==3)
	  	        {
	  	        	t.cel_k();
	  	        }
	  	        else if(y==4)
	  	        {
	  	        	t.k_cel();
	  	        }
	  	        else if(y==5)
	  	        {
	  	        	t.f_k();	
				}
				else 
				{
					t.k_f();
				}
				  char in1;
	  	          cout <<"Press 'y' to convert another temp or Press 'n' to goto main menu"<<endl;
	  	          cin >>in1;
	  	          if(in1=='y')
				     goto for1;
				else 
				{
					goto mainmenu;
				}
		    }
		    else if(choice==3)
		    {
		    for2:
				cout<<"Press 1 :for mmSq to cmSq"<<endl;
				cout<<"Press 2 :for cmSq to mmSq"<<endl;
				cout<<"Press 3 :for cmSq to mSq"<<endl;
				cout<<"Press 4 :for mSq to cmSq"<<endl;
				cout<<"Press 5 :for mSq to kmSq"<<endl;
				cout<<"Press 6 :for kmSq to mSq"<<endl;
				cout<<"Press 7 :for feetSq to mSq"<<endl;
				cout<<"Press 8 :for mSq to feetSq"<<endl;
				cout<<"Press 9 :for yardSq to mSq"<<endl;
				cout<<"Press 10 :for mSq to yardSq"<<endl;
				cout<<"Press 11 :for mileSq to kmSq"<<endl;
				cout<<"Press 12 :for kmSq to mileSq"<<endl;
				cout<<"Press 13 :for acre to kmSq"<<endl;
				cout<<"Press 14 :for kmSq to acreSq"<<endl;
				cout<<"Press 15 :for acre to hect"<<endl;
				cout<<"Press 16 :for hect to acre"<<endl;
				int z;
				inputmenu3:
				cin>>z;
				if(z>16 || z<0)
				{
					cout <<"Press valid choice"<<endl;
					goto inputmenu3;	
				}
				if(z==0)
				{
					break;
				}
				if(z==1)
				{
					a.mmSq_cmSq();
				}
				else if(z==2)
				{
					a.cmSq_mmSq();
				}
				else if(z==3)
				{
					a.cmSq_mSq();
				}
				else if(z==4)
				{
					a.mSq_cmSq();
				}
				else if(z==5)
				{
					a.mSq_kmSq();
				}
				else if(z==6)
				{
					a.kmSq_mSq();
				}
				else if(z==7)
				{
					a.feetSq_mSq();
				}
				else if(z==8)
				{
					a.mSq_feetSq();
				}
				else if(z==9)
				{
					a.yardSq_mSq();
				}
				else if(z==10)
				{
					a.mSq_yardSq();
				}
				else if(z==11)
				{
					a.mileSq_kmSq();
				}
				else if(z==12)
				{
					a.kmSq_mileSq();
				}
				else if(z==13)
				{
					a.acre_kmSq();
				}
				else if(z==14)
				{
					a.kmSq_acre();
				}
				else if(z==15)
				{
					a.acre_hect();
				}
				else
				{
					a.hect_acre();
				}
				  char in2;
	  	          cout <<"Press 'y' to convert another area or Press 'n' to goto main menu"<<endl;
	  	          cin >>in2;
	  	          if(in2=='y')
						goto for2;
				  else
				  {
				  	goto mainmenu;
				  }
			}
			 else if(choice==4)
			{
				for3:
					cout<<"Press 1 :for milligm to gm"<<endl;
					cout<<"Press 2 :for gm to milligm"<<endl;
					cout<<"Press 3 :for gm to kg"<<endl;
					cout<<"Press 4 :for kg to gm"<<endl;
					cout<<"Press 5 :for kg to mton"<<endl;
					cout<<"Press 6 :for mton to kg"<<endl;
					cout<<"Press 7 :for pound to kg"<<endl;
					cout<<"Press 8 :for kg to pound"<<endl;
					cout<<"Press 9 :for gm to pound"<<endl;
					cout<<"Press 10 :for pound to gm"<<endl;
					int k;
					inputmenu4:
					cin>>k;
					if(k>10 || k<0)
					{
					cout <<"Press valid choice"<<endl;
					goto inputmenu4;
					}
					if(k==0)
					{
						break;
					}
					if(k==1)
					{
						w.milligm_gm();
					}
					if(k==2)
					{
						w.gm_milligm();	
					}
					if(k==3)
					{
						w.gm_kg();
					}
					if(k==4)
					{
						w.kg_gm();
					}
					if(k==5)
					{
						w.kg_mton();
					}
					if(k==6)
					{
						w.mton_kg();
					}
					if(k==7)
					{
						w.pound_kg();
					}
					if(k==8)
					{
						w.kg_pound();
					}
					if(k==9)
					{
						w.gm_pound();
					}
					else
					{
						w.pound_gm();
					}
					char in3;
					cout <<"Press 'y' to convert another weight or Press 'n' to goto main menu"<<endl;
	  	          	cin >>in3;
	  	          	if(in3=='y')
						goto for3;
				  	else
				 	{
				 	goto mainmenu;
				    }
			}
				else(choice==5);
			{
				for4:
				cout<<"Press 1 :for mL to L"<<endl;
				cout<<"Press 2 :for L to mL"<<endl;	
				int t;
				inputmenu5:
					cin>>t;
					if(t>2 || t<0)
					{
						cout <<"Press valid choice"<<endl;
						goto inputmenu5;
					}
					if(t==0)
					{
						break;
					}
					if(t==1)
					{
						v.mL_L();
					}
					else(t==2);
					{
						v.L_mL();
					}
					char in4;
					cout<<"Press 'y' to convert another volume or Press 'n' to goto main menu"<<endl;
					cin>>in4;
					if(in4=='y')
						goto for4;
					else
					{
						goto mainmenu;
					}		   
			}		
		}
	}
		

	
    
    

