
/* ==== __mtinitlocks @ 00493d10 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 00493d10-00493d39
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de48c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de47c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de46c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004de44c);
  return extraout_EAX;
}


