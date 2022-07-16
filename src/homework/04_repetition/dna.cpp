//add include statements
#include "dna.h"

using std::string;


//add function(s) code here
double get_gc_content(const string& dna)
{
    double gc = 0;
    int dna_size = dna.size();


    for(int i = 0; i < dna_size; i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        { 
            gc++;
        }
    }
    double gcContent = gc / dna_size;
    return gcContent;
}

string reverse_string(string dna)
{
   string reverseDNA = "";
   for (int i = dna.size() - 1; i >= 0; i--)
       reverseDNA += dna[i];
   return reverseDNA;
}

string get_dna_complement(string dna)
{
    string comp = reverse_string(dna);
    string complementDNA = "";

    for (int i = 0; i < comp.size(); i++) 
    {
        if (comp[i] == 'A') 
        {
            complementDNA +='T';
        }
        else if(comp[i] == 'T') 
        {
            complementDNA += 'A';
        }
        else if(comp[i] == 'G') 
        {
            complementDNA += 'C';
        }
        else if(comp[i] == 'C') 
        {
            complementDNA += 'G';
        }
    }
    return complementDNA;
}