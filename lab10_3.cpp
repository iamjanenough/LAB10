#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {
        float x = stof(textline);
        count++;
        sum += x;
        sum_of_square += x * x;
    }

    float mean = sum / count;
    float sd = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";

    return 0;
}
