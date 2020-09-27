#include <amount.h>
#include <util.h>

CAmount CollateralRequired()
{
    const CAmount nCollateralRequired = 5000 * COIN;
    return nCollateralRequired;
}
