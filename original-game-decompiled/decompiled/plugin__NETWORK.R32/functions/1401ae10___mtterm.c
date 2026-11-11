
/* ==== __mtterm @ 1401ae10 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 1401ae10-1401ae30
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_14027320 != 0xffffffff) {
    TlsFree(DAT_14027320);
    DAT_14027320 = 0xffffffff;
  }
  return;
}


