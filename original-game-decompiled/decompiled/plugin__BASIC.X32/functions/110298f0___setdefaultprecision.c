
/* ==== __setdefaultprecision @ 110298f0 ==== 
 * signature: undefined __stdcall __setdefaultprecision(void)
 * body: 110298f0-11029902
 * note: Library Function - Single Match  __setdefaultprecision  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 1998 Release */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}


