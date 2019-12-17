#include <array>
#include <iostream>
#include <string>
#include <fstream>



const int kMaxSize = 24 ;


int main() {
  // create an ojbect of type ifstream
  std::ifstream in;  // inputFileStream
  

  // open the file age.txt
  in.open("../age.txt");  //relative path from the executable

  if(in.fail())
  {
    std::cout << "Unable to open file age.txt. \nShutting down\n";
    return 1;
  }
  
  std::array<int, kMaxSize > ages;
  ages.fill(-1);
  int age_size = 0;
  // in >> ages[age_size];
  // age_size++;
  // in >> ages[age_size++];
  // in >> ages[age_size++];

  in.close(); // close input file

  // read from the age file and store values in an array


  // print out the values in the array
//for(auto age: ages)

  // read to the end of the file

  while (age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }
  // print out the valid values in the array
  //for(auto age: ages)

  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::ifstream infile;  // inputFileStream
  infile.open("../names.txt");

  if(infile.fail())
  {
    std::cout << "Unable to open file name.txt.\nShutting" << std::endl;
    return 1;
  }

  std::array < std::string, kMaxSize > names;
  names.fill("-");
  int name_size = 0;
  // read one name, store it in the array, and print it


  // read the rest of the names in the file
  while(name_size < kMaxSize && std::getline(infile, names[name_size]))
{
  name_size++;
}
  // print valid elements in the names array

  for(auto name : names)
  {
    name_size++;
  }
  // print all the elements in the names array

  infile.close();
  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  std::ifstream in_name_age("../name_age.txt");
  if(in_name_age.fail())
  {
    std::cout << "gf;l";
  }

  // reset age and name arrays
  ages.fill(-1);
  names.fill("-");
  int index = 0;

  // read all the values from the name_age.txt file
  while(index < kMaxSize && in_name_age >> ages[index])
  {
    //need to load next record or any extra characters?
    in_name_age.ignore();
    std::getline(in_name_age, names[index]);
    index++; //increment index
  }

  // print valid elements in the names and ages array
  for(int num=0; num<index; ++num)
  {
    std::cout << "Age: " << ages[num] << " for name: " <<
      names[num] << std::endl;
  }

  // print all elements in the names and ages array


  return 0;
}
