#ifndef header_h
#define header_h

#define namespace_begin typedef struct
#define namespace_end(id, name) id; \
extern id const name;
#define namespace_function static
#define namespace_export(id, name) id const name = 

namespace_begin {
    int (* const fn)(int i);
} 
namespace_end(namespace_struct, Namespace);

#endif