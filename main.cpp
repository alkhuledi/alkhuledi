#include <windows.h>
#include <iostream>

using namespace std;

enum enWeekDay{Sunday=1,Monday,tuesday,Wednesday,Thursady,Friday,Saturday};
void ShowWeekDayMenu()
{
    cout<<"**********************************\n";
    cout<<"           Week Day               \n";
    cout<<"**********************************\n";
    cout<<"1: Sunday \n";
    cout<<"2: Monday \n";
    cout<<"3: Tuesday \n";
    cout<<"4: Wednsday \n";
    cout<<"5: Thursday \n";
    cout<<"6: Friday \n";
    cout<<"7: Saturday \n";

    cout<<" Please Enter The Number Of Day?  ";

}
enWeekDay ReadWeekDay()
{
      enWeekDay Day;
    int Wd;
    cin>>Wd;

   return(enWeekDay)Wd;

}
string GetWeekDayName(enWeekDay WeekDay)
{
    switch(WeekDay)
    {
        case enWeekDay::Sunday:
    return "Sunday";
    break;
      case enWeekDay::Monday:
    return "Monday";
    break;
      case enWeekDay::tuesday:
        return "Tuesday";
        break;
      case enWeekDay::Wednesday:
        return "Wednesday";
        break;
      case enWeekDay::Thursady:
        return "Thursday";
        break;
      case enWeekDay::Friday:
        return "Friday";
        break;
      case enWeekDay::Saturday:
        return "Saturday";
        break;
      default:
        return "Error NOt shows "


    }


}

int main() {

   ShowWeekDayMenu();
   cout<<"day is:"<<GetWeekDayName(ReadWeekDay())<<endl;


    return 0;
}
