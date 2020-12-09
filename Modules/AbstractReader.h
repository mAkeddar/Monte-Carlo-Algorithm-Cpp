//
// Created by mehdi on 24/11/20.
//

#ifndef PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#define PROJECT_MONTE_CARLO_ABSTRACTREADER_H
#include "AbstractError.h"
#include "AbstractVariable.h"
#include "AbstractFunc.h"

class AbstractReader {
public:

    /**
     * \brief Default Constructor
     */
    AbstractReader();

    /**
     * \brief Default Destructor
     */
    virtual ~AbstractReader();
    /**
     * \brief Abstract function to read the distribution file
     * @param file_name : Distribution file name
     * @param pRandomVariable : Pointer to a Random variable
     */
    virtual void read_file(const char *file_name,AbstractVariable* &pRandomVariable) = 0;
};


#endif //PROJECT_MONTE_CARLO_ABSTRACTREADER_H
