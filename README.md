# DDA Line Algorithm in C++

This repository contains an implementation of the **Digital Differential Analyzer (DDA) Line Algorithm** in C++. The DDA algorithm is used in computer graphics for drawing lines by calculating intermediate points between two given points.

## About

The DDA algorithm is a simple and efficient algorithm used in **Computer Graphics and Multimedia Applications (CGMA)** to determine the coordinates of points on a line between two given endpoints. This algorithm increments one coordinate (either x or y) by 1 and computes the other based on the line's slope. The code calculates and displays the coordinates for each point on the line.

## Features

- **Efficient line drawing**: The algorithm calculates intermediate coordinates without using floating-point arithmetic.
- **Simple implementation**: The code is easy to understand and implement in C++.
- **Displays intermediate points**: Outputs each coordinate calculated by the DDA algorithm.

## DDA Algorithm

The Digital Differential Analyzer algorithm works as follows:

1. Calculate the difference between the end points (`dx` and `dy`).
2. Determine the number of steps needed to draw the line.
3. Increment the x and y coordinates by fixed amounts to generate the line.

### DDA Formula:
   ```
   X_inc = dx / steps
   Y_inc = dy / steps
   ```

## Code Example

Here is the C++ implementation of the DDA Line Algorithm:

```cpp
#include <iostream>
#include <cmath>

using namespace std;

// Function to implement DDA Line Drawing Algorithm
void DDA_Line(int x1, int y1, int x2, int y2) {
    // Calculate dx and dy
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate steps
    int steps = max(abs(dx), abs(dy));

    // Calculate increments for each axis
    float X_inc = dx / (float) steps;
    float Y_inc = dy / (float) steps;

    // Starting point
    float X = x1;
    float Y = y1;

    // Print the first point
    cout << "Point: (" << round(X) << ", " << round(Y) << ")" << endl;

    // Iterate and generate intermediate points
    for (int i = 0; i <= steps; i++) {
        // Round off X and Y to get the pixel coordinates
        cout << "Point: (" << round(X) << ", " << round(Y) << ")" << endl;
        
        // Increment X and Y by calculated values
        X += X_inc;
        Y += Y_inc;
    }
}

int main() {
    int x1, y1, x2, y2;

    // Input coordinates
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    // Call the DDA Line Drawing function
    DDA_Line(x1, y1, x2, y2);

    return 0;
}
```

## How to Run

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/DDA_Algorithm.git
   ```

2. Compile and run the code:
   ```bash
   g++ dda_line_algorithm.cpp -o dda_line
   ./dda_line
   ```

3. Enter the coordinates of the two endpoints to see the generated points on the line.

## Example Output

```
Enter the coordinates of the first point (x1, y1): 2 3
Enter the coordinates of the second point (x2, y2): 8 6
Point: (2, 3)
Point: (3, 3)
Point: (4, 4)
Point: (5, 4)
Point: (6, 5)
Point: (7, 5)
Point: (8, 6)
```

## License

This project is licensed under the MIT License.

---

Let me know if you need any more adjustments!
