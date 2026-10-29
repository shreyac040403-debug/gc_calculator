#include < iostream>
#include<iomanip>
#include
using namespace std;
int main() {
string seq
= "ATGCGATCGATCGATCGAATTCG" ;
int gc_count = 0;
for (char base :
 seq) {
if (base 'G' || base == 'C' ) {
gc_count++
}
if (base != 'A' && base != 'T' && base != 'G' && base != 'C') { 
} 
cout << "Warning: Non-canonical DNA character detected: " << base << endl; 
}
double gc_percentage (static_cast<double>(gc_count) / seq. length()) * lee. ;
cout "Sequence:
" seq endl;
cout << fixed << setprecision(2);
cout "GC Content .
" gc_percentage "%" endl;
cout "Total Sequence Length: " << seq.length() << " bp" << endl;
return = 0;
}
