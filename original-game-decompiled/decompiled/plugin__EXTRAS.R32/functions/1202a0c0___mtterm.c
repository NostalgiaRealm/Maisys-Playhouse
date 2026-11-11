
/* ==== __mtterm @ 1202a0c0 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 1202a0c0-1202a0e0
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_12037e90 != 0xffffffff) {
    TlsFree(DAT_12037e90);
    DAT_12037e90 = 0xffffffff;
  }
  return;
}


