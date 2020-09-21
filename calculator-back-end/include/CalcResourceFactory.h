//
// Created by parallels on 9/21/20.
//

#ifndef CPLUSPLUSWEBCALC_CALCRESOURCEFACTORY_H
#define CPLUSPLUSWEBCALC_CALCRESOURCEFACTORY_H

#endif //CPLUSPLUSWEBCALC_CALCRESOURCEFACTORY_H

#include "IResourceFactory.h"

#include <tuple>
#include <string>

class CalcResourceFactory : public IResourceFactory{

public:

    CalcResourceFactory();
    std::shared_ptr<Resource> get_resource() const final;

private:

    string to_json(float result);
    float calculate(float num1, float num2, string operation);
    tuple<float, float, string> get_path_parameters(const shared_ptr<Session> session);
    void get_handler(const shared_ptr<Session> session);
    shared_prt<Resource>
};
