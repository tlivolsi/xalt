#ifndef PARSEJSONSTR_H
#define PARSEJSONSTR_H

#include <string>
#include "jsmn.h"
#include "utarray.h"
#include "xalt_types.h"
#include "xalt_obfuscate.h"

void processTable(const char* name, const char* js, int& i, int ntokens, jsmntok_t* tokens, S2S_t** t);
void processValue(const char* name, const char* js, int& i, int ntokens, jsmntok_t* tokens, std::string& value);
void processArray(const char* name, const char* js, int& i, int ntokens, jsmntok_t* tokens, UT_array** p_vA);
void parseCompTJsonStr(const char* name, std::string& jsonStr, std::string& compiler, std::string& compilerPath,
                       UT_array** linklineA, UT_array** parentProcA );


#endif // PARSEJSONSTR_H
