#include "neural-net.cpp"
#include <vector>

using namespace std;

int main() {
    Net my_net(topology);

    vector<double> input_vals;

    my_net.feed_forward(input_vals);
    my_net.back_prop(target_vals);
    my_net.get_results(result_vals);

    return 0;
}
