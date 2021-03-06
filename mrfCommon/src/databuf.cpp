
#include "mrf/databuf.h"

OBJECT_BEGIN(dataBufRx) {
    OBJECT_PROP2("Enable", &dataBufRx::dataRxEnabled, &dataBufRx::dataRxEnable);
} OBJECT_END(dataBufRx)

OBJECT_BEGIN(dataBufTx) {
    OBJECT_PROP2("Enable", &dataBufTx::dataTxEnabled, &dataBufTx::dataTxEnable);
    OBJECT_PROP1("Ready to send", &dataBufTx::dataRTS);
    OBJECT_PROP1("Max length", &dataBufTx::lenMax);
} OBJECT_END(dataBufTx)
