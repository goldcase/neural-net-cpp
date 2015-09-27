#include "neural-net.h"

Net::Net(const vector<unsigned> &topology) {
    unsigned num_layers = topology.size();
    for (unsigned layer_num = 0; layer_num < num_layers; ++layer_num) {
        m_layers.push_back(Layer());

        // Fill the layer with i neurons, add a bias neuron.
        for (unsigned neuron_num = 0; neuron_num <=  topology[layer_num]; ++neuron_num) {
            m_layers.back().push_back(Neuron());
            cout << "Made a neuron" << endl;
        }
    }
}

void Net::feed_forward(const vector<double> &input_vals) {
}

void Net::back_prop(const vector<double> &target_vals) {
}

void Net::get_results(vector<double> &result_vals) const {

}
