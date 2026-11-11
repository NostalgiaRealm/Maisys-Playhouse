
/* ==== __mtinitlocks @ 1202c410 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 1202c410-1202c439
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203844c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203843c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203842c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1203840c);
  return extraout_EAX;
}


