#include "foo.h"

Eigen::Matrix<double, 2, 3> getMatrix() {
    return Eigen::Matrix<double, 2, 3> {
        {1, 2, 3},
        {4, 5, 6}
    };
}
