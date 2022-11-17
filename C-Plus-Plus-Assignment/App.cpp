int main() {
    // create a Statistician object named s1 using its one-arg 
    // constructor giving it an argument of 3.5
     Statisitician statistician1;

    // declare local variables that will be used when calling 
    // s1's getter method
    double lowest;
    double highest;
    double sum;
    
    // call method on s1 that will display it to stdout
    statistician1.Statisitician::compute();
    cout << "Statistician 1 : ";
    statistician1.printStatistician();

    // call method on s1 that will add 5.2 to it
    statistician1.computeHighest(5.2);
   
    // call method on s1 that will display it to stdout
    statistician1.Statisitician::computeHighest();
    cout << "Highest : " << highest << endl;
    statistician1.printStatistician();

    // call method on s1 that will add -7.8 to it
     statistician1.computeLowest(-7.8);

    // call method on s1 that will display it to stdout
     statistician1.Statisitician::computeLowest();
    cout << "Lowest: " << lowest << endl;
    statistician1.printStatistician();

    // call method on s1 that will get its field values
    // and store them in local variables
    statistician1.Statisitician::addNumber();

    // display values in local variables to stdout
    statistician1.Statisitician::compute();
    cout << "Lowest : " << lowest << "Highest : " << highest << endl;
    statistician1.printStatistician();


    // create a Statistician object named s2 using its no-arg
    // constructor
    Statisitician statistician2;

    // call method on s2 that will display it to stdout
    cout << "Statistician 2 : ";
    statistician2.printStatistician();

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
     (statistician2.equalStatistician(statistician1) ? "true" : "false") << endl;

    // call method on s2 that will add the double numbers to it 
    // that will cause it to be equal to s1
    

    // call method on s1 that will test if it is equal to s2
    // and display its return to stdout as false or true
    (statistician1.equalStatistician(statistician2) ? "true" : "false") << endl;
   
}