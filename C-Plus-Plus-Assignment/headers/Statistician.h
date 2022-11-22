// the Statistician class may have double numbers added to it 
// and it will obtain information about the double numbers like
// the lowest number, the highest number, and the sum of the
// numbers.
#include <iostream>
#include <iomanip>
#include "Computation.h"

// C++ standard library namespace was needed too:
using namespace std;

class Statistician : Computation
{
    private:
        // field used to store the current double number
        // added to this Statistician
        double num;
        // field used to store the lowest number added
        // to this Statistician
        double lowest;
        // field used to store the highest number added
        // to this Statistician
        double highest;
        // field used to store the sum of the numbers added 
        // to this Statistician
        double sum;
    public:
        // This constructor sets all fields to zero.
        Statistician();
        // This constructor sets all fields to the specified
        // double number. 
        Statistician(double);
        // This method returns the lowest, highest, and sum fields 
        // by assigning their values to the specified lowest, highest, and sum.
        void getStatistician(double&, double&, double&) const;
        // This method sets the num field to the specified double number
        // and then calls the methods that compute the lowest, highest,
        // and sum of the numbers added to this Statistician.
        void addNumber(double);
        // This method computes the lowest double number added to this
        // Stastician.
        void computeLowest() override;
        // This method computes the highest double number added to this
        // Stastician.
        void computeHighest() override;
        // This method computes the sum of the double numbers added to 
        // this Stastician.
        void computeSum() override;
        // This method displays the lowest, highest, and sum fields to
        // stdout formatted as lowest=N.NN, highest=N.NN sum=N.NN.
        void printStatistician() const;
        // This method returns true if this Stastician is equal to
        // the specified otherStatistician, else it returns false
        bool equalStatistician(const Statistician&) const;
};

Statistician::Statistician()
// This constructor sets all fields to zero.
{
   num = 0;
   lowest = 0;
   highest = 0;
   sum = 0;
}

Statistician::Statistician(double num)
// This constructor sets all fields to the specified
// double number. 
{
    this->num = num;
    this->lowest = num;
    this->highest = num;
    this->sum = num;
}

void Statistician::getStatistician(double& lowest, double& highest, double& sum) const
// This method returns the lowest, highest, and sum fields 
// by assigning their values to the specified lowest, highest, and sum.
{
    lowest = this->lowest;
    highest = this->highest;
    sum = this->sum;
}

void Statistician::addNumber(double num)
// This method sets the num field to the specified double number
// and then calls the methods that compute the lowest, highest,
// and sum of the numbers added to this Statistician.
{
    this->num = num;
    computeHighest();
    computeLowest();
    computeSum();
}

void Statistician::computeLowest()
// This method computes the lowest double number added to this
// Stastician.
{
    if (num < lowest) {
    lowest = num;
    }
}



void Statistician::computeHighest()
// This method computes the highest double number added to this
// Stastician.
{
    if (num > highest) {
    highest = num;
    }
}

void Statistician::computeSum()
// This method computes the sum of the double numbers added to 
// this Stastician.
{
    sum += num;
}

void Statistician::printStatistician() const
// This method displays the lowest, highest, and sum fields to
// stdout formatted as lowest=N.NN, highest=N.NN sum=N.NN.
{
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "lowest=" << lowest << ", highest=" << highest << ", sum=" << sum << endl;
}

bool Statistician::equalStatistician(const Statistician& other) const
// This method returns true if this Stastician is equal to
// the specified otherStatistician, else it returns false
{
    return (lowest == other.lowest &&
        highest == other.highest &&
        sum == other.sum);
}