#include<iostream>
using namespace std ;
// int main(){
//     int num ;
//     cout << "Enter the Number :" ;
//     cin >> num ;
//     if(num>0)
//         cout << "Number is Positive !" ;
//     else if(num<0)
//         cout << "Number is Negative !" ;
//     else    
//         cout << "The Given Number is Zero !" ;
//     return 0 ;
// }
// int main(){
//     int num ;
//     cout << "Enter the Number :" ;
//     cin >> num ;
//     if(num%2==0)
//         cout << "The Given number is EVEN !" ;
//     else 
//         cout << "The Given Number is ODD !" ;
//     return 0 ;
// }
// int main(){
//     int age ;
//     cout << "Enter the Age of the Person :" << endl ;
//     cin >> age ;
//     if(age>=18 && age<=100){
//         cout << "The Person Can Vote !" ;
//     }
//     else
//         cout << "The Given Person Cannot vote !" ;
//     return 0 ;
// }
// int main(){
//     int num1 , num2 ;
//     cout << "Enter the Numbers :" << endl ;
//     cin >> num1 >> num2 ;
//     if(num1>=num2)
//         cout << num1 << " is Greatest among the Two Numbers !" ;
//     else
//         cout << num2 << " is Greatest among the Two Numbers !" ;
//     return 0 ;
// }
// int main(){
//     int num ;
//     cout << "Enter the Given Number :" << endl ;
//     cin >> num ;
//     if(num%5==0)
//         cout << "The Given number is Divisible by 5." ;
//     else
//         cout << "The Given number is Not divisible by 5." ;
//     return 0 ;
// }
// int main(){
//     int marks ;
//     cout << "Enter the Marks obtained by the student :" << endl ;
//     cin >> marks ;
//     if(marks>40 && marks<=100)
//         cout << "PASS !" ;
//     else 
//         cout << "FAIL !" ;
//     return 0 ;
// }
// int main(){
//     int n1,n2 ;
//     cout << "Enter the numbers :" << endl ;
//     cin >> n1 >> n2 ;
//     if(n1<n2)
//         cout << n1 << " Is the Smallest among the 2 Numbers !" ;
//     else
//         cout << n2 << " Is the Smallest among the 2 Numbers !" ;
//     return 0 ;
// }
// int main(){
//     int num ;
//     cout << "Enter the Number :" << endl ;
//     cin >> num ;
//     if(num==0)
//         cout << "The Given number is ZERO !" ;
//     else 
//         cout << "The Given number is not ZERO !" ;
//     return 0 ;
// }
// int main(){
//     int n1,n2,n3 ;
//     cout << "Enter the Three Numbers :" << endl ;
//     cin >> n1 >> n2 >> n3 ;
//     if(n1>n2 && n1>n3)
//         cout << n1 << " is Greatest among the Three numbers !" ;
//     else if(n2>n3 && n2>n1)
//         cout << n2 << " is Greatest among the Three numbers !" ;
//     else
//         cout << n3 << " is Greatest among the Three numbers !" ;
//     return 0 ;
// }
// int main(){
//     int n1,n2,n3 ;
//     cout << "Enter the Three Numbers :" << endl ;
//     cin >> n1 >> n2 >> n3 ;
//     if(n1<n2 && n1<n3)
//         cout << n1 << " Is smallest among the Three Numbers !" ;
//     else if(n2<n1 && n2<n3)
//         cout << n2 << " Is smallest among the Three Numbers !" ;
//     else    
//         cout << n3 << " Is smallest among the Three Numbers !" ;
//     return 0 ;
// }
// int main(){
//     int marks ;
//     cout << "Enter the Marks obtained by the Student :" << endl ;
//     cin >> marks ;
//     if(marks>=90 && marks<=100)
//         cout << "Grade A" ;
//     else if(marks>=80 && marks<90)
//         cout << "Grade B" ;
//     else if(marks>=70 && marks<80)
//         cout << "Grade C" ;
//     else if(marks>=60 && marks<70)
//         cout << "Grade D" ;
//     else if(marks>=0 && marks<60)
//         cout << "Failed !" ;
//     else 
//         cout << "Invalid Marks !" ;
//     return 0 ;
// }
// int main(){
//     int num ;
//     cout << "Enter the Number :" << endl ;
//     cin >> num ;
//     if(num>=0){
//         if(num%2==0)
//             cout << "Positive EVEN !" ;
//         else    
//             cout << "Positive ODD !" ;
//     }
//     else{
//         if(num%2 == 0)
//             cout << "Negative EVEN !" ;
//         else    
//             cout << "Negative ODD !" ;
//     }
//     return 0 ;
// }
// int main(){
//     int year ;
//     cout << "Enter the Year you want to search :" << endl ;
//     cin >> year ;
//     if((year%4==0 && year%100!=0) || year%400==0)
//         cout << "The Given Year is A Leap Year !" ;
//     else 
//         cout << "The Given year is not a leap year !" ;
//     return 0; 
// }
// int main(){
//     int temp ;
//     cout << "Enter the Temperature of the Given Room :" << endl ;
//     cin >> temp ;
//     if(temp<=10)
//         cout << "COLD !" ;
//     else if(temp>10 && temp<=20)
//         cout << "MODERATE !" ;
//     else if(temp>20 && temp<35)
//         cout << "WARM !" ;
//     else if(temp>=35)
//         cout << "HOT !" ;
//     else 
//         cout << "Enter the Valid Temperature !" ;
//     return 0 ;
// }
// int main(){
//     int cp , sp ;
//     cout << "Enter the cost price and selling price of the product :" << endl ;
//     cin >> cp >> sp ;
//     if(cp>sp)
//         cout << "LOSS !" ;
//     else if(sp>cp)
//         cout << "PROFIT !" ;
//     else
//         cout << "NO PROFIT , NO LOSS !" ;
//     return 0 ;
// }
// int main(){
//     int a , b ;
//     cin >> a >> b ;
//     int limit = a > b ? a : b ;
//     cout << limit ;
//     return 0 ;
// }
// int main(){
//     int unit ;
//     cout << "Enter the Number of Units Consumed by the User :" << endl ;
//     cin >> unit ;
//     int bill = 0 ;
//     if(unit>0 && unit<=100)
//         bill += unit*5 ;
//     else if(unit>100 && unit<=200)
//         bill += (unit-100)*7 + 100*5 ;
//     else
//         bill += (unit-200)*10 + (unit-100)*7 + 100*5 ;
//     cout << "BILL :" << bill ;
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     float a1,a2,a3 ;
//     cout << "Enter the Angles of the Triangle :" << endl ;
//     cin >> a1 >> a2 >> a3 ;

//     if(a1+a2+a3 == 180){
//     if(a1 == a2 && a2 == a3)
//         cout << "Equilateral Triangle !" ;
//     else if(a1 == a2 || a2 == a3 || a1==a3)
//         cout << "Isosceles Triangle !" ;
//     else if(a1 != a2 != a3)
//         cout << "Scalene Triangle !" ;
//     }
//     else 
//         cout << "Triangle is Not Valid !" ;
//     return 0 ;
// }
#include<iostream>
using namespace std ;
// int main(){
//     int age ;
//     string citizen ;
//     cout << "Enter the Age of the Person :" << endl ;
//     cin >> age ;
//     cout << "Enter the Nationality of the person :" << endl ;
//     cin >> citizen ;
//     if((age>=18 && age<=100) && citizen == "Indian")
//         cout << "Eligible for Voting !" ;
//     else 
//         cout << "The Person Cannot vote !" ;
//     return 0 ;
// }
// int main(){
//     int maths , physics , chem , total ;
//     cout << "Enter the Marks obtained in Maths :" << endl ;
//     cin >> maths ;
//     cout << "Enter the Marks obtained in Physics :" << endl ;
//     cin >> physics ;
//     cout << "Enter the Marks obtained in Chemistry :" << endl ;
//     cin >> chem ;
//     total = maths + physics + chem ;
//     if(maths>=60 && physics>=50 && chem>=50 && total>=180)
//         cout << "Eligible for Admission !" ;
//     else    
//         cout << "Not Eligible for Admission :" ;
//     return 0 ;
// }
// int main(){
//     string name = "Pranav" ;
//     int pass = 12345678 ;
//     string username ;
//     int password ;
//     cout << "Enter Your Username :" << endl ;
//     cin >> username ;
//     cout << "Enter the Password :" << endl ;
//     cin >> password ;
//     if(name == username && pass == password)
//         cout << "Access Granted !" ;
//     else    
//         cout << "Access Denied !" ;
//     return 0 ;
// }
// int main(){
//     int num1 , num2 ;
//     int ch ;
//     cout << "Enter the Numbers :" << endl  ;
//     cin >> num1 >> num2 ;
//     cout << "Enter your Choice :" << endl ;
//     cin >> ch ;
//     int result ;
//     switch(ch){
//         case 0 :
//             result = num1+num2 ;
//             break ;
//         case 1 :
//             result = num1-num2 ;
//             break ;
//         case 2 :
//             result = num1*num2 ;
//             break ;
//         case 3 :
//             result = num1/num2 ;
//             break ;
//         default :
//             cout << "Invalid Choice !" ;

//     }
//     cout << "Result :" << result ;
//     return 0 ;
// }
int main(){
int a = 5;
int b = 2;

cout << (a & b == 0);



}