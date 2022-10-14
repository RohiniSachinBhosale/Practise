#include <iostream>
#include <iomanip>
#include <limits>


using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
        int no1=12;
        double no2=4.03;
        string str="is the best place to learn and practice coding! ";
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    int isum=0;
        isum = i+no1;
        cout<<isum<<endl;
    
    
    // Print the sum of the double variables on a new line.
        double fsum=0.0f;
            fsum=d+no2;
            printf("%.1f",fsum);
            cout<<endl;
           //std::cout<<setprecision(2)<<fsum<<endl;
           // cout<<setpresion(2)fsum<<endl;
            
    // Concatenate and print the String variables on a new line
        string  csum;
    
        csum=s+str;
        cout<<csum<<endl;
    
    // The 's' variable above should be printed first.

    return 0;
}