#include<iostream>
#include<vector>
using namespace std;
string get_words(const string& word)
{
    if(word.length()>10)
    {
        return word[0] + to_string(word.length()-2) + word[word.length()-1];
    }
    else{
        return word;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<string> words(n);
    for (int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    vector<string> abbreviations;
    for(string& word: words)
    {
        string abbreviation= get_words(word);
        abbreviations.push_back(abbreviation);

    }
    for(string& abbreviation : abbreviations)
    {
        cout<<abbreviation<<endl;
    }
    return 0;

}
