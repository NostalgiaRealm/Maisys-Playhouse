
/* ==== __amsg_exit @ 10016d30 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 10016d30-10016d63
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 10016d64-10016d67
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10023324 == 1) || ((DAT_10023324 == 0 && (DAT_10023328 == 1)))) {
    FUN_10018f60();
  }
  FUN_10018fa0((undefined *)param_1);
  (*(code *)PTR___exit_100200e0)(0xff);
  return;
}


