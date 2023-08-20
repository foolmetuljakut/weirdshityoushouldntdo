#include "cwithnamespaces.h"

namespace_function int fn(int i) {
    return 2*i;
}

namespace_export(namespace_struct, Namespace) { fn };