#include "Zoo.h"
#include <iostream>
#include<string>
#include<math.h>

using namespace std;


Zoo::Zoo (int u, int a, int b) //Constructor
{
    xcordinate = a;
    ycordinate = b;
    totalNoOfAnimal=0;
    NoOfUniqueAnimal = u;
    animals [u];
    noOfAnimalsEach[u];
}


Zoo::~Zoo() //Destructor
{
    totalNoOfAnimal = NULL;
    NoOfUniqueAnimal = NULL;
}

void Zoo:: setValue(string s, int x, int index) //This function populates the zoo.
{
    animals [index]= s;
    noOfAnimalsEach[index]= x;
    totalNoOfAnimal+=x;
}

int Zoo::getAnimalIndex(string name)//This function returns the index for each animal in the array. '-1' indicates when animals are not found.
{
    int i=0;
    while (i< NoOfUniqueAnimal+1 && animals[i]!=name)
    {
        i++;
    }
    if (i<NoOfUniqueAnimal+1) return i;
    else return -1;
}

int Zoo:: getNoanimalExist(int index)//This function returns the number of animals exists for each unique animal in the 'animals' array by index.
{
    if(index>=0) return  noOfAnimalsEach[index];
    else cout<< "Does not exist!"<< endl;
}

int Zoo:: gettotalNoOfAnimal()//This function returns the total numbers of animals
{
    return totalNoOfAnimal;
}

float Zoo:: distance(int a,int b)//This function returns the distance between the zoo and the user.
{
    return sqrt(pow(xcordinate-a,2)+pow(ycordinate-b,2)*1.0);
}

void Zoo:: print()//This function will print the list of animals the zoo has with their respective quantity.
{
    int n=NoOfUniqueAnimal;
    for(int i=0; i<n; i++)
    {
        cout<<animals[i]<<" "<<noOfAnimalsEach[i]<<endl;
    }
}
int Zoo::quantityofanimals(int index)
{
    return noOfAnimalsEach[index] ;
}

Zoo Zoo::operator+(Zoo z)
{
    Zoo a(8,13,17);
    string st;
    int c=0;
    bool flag;
    for(int i=0; i<NoOfUniqueAnimal; i++)
    {
        a.setValue(animals[i],noOfAnimalsEach[i],i);
        c++;
    }
    for(int i=0; i<z.NoOfUniqueAnimal; i++)
    {
        flag=false;
        for(int j=0; j<NoOfUniqueAnimal; j++)
        {
            if(z.animals[i]==animals[j])
            {
                a.noOfAnimalsEach[j]= noOfAnimalsEach[j]+z.noOfAnimalsEach[i];
                flag=true;
            }
        }
        if(flag==false)
        {
            a.setValue(z.animals[i],z.noOfAnimalsEach[i],c);
            c++;
        }
    }

    return a;

}
