#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    //Variables
    srand(time(0));
    int nbLaunch(1000000); //Min = 100
    vector<int> nb1;
    vector<int> nb2;
    vector<int> nb3;
    vector<int> nb4;
    vector<int> nb5;
    vector<int> nb6;
    float proba1(0.0f);
    float proba2(0.0f);
    float proba3(0.0f);
    float proba4(0.0f);
    float proba5(0.0f);
    float proba6(0.0f);

    cout << "Choose a number of launching(100,1000... min = 100) : ";
    cin >> nbLaunch;
    cout << endl;

    //Loop for the die roll (with the variable "nbLaunch")
    for(int i(0); i < nbLaunch; i++)
    {
        int randomNumber = rand() % 6;
        if(randomNumber == 0)
            nb1.push_back(randomNumber);
        else if(randomNumber == 1)
            nb2.push_back(randomNumber);
        else if(randomNumber == 2)
            nb3.push_back(randomNumber);
        else if(randomNumber == 3)
            nb4.push_back(randomNumber);
        else if(randomNumber == 4)
            nb5.push_back(randomNumber);
        else if(randomNumber == 5)
            nb6.push_back(randomNumber);
    }

    //Loops for count the apparitions of the numbers
    for(int y = 0; y < nb1.size(); y++)
    {
        proba1++;
    }

    for(int a = 0; a < nb2.size(); a++)
    {
        proba2++;
    }

    for(int b = 0; b < nb3.size(); b++)
    {
        proba3++;
    }

    for(int c = 0; c < nb4.size(); c++)
    {
        proba4++;
    }

    for(int d = 0; d < nb5.size(); d++)
    {
        proba5++;
    }

    for(int e = 0; e < nb6.size();e++)
    {
        proba6++;
    }

//Viewing the probability of each number of a die
    cout << "Calculating the probability of taking a number by rolling a die." << endl << "Number of launches : " << nbLaunch << endl;
    cout << endl << "Probability to have 1 : " << proba1/(nbLaunch/100) << "%" << endl;
    cout << "Probability to have 2 : " << proba2/(nbLaunch/100) << "%" << endl;
    cout << "Probability to have 3 : " << proba3/(nbLaunch/100) << "%" << endl;
    cout << "Probability to have 4 : " << proba4/(nbLaunch/100) << "%" << endl;
    cout << "Probability to have 5 : " << proba5/(nbLaunch/100) << "%" << endl;
    cout << "Probability to have 6 : " << proba6/(nbLaunch/100) << "%" << endl;

    return 0;
}
