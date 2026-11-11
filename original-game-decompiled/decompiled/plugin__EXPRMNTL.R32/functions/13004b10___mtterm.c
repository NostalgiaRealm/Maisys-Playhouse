
/* ==== __mtterm @ 13004b10 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 13004b10-13004b30
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_13008380 != 0xffffffff) {
    TlsFree(DAT_13008380);
    DAT_13008380 = 0xffffffff;
  }
  return;
}


