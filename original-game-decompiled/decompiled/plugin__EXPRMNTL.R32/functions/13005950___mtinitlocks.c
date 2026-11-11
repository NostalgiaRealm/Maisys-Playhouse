
/* ==== __mtinitlocks @ 13005950 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 13005950-13005979
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_130086a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008694);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008684);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_13008664);
  return extraout_EAX;
}


