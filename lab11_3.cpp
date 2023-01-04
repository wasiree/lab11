#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int N = 0;
    double sum = 0,sum2 = 0,M;
    float S;
    string score;
    
    ifstream x;
    x.open("score.txt");
    while (getline(x,score)){
     sum += atof(score.c_str());
     sum2 += pow(atof(score.c_str()),2);
     N++;
     }
     M=sum/N;
     S = sqrt((sum2/N)-pow(M,2));
     x.close();
     
    cout << "Number of data = " << N << '\n';
    cout << setprecision(3);
    cout << "Mean = " << M << '\n';
    cout << "Standard deviation = " << S << '\n';
}