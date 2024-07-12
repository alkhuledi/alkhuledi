#include <iostream>
using namespace std;
void ReadArrayDate(int y[3])
{

cout<<"Plese Enter Array[0]:"<<endl;
cin>>y[0];
cout<<"Plse Enter The Array [1]:"<<endl;
cin>>y[1];
cout<<"Plese Enter The Array[2]:"<<endl;
cin>>y[2];

}
void PrintArrayDate(int z[3])
{
 cout<<" Array Is [0]:"<<z[0]<<endl;
 cout<<" Array Is [1]:"<<z[1]<<endl;
 cout<<" Array Is [2]:"<< z[2]<<endl;

}
// H.w
void ReadGrades(float Grades[3])
{
cout<<"Please Enter The Grades1!:"<<endl;
cin>>Grades[0];
cout<<"Please Enter The Grades2!:"<<endl;
cin>>Grades[1];
cout<<"Please Enter The Grades3!:"<<endl;
cin>>Grades[2];

}
double CalculateAverageGradesSum(float Grades[3]){

 return (Grades[0] + Grades[1]+ Grades[2]) ;
}
//H.w

float CalculateAverageGrades(float Grades[3])
{
 return CalculateAverageGradesSum(Grades )/3;
}
void sum()
{
     int d1,d2,d3;
 cout<<"d1";
 cin>>d1;
 cout<<"d1";
 cin>>d2;
 cout<<"d1";
 cin>>d3;
 int sum=d1+d2+d3;
 float ave=sum/3;
 cout<<"sum"<<sum<<endl;
 cout<<"ave"<<ave<<endl;
}
void sum2()
{
 int x[3];
cout<<"d1"<<endl;
cin>>x[0];
cout<<"d1"<<endl;
cin>>x[1];
cout<<"d1"<<endl;
cin>>x[2];
int sum=x[0]+x[1]+x[2];
double ave=sum/3;
cout<<"sum:"<<sum<<endl;
cout<<"ave"<<ave;

}
void sum4()
{
    int sum,i;
int z[3];
for(int i=0;i<3;i++)
{
    //cout<<"Eter the"<<i+1<<endl;
 cin>>z[i];



}
for(int i=0;i<3;i++)
{
 sum+=z[i];
}
cout<<sum;


}
int main()
{
int Date[3];
//ReadArrayDate(Date) ;
//PrintArrayDate(Date);
for(int i=1;i<=3;i++)
{
 ReadArrayDate(Date) ;
PrintArrayDate(Date);
}


  //H.w
  //float Grades [3];
//ReadGrades(Grades);
//ReadGrades(Grades);
//ReadGrades(Grades);

//cout<<"The Average Is:= "<<CalculateAverageGrades(Grades)<<endl;
//cout<<"The Sum:"<<CalculateAverageGradesSum(Grades );
//cout<<"The Average Is:= "<<CalculateAverageGrades(Grades)<<endl;
//cout<<"The Average Is:= "<<CalculateAverageGrades(Grades)<<endl;
}


