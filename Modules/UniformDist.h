//
// Created by mehdi on 26/11/20.
//

#ifndef PROJECT_MONTE_CARLO_UNIFORMDIST_H
#define PROJECT_MONTE_CARLO_UNIFORMDIST_H

#include "AbstractVariable.h"

class UniformDist : public AbstractVariable{
public:
    UniformDist();
    UniformDist(const int N);
    UniformDist(const int N,const int a, const int b);
    virtual std::vector<double> get_vector()  const{ return uniformSamples;}
    virtual double get_mean() const{ return mean;};
    virtual double get_var() const{ return var;};
    virtual int get_size() const{return uniformSamples.size(); }
    virtual int get_initial_size() const { return initial_sample_size; }
    //virtual void getMoreSamples(const int multiples) = 0;

private:
    double mean;
    double var;
    double initial_sample_size;
protected:
    std::vector<double> uniformSamples;
};


#endif //PROJECT_MONTE_CARLO_UNIFORMDIST_H
