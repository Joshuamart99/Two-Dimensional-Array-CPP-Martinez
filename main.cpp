//Student Name:Joshua Martinez
//Teacher: Dr. Tyson McMillan
//Date: 11/08/2021
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;
/*
Research Input data: go to http://www.weather.com
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2 Replace City_One and City_Two with the names of your cities
//Data Table
//City X, Day X: Temp
City 1, Day 1: TEMP
City 1, Day 2: TEMP
City 1, Day 3: TEMP
City 1, Day 4: TEMP
City 1, Day 5: TEMP
City 1, Day 6: TEMP
City 1, Day 7: TEMP
City 2, Day 1: TEMP
City 2, Day 2: TEMP
City 2, Day 3: TEMP
City 2, Day 4: TEMP
City 2, Day 5: TEMP
City 2, Day 6: TEMP
City 2, Day 7: TEMP
*/
int main()
{
const int Madrid = 2;
const int London =3;
const int WEEK = 7;
int temperature[Madrid][WEEK];
int temperatures [London][WEEK];
//Note your input data from the above
cout << "Enter all temperature for a week of Madrid and then London.\n";
// Inserting the values into the temperature array
//note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
for (int i = 0; i < Madrid; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "Madrid " << i + 1 << ", Day " << j + 1 << " : ";
cin >> temperature[i][j];
}
for (int i = 0; i < Madrid; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "London " << i + 1 << ", Day " << j + 1 << " : ";
cin >> temperatures[i][j];
}
}
cout << "\n\nDisplaying Values:\n";
// Accessing the values from the temperature array
for (int i = 0; i < Madrid; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "Madrid " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
}
for (int i = 0; i < London; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "London " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
}
}
/*For up to 5 Points Extra Credit
Expand this program:
1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.
4. print the results of temperature[i][j]; to the screen.
*/
int cityMadrid[7];
int cityLondon[7];
cout << "Enter all temperature for a week of Madrid. \n";
// Inserting the values into the cityMadrid array
for(int i = 0; i < 7; ++i)
{
cout << "Madrid" << ", Day " << i + 1 << " : ";
cin>> cityMadrid[i];
}
cout << "Enter all temperature for a week of London. \n";
// Inserting the values into the cityLondon array
for(int i = 0; i < 7; ++i)
{
cout << "London" << ", Day " << i + 1 << " : ";
cin>> cityLondon[i];
}
//feed data from cityMadrid and cityLondon array to temperature 2d array
for(int i = 0; i < 7; ++i)
{
temperature[0][i]=cityMadrid[i];
temperature[1][i]=cityLondon[i];
}
cout << "\n\nDisplaying Values:\n";
// Accessing the values from the temperature array
for (int i = 0; i < Madrid; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "Madrid " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
}
for (int i = 0; i < London; ++i)
{
for(int j = 0; j < WEEK; ++j)
{
cout << "London " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
}
}
return 0;
}}}}