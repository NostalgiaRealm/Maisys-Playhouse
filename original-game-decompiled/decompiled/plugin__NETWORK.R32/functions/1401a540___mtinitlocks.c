
/* ==== __mtinitlocks @ 1401a540 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 1401a540-1401a569
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402723c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402722c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402721c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_140271fc);
  return extraout_EAX;
}


