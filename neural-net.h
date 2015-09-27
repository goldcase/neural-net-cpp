#include <vector>

using namespace std;

class Net {
    public:
        Net();
        void feed_forward(const vector<double> &input_vals);
        void back_prop();
        void get_results() const;

    private:
};
