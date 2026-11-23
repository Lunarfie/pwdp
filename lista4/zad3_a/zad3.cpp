#include <iostream>
#include <vector>
#include <fstream>


using namespace std;
int main() {
    ofstream plik("moj_obrazek_0.pgm");

    int length = 250;
    int height = 250;
    int max_color = 7;

    plik << "P3\n";
    plik << length << " " << height << "\n";
    plik << max_color << "\n";

    for(int y=0; y<height; ++y) {
        for(int x=0; x<length; ++x) {
            int r=0, g=0, b=0;

            if (x<100) {
                r=255;
            } else if (x<200) {
                g=255;
            } else{
                b=255;
            }

            plik << r <<" "<<g<<" "<<b<<" ";

        }
        plik <<"\n";
    }





}