//
// Created by parallels on 9/21/20.
//

#ifndef CPLUSPLUSWEBCALC_ISERVICESETTINGSFACTORY_H
#define CPLUSPLUSWEBCALC_ISERVICESETTINGSFACTORY_H

#endif //CPLUSPLUSWEBCALC_ISERVICESETTINGSFACTORY_H

#include <memory>
#include <restbed>

using namespace std;
using namespace restbed;

class IServiceSettingsFactory{

public:
    virtual shared_ptr<Settings> get_settings() const = 0;
};
