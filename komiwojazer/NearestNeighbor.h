#ifndef __NEAREST_NEIGHBOR_H_
#define __NEAREST_NEIGHBOR_H_

#include "CanvasserAlgorithm.h"
#include <chrono>

using namespace std;
using ns = chrono::seconds;
using get_time = chrono::steady_clock;

class NearestNeighbor : public CanvasserAlgorithm {
private:
    const string algorithmName = ("Nearest neigbour");
    
    double countDistance();
public:
    NearestNeighbor() : CanvasserAlgorithm() {}
    virtual double findShortestPath() override;
    virtual string getAlgorithmName() override;
    virtual ~NearestNeighbor() {}
};

inline string NearestNeighbor::getAlgorithmName() {
    return algorithmName;
}

#endif