/*  March 05, 2015
    SYSTEM BY: MARK ANDREY DELA CRUZ
*/

#include<iostream>
#include<iomanip>
#include<string> //add this header to use strings
#include<fstream>
#include<cstdlib> // add this header to use system commands

using namespace std;

int main()
{
    ofstream outFile;

    float wattage, hours, wattHoursPerDay, kWhPerDay, kWhPerMonth, costPerKWH;
    float dailyAmountDue, monthlyAmountDue, annualAmountDue;
    string appliance1;

    outFile.open("ElectricityConsumption.txt"); //Filename of the FINAL output

    cout<<setfill('*')<<left<<setw(78)<<""<<endl;
    cout<<"System by: Mark Andrey Dela Cruz\tSubmitted to: Sir Ronald Alayon\n\t   John Kenneth Malaluan\tProgramming 2"<<endl;
    cout<<setfill('*')<<left<<setw(78)<<""<<endl;

    cout<<"This System will calculate the Electricity Consumption of Household Appliances."<<endl<<endl;
    cout<<"Enter the Name of Appliance"<<setfill(' ')<<right<<setw(13)<<": ";
    cin>>appliance1;
    cout<<"Enter the Wattage of Appliance"<<setfill(' ')<<right<<setw(10)<<": ";
    cin>>wattage;
    cout<<"Enter the number of hours used per day: "; //hours used per day
    cin>>hours;

    cout<<setfill('-')<<left<<setw(62)<<""<<endl;
    cout<<"NOTE: Cost per kilowatt hour as of March  2015 is = PhP 4.7182|PhP 0.095"<<endl;
    cout<<setfill('-')<<left<<setw(62)<<""<<endl;

    cout<<"Enter this month's cost per kilowatt hour: "; //Ask the user cost per kilo watt hour
    cin>>costPerKWH;

    /* Formula for computing the electricity consumption*/
    wattHoursPerDay=wattage*hours;
    kWhPerDay=wattHoursPerDay/1000;
    kWhPerMonth=kWhPerDay*30;
    dailyAmountDue=kWhPerDay*costPerKWH;
    monthlyAmountDue=kWhPerMonth*costPerKWH;
    annualAmountDue=monthlyAmountDue*12;

    system("cls");

    cout<<endl;
    cout<<setfill('-')<<left<<setw(22)<<""<<endl;
    cout<<"Data Process Finished!"<<endl;
    cout<<setfill('-')<<left<<setw(22)<<""<<endl<<endl;;

    outFile<<fixed<<showpoint<<setprecision(2);
    outFile<<setfill('*')<<left<<setw(36)<<""<<endl;
    outFile<<"Electricity Consumption of a "<<appliance1<<":"<<endl;
    outFile<<"Wattage            = "<<static_cast<int>(wattage)<<" Watts"<<endl;
    outFile<<"Hours used per day = "<<static_cast<int>(hours)<<" Hours"<<endl;
    outFile<<"Cost per KwH       = PhP "<<setprecision(2)<<costPerKWH<<endl<<endl;
    outFile<<"Daily cost  : PhP "<<dailyAmountDue<<endl;
    outFile<<"Monthly cost: PhP "<<monthlyAmountDue<<endl;
    outFile<<"Annual cost : PhP "<<annualAmountDue<<endl;
    outFile<<setfill('*')<<left<<setw(36)<<""<<endl;
    outFile<<"System by: Mark Andrey Dela Cruz\n\t   John Kenneth Malaluan"<<endl;

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Electricity Consumption of a "<<appliance1<<":"<<endl;
    cout<<"Wattage            = "<<static_cast<int>(wattage)<<" Watts"<<endl;
    cout<<"Hours used per day = "<<static_cast<int>(hours)<<" Hours"<<endl;
    cout<<"Cost per KwH       = PhP "<<setprecision(2)<<costPerKWH<<endl<<endl;
    cout<<"Daily cost  : PhP "<<dailyAmountDue<<endl;
    cout<<"Monthly cost: PhP "<<monthlyAmountDue<<endl;
    cout<<"Annual cost : PhP "<<annualAmountDue<<endl<<endl;
    cout<<setfill('-')<<left<<setw(34)<<""<<endl;
    cout<<"System by: Mark Andrey Dela Cruz"<<endl;

    outFile.close();

    system("ElectricityConsumption.txt");
}
