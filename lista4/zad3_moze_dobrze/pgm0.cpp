#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;
void wartoscnakolor(int wartosc, int max_color, int& r, int& g, int& b)
{
    r = wartosc;
    g = max_color - wartosc;
    b = (wartosc * 2) % (max_color + 1);

}

int main()
{
    const int length = 250;
    const int height = 250;
    const int max_color = 255;
    const double half_perimeter = (length - 1) + (height -1);
    const std::string filename = "moj_obrazek_0.ppm";

    std::ofstream out(filename);

    std::vector<std::vector<int>> pixels(height, vector<int>(length));
    pixels.resize(height);
    for (int i = 0; i < pixels.size(); i++)
    {
        pixels[i].resize(length);
    }

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < length; x++)
        {
            double normalized_value = double(x + y) / half_perimeter;
            pixels[y][x] = std::round(normalized_value * max_color);
        }
    }

    out << "P3\n";
    out << length << " " << height << "\n" << max_color << "\n";

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < length; x++)
        {
            int r, g, b;
            wartoscnakolor(pixels[y][x], max_color, r, g, b);
            out << r << " " << g << " " << b << " ";
        }
        out << "\n";
    }
}
