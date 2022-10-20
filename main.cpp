//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//vector<string> split(string target, string delimiter)
//{
//    vector<string>v;
//    int sz=delimiter.length();
//    char char_array[sz + 1];
//    string str;
//    strcpy(char_array, delimiter.c_str());
//    for (int i=0;i<target.size();i++)
//    {
//        for (int j=0;j<sz;j++)
//        {
//            if (target[i]==char_array[j])
//            {
//                for (int j=0;j<i;j++)
//                {
//
//                    str.push_back(target[j]);
//                }
//            }
//        }
//    }
//
//}





//#include <iostream>
//#include <fstream>
//#include <map>
//#include <string>
//using namespace std;
//int main()
//{
//    map <string,int> list_of_words{{"amazon",0}, {"official",0}, {"bank",0}, {"security",0},
//                                   {"urgent",0},{"alert",0},{"important",0},{"information",0},{"ebay",0},{"password",0}
//            ,{"credit",0},{"verify",0},{"confirm",0},{"account",0},{"bill",0},{"immediately",0},
//                                   {"address",0},{"telephone",0},{"ssn",0},{"charity",0},{"check",0},{"secure",0},
//                                   {"personal",0},{"confidential",0},{"atm",0},{"warning",0},{"fraud",0},{"citibank",0}
//            ,{"irs",0},{"paypal",0}};
//    map<string,int> dangerous_word;
//    int ctr=0;
//    fstream dataFile;
//    char realfile[81],word[12];
//    cout << "Enter the name of a file: ";
//    cin.getline(realfile, 81);
//    dataFile.open(realfile, ios::in);
//    if (dataFile.fail())
//    {
//        cout << "Error opening file.\n";
//    }
//    else
//        cout << "File " << realfile << " is opened.\n";
//    while (!dataFile.eof())
//    {
//        dataFile >> word;
//        for (int i=0;i<12;i++)
//        {
//            if (word[i]==',' || word[i]=='.')
//                continue;
//            else
//                word[i] = tolower(word[i]);
//        }
//        if (list_of_words.count(word)==1)
//        {
//            list_of_words[word]++;
//            dangerous_word[word]=list_of_words[word];
//        }
//        else
//            continue;
//    }
//    dataFile.close();
//    for (auto element:dangerous_word)
//        cout<<"the word: "<<element.first<<" was repeated in your file "<<element.second<<" times"<<endl;
//    int total_points=0;
//    for (auto element:dangerous_word)
//    {
//        total_points+=element.second;
//    }
//    cout<<"total points: "<<total_points<<endl;
//    if (total_points>=20)
//        cout<<"this may be phishing";
//    else if (total_points>=10)
//        cout<<"moderate phishing,take care";
//    else
//        cout<<"nearly no phishing,safe";
//    return 0;
//}











//#include <iostream>
//#include <string>
//using namespace std;
//class BigDecimalInt
//{
//private:
//    string num1;
//    int size();
//    int sign();
//public:
//    BigDecimalInt (string firstnum)
//    {
//        num1=firstnum;
//    }
//
////    BigDecimalInt operator- (BigDecimalInt anotherDec);
////    {
////        if (num1[0]!='-' && anotherDec.num1[0]!='-')
////        {
////            if (num1[0]!='-' && anotherDec.num1[0]!='-')
////            {
////                if (num1.size()==anotherDec.size())
////                {
////                    if (num1>anotherDec.num1)
////                    {
////
////                    }
////                }
////            }
////        }
////    }
//
//
//
//    bool operator< (BigDecimalInt anotherDec)
//    {
//        if (num1[0]!='-' && anotherDec.num1[0]!='-')
//        {
//            if (num1.size()==anotherDec.num1.size())
//            {
//                for (int i=0;i<num1.size();i++)
//                {
//                    if (int(num1[i])<int(anotherDec.num1[i]))
//                    {
//                        return true;
//                    }
//                    else if (int(num1[i])>int(anotherDec.num1[i]))
//                    {
//                        return false;
//                    }
//                }
//            }
//            else if (num1.size()>anotherDec.num1.size())
//            {
//                return false;
//            }
//            else if (num1.size()<anotherDec.num1.size())
//            {
//                return true;
//            }
//        }
//        else if (num1[0]!='-' && anotherDec.num1[0]=='-')
//        {
//            return false;
//        }
//        else if (num1[0]=='-' && anotherDec.num1[0]!='-')
//        {
//            return true;
//        }
//        else if (num1[0]=='-' && anotherDec.num1[0]=='-')
//        {
//            if (num1.size()==anotherDec.num1.size())
//            {
//                for (int i=0;i<num1.size();i++)
//                {
//                    if (int(num1[i])>int(anotherDec.num1[i]))
//                    {
//                        return true;
//                    }
//                    else if (int(num1[i])<int(anotherDec.num1[i]))
//                    {
//                        return false;
//                    }
//                }
//            }
//            else if (num1.size()>anotherDec.num1.size())
//            {
//                return true;
//            }
//            else if (num1.size()<anotherDec.num1.size())
//            {
//                return false;
//            }
//        }
//    };
//
//
//
//
//    bool operator> (BigDecimalInt anotherDec)
//    {
//        if (num1[0]!='-' && anotherDec.num1[0]!='-')
//        {
//            if (num1.size()==anotherDec.num1.size())
//            {
//                for (int i=0;i<num1.size();i++)
//                {
//                    if (int(num1[i])>int(anotherDec.num1[i]))
//                    {
//                        return true;
//                    }
//                    else if (int(num1[i])<int(anotherDec.num1[i]))
//                    {
//                        return false;
//                    }
//                }
//            }
//            else if (num1.size()>anotherDec.num1.size())
//            {
//                return true;
//            }
//            else if (num1.size()<anotherDec.num1.size())
//            {
//                return false;
//            }
//        }
//        else if (num1[0]!='-' && anotherDec.num1[0]=='-')
//        {
//            return true;
//        }
//        else if (num1[0]=='-' && anotherDec.num1[0]!='-')
//        {
//            return false;
//        }
//        else if (num1[0]=='-' && anotherDec.num1[0]=='-')
//        {
//            if (num1.size()==anotherDec.num1.size())
//            {
//                for (int i=0;i<num1.size();i++)
//                {
//                    if (int(num1[i])>int(anotherDec.num1[i]))
//                    {
//                        return false;
//                    }
//                    else if (int(num1[i])<int(anotherDec.num1[i]))
//                    {
//                        return true;
//                    }
//                }
//            }
//            else if (num1.size()>anotherDec.num1.size())
//            {
//                return false;
//            }
//            else if (num1.size()<anotherDec.num1.size())
//            {
//                return true;
//            }
//        }
//    };
//
//
//
//    bool operator==(BigDecimalInt anotherDec)
//    {
//        if (num1.size()==anotherDec.num1.size())
//        {
//            for (int i=0;i<num1.size();i++)
//            {
//                if (int(num1[i])!=int(anotherDec.num1[i]))
//                {
//                    return false;
//                }
//                else if (int(num1[i])==int(anotherDec.num1[i]))
//                {
//                    if (i==num1.size()-1)
//                        return true;
//                }
//            }
//        }
//        else
//            return false;
//    };
//
//
//    BigDecimalInt& operator= (const BigDecimalInt& anotherDec)
//    {
//        num1=anotherDec.num1;
//        return *this;
//    };
//    int SZ()
//    {
//        if (num1[0]=='-')
//            return num1.size()-1;
//        else
//            return num1.size();
//    };
//    int SIGN()
//    {
//        if (int(num1[0])=='-')
//            return 0;
//        else
//            return 1;
//
//    };
//    friend ostream& operator << (ostream& out, BigDecimalInt b);
//};
//ostream& operator << (ostream& out, BigDecimalInt b)
//{
//    out<<b.num1<<endl;
//    return out;
//};
//int main()
//{
//    string no1,no2,my_signed_num,size_numbe,no11,no22;
//
//    cout<<"please enter the 2 numbers you want operate on them the less than operation"<<endl;
//    cin>>no11>>no22;
//    BigDecimalInt number11(no1);
//    BigDecimalInt mynumm(no2);
//    bool anss = number11<mynumm;
//    if (anss==1)
//        cout<<no1<<" is less than "<<no2<<endl;
//    else if (anss==0)
//        cout<<no2<<" is less than "<<no1<<endl;
//
//
//    cout<<"please enter the 2 numbers you want operate on them the greater than operation"<<endl;
//    cin>>no1>>no2;
//    BigDecimalInt number1(no1);
//    BigDecimalInt mynum(no2);
//    bool ans = number1>mynum;
//    if (ans==1)
//        cout<<no1<<" is greater than "<<no2<<endl;
//    else if (ans==0)
//        cout<<no2<<" is greater than "<<no1<<endl;
//
//
//    bool equality= no1==no2;
//    if (ans==1)
//        cout<<no1<<" is equal to "<<no2<<endl;
//    else if (ans==0)
//        cout<<no1<<" isn't equal to "<<no2<<endl;
//
//
//    cout<<"please enter the number you want to know its size"<<endl;
//    cin>>size_number;
//    int mysz=number1.SZ();
//    cout<<mysz;
//
//    cout<<"please enter the number you want to know its sign"<<endl;
//    cin>>my_signed_num;
//    int mysign=number1.SIGN();
//    if (mysign==1)
//        cout<<'+'<<endl;
//    else
//        cout<<'-'<<endl;
//
//}









#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct dominoT
{
    int leftDots;
    int rightDots;
};
vector<dominoT>ans;
map <dominoT,bool> decision_of_taking;
bool FormsDominoChain(vector<dominoT> & dominos)
{
    if (ans.size()==dominos.size())
    {
        return true;
    }
    for (int i=0;i<dominos.size();i++)
    {
        if (ans.empty())
        {
            ans.push_back(dominos[i]);
            decision_of_taking[dominos[i]]=true;
        }
        else
        {
            if (dominos[i].leftDots == ans[i-1].rightDots)
            {
                if (!decision_of_taking[dominos[i]])
                {
                    ans.push_back(dominos[i]);
                    decision_of_taking[dominos[i]]=true;
                    FormsDominoChain(dominos);
                    ans.pop_back();
                    decision_of_taking[dominos[i]]=false;
                }

            }
        }
    }
}
int main()
{
    int number_of_pieces;
    cout<<"how much domino pieces you'll enter?"<<endl;
    cin>>number_of_pieces;
    dominoT mydomino;
    vector<dominoT>dominoSet;
    for (int i=0;i<number_of_pieces;i++)
    {
        cout<<"please enter the number of dots of your "<<i+1<<" piece from left to right"<<endl;
        cin>>mydomino.leftDots>>mydomino.rightDots;
        dominoSet.push_back(mydomino);
    }
//    for (int i=0;i<number_of_pieces;i++)
//    {
//        cout<<dominoSet[i].leftDots<<" "<<dominoSet[i].rightDots<<endl;
//    }
}




















//vector<string> split(string target, string delimiter)
//{
//    vector<string> v;
//    for (int i=0;i<target.size();i++)
//    {
//        for (int j=0;j<delimiter.size();j++)
//        {
//            if (delimiter.size()==1)
//            {
//                while (target[i]==delimiter[j])
//                    continue;
//                if (target[i]!=delimiter[j])
//                {
//
//                }
//            }
//            else if (delimiter.size()>1)
//            {
//                while (target[i]==delimiter[j])
//                {
//                    i++;
//                    continue;
//                }
//                if (target[i]!=delimiter[j])
//                {
//                    string str;
//                    str=target[i];
//                    v.push_back(str);
//                    i++;
//                }
//            }
//        }
//    }
//    return v;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main() {
//    vector<string> myVector;
//    string userInput = "";
//
//    cout << "Enter some words for the vector: ";
//    while (cin >> userInput) {
//        myVector.push_back(userInput);
//
//        for (int i = 0; i < myVector.size(); i++) {
//            cout << myVector.at(i) + " " << endl;
//        }
//    }
//
//    system("pause");
//
//    return 0;
//
//}







//vector<string> split(string target, string delimiter)
//{
//    vector<string> v;
//    while (target.length()!=0)
//    {
//        int i=0;
//        string find_del=target.substr(target.find(delimiter),delimiter.size()-1);
//        string find_before_del=target.substr(0,target.find(delimiter));
//        v.push_back(find_before_del);
//        target.erase(0,target.find(delimiter)+delimiter.size());
//    }
//    for (int i=0;i<v.size();i++)
//    {
//        if (i!=0)
//            cout<<" , ";
//        cout<<'"'<<v[i]<<'"';
//    }
//
//}
//int main()
//{
//    vector<string>vec;
//    string str,del;
//    cout<<"please enter your string: "<<endl;
//    getline(cin,str);
//    cout<<"please enter your delimiter: "<<endl;
//    getline(cin,del);
//    split(str,  del);
//    return 0;
//}










