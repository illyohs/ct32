#pragma once
#include "../input.h"

#ifdef __cplusplus
extern "C" {
#endif
 
enum Inputs
{
    RIGHT_BUTTON    = 0x01,
    LEFT_BUTTON     = 0x02,
    DOWN_BUTTON     = 0x04,
    UP_BUTTON       = 0x08,
    START_BUTTON    = 0x10,
    SELECT_BUTTON   = 0x20,
    B_BUTTON        = 0x40,
    A_BUTTON        = 0x80,
};

enum CPort
{
    P1,
    P2,
    BOTH,
};

int sendInput(CPort controler, Inputs input);
int sendInputs(CPort controler, Inputs *input);

#ifdef __cplusplus
}
#endif