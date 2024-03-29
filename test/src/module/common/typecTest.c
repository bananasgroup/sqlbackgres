/***********************************************************************************************************************************
Test C Types
***********************************************************************************************************************************/
#include <assert.h>

static void
testRun(void)
{
    FUNCTION_HARNESS_VOID();

    // *****************************************************************************************************************************
    if (testBegin("test int size"))
    {
        // Ensure that int is at least 4 bytes
        assert(sizeof(int) >= 4);
    }

    // *****************************************************************************************************************************
    if (testBegin("test boolean values"))
    {
        // Ensure false and true are defined
        assert(true);
        assert(!false);
    }

    FUNCTION_HARNESS_RETURN_VOID();
}
