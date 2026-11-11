
/* ==== __amsg_exit @ 14019490 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 14019490-140194c3
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 140194c4-140194c7
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_14026e4c == 1) || ((DAT_14026e4c == 0 && (DAT_14026e50 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1401bcb0(param_1);
  (*(code *)PTR___exit_14026e48)(0xff);
  return;
}


