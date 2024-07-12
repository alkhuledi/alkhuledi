#include <iostream>

using namespace std;
struct strInFo
{
 string FristName;
 string LaseName;
 int Age;
 int Sal;

};
void ReadInfo( strInFo& Info )
{
 cout<<"Pleas Enter The FristName!:"<<endl;
 cin>>Info.FristName;
 cout<<"Pleas Enter The laseName!:"<<endl;
 cin>>Info.LaseName;
 cout<<"Pleas Enter The Age:"<<endl;
 cin>>Info.Age;
 cout<<"Plaes Enter The Sal:"<<endl;
 cin>>Info.Sal;

}
void PrintInfo( strInFo Info)
{
 cout<<"********************************************"<<endl;
 cout<<"FristName:"<<Info.FristName<<endl;
 cout<<"LaseName:"<<Info.LaseName<<endl;
 cout<<"Age:"<<Info.Age<<endl;
 cout<<"sal:"<<Info.Sal<<endl;
}
void ReadPersonsInfo(strInFo persons [3])
{
 ReadInfo(persons [0]) ;
 ReadInfo(persons [1]);
 ReadInfo(persons [2]);

}
void PrintPersonsInfo(strInFo persons[3])
{
 PrintInfo(persons [0]);
 PrintInfo (persons [1]);
 PrintInfo (persons[2]);
}

int main()
{
 strInFo persons [3];


 ReadPersonsInfo(persons);

  ReadPersonsInfo(persons);
 PrintPersonsInfo(persons);
  PrintPersonsInfo(persons);
 }




