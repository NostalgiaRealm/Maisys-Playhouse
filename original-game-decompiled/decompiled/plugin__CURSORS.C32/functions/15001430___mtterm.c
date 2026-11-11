
/* ==== __mtterm @ 15001430 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 15001430-15001450
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_1500508c != 0xffffffff) {
    TlsFree(DAT_1500508c);
    DAT_1500508c = 0xffffffff;
  }
  return;
}


