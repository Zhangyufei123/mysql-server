#if !defined(DUK_MODULE_NODE_H_INCLUDED)
#define DUK_MODULE_NODE_H_INCLUDED

#include "duktape.h"

DUK_EXTERNAL_DECL duk_ret_t duk_module_node_peval_main(duk_context *ctx, const char *path);
DUK_EXTERNAL_DECL void duk_module_node_init(duk_context *ctx);

#endif  /* DUK_MODULE_NODE_H_INCLUDED */
