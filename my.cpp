#include <iostream>
#include <math.h>
using namespace std;

// calculate the sum of n natural numbers 


// int main(){
//     int n;
// int sum;
// cout<<"print the value of n = ";
// cin>>n;
// sum= n*(n+1)/2;
// cout<<"sum is "<<su


// calculate the square root of quadratic equation 

// int main() {
//     float a, b, c;
//     float root1;
//     float root2;
//     cout<<"enter three values ";
//     cin>>a>>b>>c;
//     root1=((-b) + sqrt(b*b-4*a*c))/(2*a);
//     root2=((-b) - sqrt(b*b-4*a*c))/(2*a);
//     cout<<root1<<""<<root2;
// }


//print simple interest 
// int main() 
// {
//     int  P, R, T;
//     float SI;
//     cout<<"enter P R T ";
//     cin>>P>>R>>T;
//     SI=(P*R*T)/100;//write expression here
//     cout<<SI;
//     return SI;
// // }

 
// int main()
// {
//     int a=5, b=4, c=6;
//     int prod =2;
//     int sum =5;
//     sum+=a+b+c;   
//     // prod*=a*b*c;
//     cout<<sum;

// }

// int main() {
//      int x=1, y=5, z=7, k;
//      k= x++*z;
//      cout<<k<<" "<<x<<endl;
//      cout<<y<<" "<<z<<endl;
// // }  
// int main() {
//     char x = 127;
//     x++;

//     cout<<(char)x;
// }
//  enum day {mon, tue, wed, thu, fri, sat, sun};

//  int main() {
//      day d;
//      d=mon; 

//      cout<<mon<<endl;
//      cout<<tue<<endl;
//      cout<<wed<<endl;
//      cout<<thu<<endl;

//  }



// nested loops (roots of the quadratic equation)

// int main() {
//     int a, b, c;
//     int d= b*b-4*a*c;
//     float r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
//     float r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
//     cout<<"enter three nos";
//     cin>>a>>b>>c;
//     d = b*b-4*a*c;
//     r1 = (-b + sqrt(b*b-4*a*c))/(2*a);  
//     r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
//     cout<<d<<endl;
    
//     if(d==0){
//         cout<<"roots are real ans equal"<<endl;
//         cout<<r1<<endl;
//     } else if(d>0){
//         cout<<"roots aare real and different"<<endl;
//         cout<<r1<<r2<<endl;
//     } else if(d<0){
//         cout<<"imaginary roots";
//     }

// }

// int main() {

//        int x=4;

//        switch(x) {
//            case 1: cout<<"Alpha"<<endl;
//            break;
//            default : cout<<"Invalid No.\n"; 
//            break;
//            case 2: cout<<"Beta\n";
//            break;
//            case 3: cout<<"Gamma\n";
//            break;
//           default : cout<<"Invalid No.";   
//        }
// }
             



            //  int main() {
            //      cout<<"Manu\n";
            //      cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multplication\n"<<"4. divide\n";

            //      int option;
            //      cout<<"Enter your choice\n";
            //      cin>>option;
            //      int a, b, c;
            //      cout<<"ENTER THE TWO NUMBER\n";
            //      cin>>a>>b;

            //      switch(option) {
            //          case 1: c=a+b;
            //          break;
            //          case 2: c=a-b;
            //          break;
            //          case 3: c=a*b;
            //         //  cout<<"Result is  "<<c; 
            //          break;
            //          case 4: c=a/b;
            //          break;
            //          default : cout<<"out of menu\n";


            //         //  cout<<"Result is  "<<c; 
            //      }
            //      cout<<"Result is "<<c;


            //  }
//         int main() {
//             if(1){   

// cout<<"Yes";   
//             }
// else {   

// cout<<“No";}

//         }

// int main() {
//     int i =0;
//     for( ; ; ){
//         cout<<i<<"hello"<<endl; 
//         i++; 
//         if(i>10)
//         break;
//     }
// }


// int main() {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
    
//     for(int i =1; i<11; i++){
//         cout<<n<<"*"<<i<<"="<<i*n<<endl;    }

// }
 

// //  factorial of n 



// int main() {
//     int n, i, fact=1;
//     cout<<"enter the value of n ";
//     cin>>n;

//     for(i=1; i<=n; i++){
//         fact*=i;
//         // cout<<"Factorial of n is "<<fact;
//     }
//      cout<<"Factorial of n is "<<fact;
// }

// // "factor of n"   
// //  "if the sum of all the factors of a number is double the number the given number is perfact number"
// int main() {
//     int n, factor, rem, i;
//     cout<<"Print the value of n ";
//     cin>>n;
//     int sum=0;
  // for(i=1; i<=n;  )     
//     {
//         rem=n%i;
//         if(rem==0){
//             cout<<"factor is "<<i<<endl;
//             sum+=i;
//             // cout<<"sum is "<<sum<<endl;
//             i++;
//         }else{
//             i++;
//         }
//     }
//      cout<<"sum is "<<sum<<endl;
//      // cout<<"Factor of n is  "<<i<<endl;
//     }


// // factorial of n using while loop

// int main() {
//     int n, fact=1;
// cout<<"Find the value of n";
// cin>>n;
// int i=1;
// while(i<=n){
//   fact*=i;
//   cout<<fact<<endl;
//   i++;
//   }
// }
//  nmb