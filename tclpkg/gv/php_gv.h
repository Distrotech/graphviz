/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_GV_H
#define PHP_GV_H

extern zend_module_entry gv_module_entry;
#define phpext_gv_ptr &gv_module_entry

#ifdef PHP_WIN32
# define PHP_GV_API __declspec(dllexport)
#else
# define PHP_GV_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(gv);
PHP_MSHUTDOWN_FUNCTION(gv);
PHP_RINIT_FUNCTION(gv);
PHP_RSHUTDOWN_FUNCTION(gv);
PHP_MINFO_FUNCTION(gv);

ZEND_NAMED_FUNCTION(_wrap_digraph);
ZEND_NAMED_FUNCTION(_wrap_strictgraph);
ZEND_NAMED_FUNCTION(_wrap_strictdigraph);
ZEND_NAMED_FUNCTION(_wrap_readstring);
ZEND_NAMED_FUNCTION(_wrap_read);
ZEND_NAMED_FUNCTION(_wrap_graph);
ZEND_NAMED_FUNCTION(_wrap_node);
ZEND_NAMED_FUNCTION(_wrap_edge);
ZEND_NAMED_FUNCTION(_wrap_setv);
ZEND_NAMED_FUNCTION(_wrap_getv);
ZEND_NAMED_FUNCTION(_wrap_nameof);
ZEND_NAMED_FUNCTION(_wrap_findsubg);
ZEND_NAMED_FUNCTION(_wrap_findnode);
ZEND_NAMED_FUNCTION(_wrap_findedge);
ZEND_NAMED_FUNCTION(_wrap_findattr);
ZEND_NAMED_FUNCTION(_wrap_headof);
ZEND_NAMED_FUNCTION(_wrap_tailof);
ZEND_NAMED_FUNCTION(_wrap_graphof);
ZEND_NAMED_FUNCTION(_wrap_rootof);
ZEND_NAMED_FUNCTION(_wrap_protonode);
ZEND_NAMED_FUNCTION(_wrap_protoedge);
ZEND_NAMED_FUNCTION(_wrap_ok);
ZEND_NAMED_FUNCTION(_wrap_firstsubg);
ZEND_NAMED_FUNCTION(_wrap_nextsubg);
ZEND_NAMED_FUNCTION(_wrap_firstsupg);
ZEND_NAMED_FUNCTION(_wrap_nextsupg);
ZEND_NAMED_FUNCTION(_wrap_firstedge);
ZEND_NAMED_FUNCTION(_wrap_nextedge);
ZEND_NAMED_FUNCTION(_wrap_firstout);
ZEND_NAMED_FUNCTION(_wrap_nextout);
ZEND_NAMED_FUNCTION(_wrap_firsthead);
ZEND_NAMED_FUNCTION(_wrap_nexthead);
ZEND_NAMED_FUNCTION(_wrap_firstin);
ZEND_NAMED_FUNCTION(_wrap_nextin);
ZEND_NAMED_FUNCTION(_wrap_firsttail);
ZEND_NAMED_FUNCTION(_wrap_nexttail);
ZEND_NAMED_FUNCTION(_wrap_firstnode);
ZEND_NAMED_FUNCTION(_wrap_nextnode);
ZEND_NAMED_FUNCTION(_wrap_firstattr);
ZEND_NAMED_FUNCTION(_wrap_nextattr);
ZEND_NAMED_FUNCTION(_wrap_rm);
ZEND_NAMED_FUNCTION(_wrap_layout);
ZEND_NAMED_FUNCTION(_wrap_render);
ZEND_NAMED_FUNCTION(_wrap_renderresult);
ZEND_NAMED_FUNCTION(_wrap_renderchannel);
ZEND_NAMED_FUNCTION(_wrap_renderdata);
ZEND_NAMED_FUNCTION(_wrap_write);
#endif /* PHP_GV_H */
