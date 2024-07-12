#include<iostream>
#include<string>
using namespace std;

enum enColor
{
    red, green, Yellow,Blue
};
 enum enGender
 {
    maile,fimale
 };
 enum enMaritalStatus
 {
    signale, married
 };
struct stAddress
{
    string streetName;
    string BulidingNo;
    string PoBox;
    string ZipCode;
    /* data */
};
struct stContactInfo
{
    string phone;
    string emaile;
    stAddress Address;

    /* data */
};
struct stPerson
{
    string FirstNmae;
    string lastName;
    stContactInfo contactInfo;
    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor favourateColor;

    /* data */
};



int main()
{
    stPerson person1;
    person1.FirstNmae="abdulkader";
    person1.lastName="alkhuledi";
    person1.Gender=enGender::maile;
   person1.contactInfo.phone="0556764386";
   person1.contactInfo.Address.streetName=" king abdulaziz street";
   person1.contactInfo.Address.BulidingNo="45";
   person1.contactInfo.Address.ZipCode=2548;

    
     cout<<" first name:"<<person1.FirstNmae<<endl;
     cout<<" last name:"<<person1.lastName<<endl;
     cout<<"gendor:"<< person1.Gender<<endl;
     cout<<"address street name:"<<person1.contactInfo.Address.streetName<<endl;
     cout<<" Buliding Number"<<person1.contactInfo.Address.BulidingNo<<endl;


  



    return 0;
}