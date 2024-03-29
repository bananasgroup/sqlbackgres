/***********************************************************************************************************************************
Test Debug Macros and Routines when Disabled
***********************************************************************************************************************************/
#include "common/macro.h"

/***********************************************************************************************************************************
Test Run
***********************************************************************************************************************************/
static void
testRun(void)
{
    FUNCTION_HARNESS_VOID();

    // *****************************************************************************************************************************
    if (testBegin("DEBUG"))
    {
#ifdef DEBUG
        bool debug = true;
#else
        bool debug = false;
#endif

        TEST_RESULT_BOOL(debug, false, "DEBUG is not defined");
    }

    FUNCTION_HARNESS_RETURN_VOID();
}
