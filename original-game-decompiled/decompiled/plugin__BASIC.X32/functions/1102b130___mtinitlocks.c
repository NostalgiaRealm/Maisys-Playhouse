
/* ==== __mtinitlocks @ 1102b130 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 1102b130-1102b159
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036924);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036914);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_11036904);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_110368e4);
  return extraout_EAX;
}


