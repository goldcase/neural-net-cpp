#include <vector>
#include <iostream>

using namespace std;

class Neuron {
};

typedef vector<Neuron> Layer;

class Net {
    public:
        Net(const vector<unsigned> &topology);
        void feed_forward(const vector<double> &input_vals);
        void back_prop(const vector<double> &target_vals);
        void get_results(vector<double> &result_vals) const;

    private:
        vector<Layer> m_layers; // 2-D Array. m_layers[layer_num][neuron_num]
};
