#include <include/matlab_bgl.h>
#include <algorithm>
#include <iostream>

int main(int argc, char **argv) {
    mbglIndex rp[] = {0, 3, 7, 11, 15, 19, 22, 26, 31, 36, 41, 46, 50, 54, 59, 64, 69, 74, 78, 82, 87, 92, 97, 102, 106, 109, 113, 117, 121, 125, 128};
    mbglIndex ci[] = {0, 1, 6, 0, 1, 2, 7, 1, 2, 3, 8, 2, 3, 4, 9, 3, 4, 5, 10, 4, 5, 11, 0, 6, 7, 12, 1, 6, 7, 8, 13, 2, 7, 8, 9, 14, 3, 8, 9, 10, 15, 4, 9, 10, 11, 16, 5, 10, 11, 17, 6, 12, 13, 18, 7, 12, 13, 14, 19, 8, 13, 14, 15, 20, 9, 14, 15, 16, 21, 10, 15, 16, 17, 22, 11, 16, 17, 23, 12, 18, 19, 24, 13, 18, 19, 20, 25, 14, 19, 20, 21, 26, 15, 20, 21, 22, 27, 16, 21, 22, 23, 28, 17, 22, 23, 29, 18, 24, 25, 19, 24, 25, 26, 20, 25, 26, 27, 21, 26, 27, 28, 22, 27, 28, 29, 23, 28, 29};
    double positions[60];

    fruchterman_reingold_force_directed_layout(
		30, ci, rp,
		100, 1,
        50.0, 50.0, 0, positions);    
    for (int i = 0; i < 30; i++) {
        std::cout << positions[i] << " " << positions[i+30] << std::endl;
    }       
}
