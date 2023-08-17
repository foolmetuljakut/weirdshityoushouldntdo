#include "cwithnamespaces.h"

static int fn(int i) {
    return 2*i;
}

namespace_struct const Namespace = { fn };