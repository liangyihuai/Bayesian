#ifndef NAIVEBAYESIAN_H_
#define NAIVEBAYESIAN_H_

#include <vector>

#include "bayesian.h"

namespace baysian {

class naiveBayesian : public bayesian {
 public:
  void train(char *);
  void predict(char *);
  // calculate the probability of each choice
  // and choose the greatest one as our prediction
  naiveBayesian(char *);
  // initialize all the information we need from training data
  ~naiveBayesian();
  // release memory
 private:
  long double **probabilityTable;
};

}  // namespace baysian

#endif