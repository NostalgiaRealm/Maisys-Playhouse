
/* ==== __mtterm @ 11029760 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 11029760-11029780
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_11036598 != 0xffffffff) {
    TlsFree(DAT_11036598);
    DAT_11036598 = 0xffffffff;
  }
  return;
}


