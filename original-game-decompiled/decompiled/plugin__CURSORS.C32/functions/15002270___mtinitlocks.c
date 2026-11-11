
/* ==== __mtinitlocks @ 15002270 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 15002270-15002299
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_150053a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005394);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_15005374);
  return extraout_EAX;
}


