#include <iostream>
#include <string>

int main() 
{

  std::string answer = "";
  std::string answer2 = "";
  std::string answer3 = ""; 
  double input = 0; 

  do
  {
      std::cout << "What do you want to convert?" << std::endl;
      std::cout << "1. temp" << std::endl; 
      std::cout << "2. volume" << std::endl; 
      std::cout << "3. weight" << std::endl; 

      getline(std::cin, answer);

  } while(answer != "1" && answer != "2" &&
          answer != "3");
  

  if(answer == "1") //Temp converstion 
  {
      std::cout << "What do you want to convert from?" << std::endl;
      std::cout << "1. Kelvin" << std::endl; 
      std::cout << "2. Celcius" << std::endl; 
      std::cout << "3. Fahrenheit" << std::endl; 

      getline(std::cin, answer);

      std::cout << "What do you want to convert to? (Kelvin, Celcius, Fahrenheit)" << std::endl;

      std::cout << "1. Kelvin" << std::endl; 
      std::cout << "2. Celcius" << std::endl; 
      std::cout << "3. Fahrenheit" << std::endl;

      getline(std::cin, answer2); 

      std::cout << "Input value: " ;
      getline(std::cin, answer3); 
      std::cout << std::endl;

      input = stod(answer3); 

      std::cout << "Your output is: ";
      if(answer == "1" && answer2 == "2") //K to C
      {
        std::cout << input - 273.15 << std::endl;
      }
      else if(answer == "1" && answer2 == "3") //K to F 
      {
        std::cout << input * (9/5) - 459.67 << std::endl;
      }
      else if(answer == "2" && answer2 == "1") //C to K
      {
        std::cout << input + 273.15 << std::endl;
      }
      else if(answer == "2" && answer2 == "3") //C to F
      {
        std::cout << input * (9/5) + 32 << std::endl;
      }
      else if(answer == "3" && answer2 == "1") //F to K
      {
        std::cout << (input + 459.67) * (5/9) << std::endl;
      }
      else if(answer == "3" && answer2 == "2") //F to C
      {
        std::cout << (input - 32) * (5/9) << std::endl;
      }
      else  
        std::cout << "No change" << std::endl;
  }

  else if(answer == "2")
  {

  }

  else
  {
      std::cout << "What do you want to convert from?" << std::endl;
      std::cout << "1. Grams" << std::endl; 
      std::cout << "2. Stones" << std::endl; 
      std::cout << "3. Pounds" << std::endl; 

      getline(std::cin, answer);

      std::cout << "What do you want to convert to?" << std::endl;

      std::cout << "1. Grams" << std::endl; 
      std::cout << "2. Stones" << std::endl; 
      std::cout << "3. Pounds" << std::endl; 

      getline(std::cin, answer2); 

      std::cout << "Input value: " ;
      getline(std::cin, answer3); 
      std::cout << std::endl;

      input = stod(answer3); 

      std::cout << "Your output is: ";
      if(answer == "1" && answer2 == "2") //G to S
      {
        std::cout << input * 0.0001574729979 << std::endl;
      }
      else if(answer == "1" && answer2 == "3") //G to LBS 
      {
        std::cout << input / 453.59237 << std::endl;
      }
      else if(answer == "2" && answer2 == "1") //S to G
      {
        std::cout << input * 0.00015747304441777 << std::endl;
      }
      else if(answer == "2" && answer2 == "3") //S to LBS
      {
        std::cout << input * 14 << std::endl;
      }
      else if(answer == "3" && answer2 == "1") //LBS to G
      {
        std::cout << input * 453.59237 << std::endl;
      }
      else if(answer == "3" && answer2 == "2") //LBS to S
      {
        std::cout << input * 0.071429 << std::endl;
      }
      else  
        std::cout << "No change" << std::endl;
  }
}