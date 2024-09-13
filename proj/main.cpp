#include <iostream>
#include <fstream>
using namespace std;

void Zlicz(string s,int Ile[])
{
    for(int i=0;i<26;i++){
        Ile[i] = 0;
    }
        for(int i=0;i<s.size();i++){
        Ile[s[i]-'A']++;
    }
}
bool Anagramy(string s1,string s2)
{
    int Ile1[26],Ile2[26];
    if(s1.size() != s2.size())
            return false;
        Zlicz(s1,Ile1);
        Zlicz(s2,Ile2);
        for(int i=0; i<26; i++){
            if(Ile1[i] != Ile2[i])
                return false;
        }
        return true;
}
int main()
{
    string s1,s2;

//plik
    ifstream wejscie("jd.txt");
        wejscie>>s1;
        wejscie>>s2;
    wejscie.close();
    ofstream wyjscie("jd.txt");
        if(Anagramy(s1,s2))
            wyjscie<<"tak"<<endl;
        else
            wyjscie<<"nie"<<endl;


}
