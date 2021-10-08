#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double myWeight;
    double myHeight;
    double myBMI;
    bool testing = true;
    string result;

    while (testing)
    {
        myBMI = round(myWeight / (myHeight * myHeight) * 10) / 10.0;
        
        cout << "Input Weight(kg): "; cin >> myWeight;
        cout << "Input Height(m): "; cin >> myHeight;
        if (myWeight < 20 or myWeight > 200)//didn't meet the requirement
        {
            cout << "#Invalid Weight(>= 20kg and <= 200kg)" << endl;
            cout << endl;
        }
        else if (myHeight < 0.9 or myHeight > 2.5) //didn't meet the requirement
        {
            cout << "#Invalid Height(>= 0.9m and <= 2.5m)" << endl;
            cout << endl;
        }
        else //met the requirement
        {   
            testing = false;
        }
    }
    if (myBMI < 10)
        cout << "# Either weight or height might be wrongly given(Step4)." << endl;
    else if (myBMI >= 10 and myBMI <= 15)
        result = "Highly severely underweight";
    else if (myBMI > 15 and myBMI <= 16)
        result = "Severely underweight";
    else if (myBMI > 16 and myBMI < 18.5)
        result = "Underweight";
    else if (myBMI >= 18.5 and myBMI <= 25)
        result = "Normal" ;
    else if (myBMI > 25 and myBMI <= 40)
        result = "Overweight";
    else if (myBMI > 40 and myBMI <= 50)
        result = "Obese";
    else if (myBMI > 50 and myBMI <= 60)
        result = "Severely obese";
    else if (myBMI > 60 and myBMI <= 70)
        result = "Highly severely obese";
    else
        cout << "# Either weight or height might be wrongly given. (Step4)" << endl;

    cout << "# Your Weight(kg): " << myWeight << endl;
    cout << "# Your Height(m): " << myHeight << endl;
    cout << "# Your BMI: " << myBMI << endl;
    cout << "# Your BMI level is " << result << endl;
    return 0;
}