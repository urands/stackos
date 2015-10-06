/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __MOD_PATTERN_H__
#define __MOD_PATTERN_H__

//#define macro(X) \
void Module ##X## Init (const uint32_t mode); 

void PatternTask (void const *arg); 

//macro(STOS_MODULE_NAME)

//#undef STOS_MODULE_NAME

#endif /* __MOD_PATTERN_H__ */
