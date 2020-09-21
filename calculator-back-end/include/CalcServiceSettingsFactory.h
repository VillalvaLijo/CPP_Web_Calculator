//
// Created by parallels on 9/21/20.
//

#ifndef CPLUSPLUSWEBCALC_CALCSERVICESETTINGSFACTORY_H
#define CPLUSPLUSWEBCALC_CALCSERVICESETTINGSFACTORY_H

#endif //CPLUSPLUSWEBCALC_CALCSERVICESETTINGSFACTORY_H

#include "IServiceSettingsFactory.h"

class CalcSeviceSettingFactory : public IServiceSettingsFactory {

public:

    CalcServiceSettingFactory();
    shared_ptr<Settings> get_settings() const final;

private:

    shared_ptr<Settings> _settings;
};