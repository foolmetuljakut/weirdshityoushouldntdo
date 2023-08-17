#ifndef header_h
#define header_h

typedef struct {
    int (* const fn)(int i);
} namespace_struct;
extern namespace_struct const Namespace;

#endif