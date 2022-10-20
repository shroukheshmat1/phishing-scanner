#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
int main()
{
   map <string,int> list_of_words{{"amazon",0}, {"official",0}, {"bank",0}, {"security",0},
                                  {"urgent",0},{"alert",0},{"important",0},{"information",0},{"ebay",0},{"password",0}
           ,{"credit",0},{"verify",0},{"confirm",0},{"account",0},{"bill",0},{"immediately",0},
                                  {"address",0},{"telephone",0},{"ssn",0},{"charity",0},{"check",0},{"secure",0},
                                  {"personal",0},{"confidential",0},{"atm",0},{"warning",0},{"fraud",0},{"citibank",0}
           ,{"irs",0},{"paypal",0}};
   map<string,int> dangerous_word;
   int ctr=0;
   fstream dataFile;
   char realfile[81],word[12];
   cout << "Enter the name of a file: ";
   cin.getline(realfile, 81);
   dataFile.open(realfile, ios::in);
   if (dataFile.fail())
   {
       cout << "Error opening file.\n";
   }
   else
       cout << "File " << realfile << " is opened.\n";
   while (!dataFile.eof())
   {
       dataFile >> word;
       for (int i=0;i<12;i++)
       {
           if (word[i]==',' || word[i]=='.')
               continue;
           else
               word[i] = tolower(word[i]);
       }
       if (list_of_words.count(word)==1)
       {
           list_of_words[word]++;
           dangerous_word[word]=list_of_words[word];
       }
       else
           continue;
   }
   dataFile.close();
   for (auto element:dangerous_word)
       cout<<"the word: "<<element.first<<" was repeated in your file "<<element.second<<" times"<<endl;
   int total_points=0;
   for (auto element:dangerous_word)
   {
       total_points+=element.second;
   }
   cout<<"total points: "<<total_points<<endl;
   if (total_points>=20)
       cout<<"this may be phishing";
   else if (total_points>=10)
       cout<<"moderate phishing,take care";
   else
       cout<<"nearly no phishing,safe";
   return 0;
}
