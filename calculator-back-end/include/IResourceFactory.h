//
// Created by parallels on 9/21/20.
//

#ifndef CPLUSPLUSWEBCALC_IRESOURCEFACTORY_H
#define CPLUSPLUSWEBCALC_IRESOURCEFACTORY_H

#endif //CPLUSPLUSWEBCALC_IRESOURCEFACTORY_H

#include <memory>
#include <restbed>

using namespace std;
using namespace restbed;

class IResourceFactory {
public:
    virtual shared_ptr<Resource> get_resource() const = 0;
};
