
/* ==== __amsg_exit @ 10009c30 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 10009c30-10009c63
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 10009c64-10009c67
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10016f3c == 1) || ((DAT_10016f3c == 0 && (DAT_10016f40 == 1)))) {
    FUN_1000b480();
  }
  FUN_1000b4c0(param_1);
  (*(code *)PTR___exit_10013210)(0xff);
  return;
}


