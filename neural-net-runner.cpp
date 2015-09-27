#include "neural-net.cpp"
#include <vector>

using namespace std;

int main() {
    vector<unsigned> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(1);
    Net my_net(topology);

    vector<double> input_vals;
    my_net.feed_forward(input_vals);
    vector<double> target_vals;
    my_net.back_prop(target_vals);
    vector<double> result_vals;
    my_net.get_results(result_vals);

    return 0;
}
