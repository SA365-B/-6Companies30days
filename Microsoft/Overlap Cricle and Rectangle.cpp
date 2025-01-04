#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    
    int closestX = std::max(x1, std::min(xCenter, x2));
    int closestY = std::max(y1, std::min(yCenter, y2));
    
    
    int distanceSquared = (closestX - xCenter) * (closestX - xCenter) +
                          (closestY - yCenter) * (closestY - yCenter);
    
    
    return distanceSquared <= radius * radius;
}

int main() {
    
    cout << std::boolalpha << checkOverlap(5, 0, 0, -3, -3, 3, 3) <<endl; // Output: true

    
    cout << std::boolalpha << checkOverlap(1, 1, 1, 1, -3, 2, -1) <<endl; // Output: false

    return 0;
}
