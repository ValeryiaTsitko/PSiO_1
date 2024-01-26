#include <vector>
#include <iostream>

using namespace std;

void min_max(const vector<double>& values, double& min, double& max)
{

    min = values[0];
    max = values[0];

    for (size_t i = 0; i < values.size(); i++) {
        if (values[i] < min) {
            min = values[i];
        }
        if (values[i] > max) {
            max = values[i];
        }
    }
}


int main()
{
    vector<double> values = {-1.0, 100, 3.14, -999.9, 21.37};
    double min, max;

    min_max(values, min, max);

    cout << "Minimum wynosi: " << min << endl;
    cout << "Maksimum wynosi: " << max << endl;

    return 0;
}
