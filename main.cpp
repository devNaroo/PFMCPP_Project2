#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int 
 float 
 bool 
 double
 char 
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function


 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int line = 5;
    int row = 3;

    float distance = 1.5f;
    float width = 2.3f;
    float height = 3.5f;

    double speed = 2.7;
    double pi = 3.14;
    double multipleValue = 3.3;

    bool isUnlocked = false;
    bool isBroken = true;
    bool isUnknown = false;

    char a = 'a';
    char b = 'b';
    char c = 'c';
    
    unsigned int first = 1;
    unsigned int second = 2;
    unsigned int third = 3;
    
    ignoreUnused(number, line, row, distance, width, height, speed, pi, multipleValue, isUnlocked, isBroken, isUnknown, a, b, c, first, second, third); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addResult(int fisrtNum, int scecondeNum = 0)
{
    ignoreUnused(fisrtNum, scecondeNum);

    return {};
}

/*
 2)
 */
float getDistnace(float xPos, float yPos)
{
    ignoreUnused(xPos, yPos);

    return {};
}
/*
 3)
 */
int getRandomNumber(int startNum, int endNum)
{
    ignoreUnused(startNum, endNum);

    return {};
}

/*
 4)
 */
void controlVolume(double min, double max)
{
    ignoreUnused(min, max);
}

/*
 5)
 */
char getChar(char a, char b)
{
    ignoreUnused(a, b);
    return {};
}

/*
 6)
 */
double getWeight(double productA, double productB)
{
    ignoreUnused(productA, productB);

    return productA + productB;
}

/*
 7)
 */
void setName(std::string name)
{
    ignoreUnused(name);

    std::string realName = name;
}

/*
 8)
 */
std::string getProjceName(std::string name, int version)
{
    ignoreUnused(name, version);

    return name + "_" + std::to_string(version);
}

/*
 9)
 */
unsigned int getNoteNumber(unsigned int note = 0)
{
    ignoreUnused(note);
    return {};
}

/*
 10)
 */
float getLengthOfWavFile(std::string fileName)
{
    ignoreUnused(fileName);
    return {};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto result = addResult(5, 8);

    //2)
    auto distance = getDistnace(2.5f, 3.0f);

    //3)
    auto randomNumber = getRandomNumber(0, 100);

    //4)
    controlVolume(0.5, 8.0);

    //5)
    auto getCharacters = getChar('b', 'c');

    //6)
    auto weight = getWeight(80.5, 90);

    //7)
    setName("JUCE");

    //8)
    std::string pName = getProjceName("PFMCPP", 5);

    //9)
    unsigned int note = getNoteNumber(5);

    //10)
    float length = getLengthOfWavFile("song");
    
    ignoreUnused(carRented, result, distance, randomNumber, getCharacters, weight, pName, note, length);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
