
/* ==== __amsg_exit @ 13004910 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 13004910-13004943
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 13004944-13004947
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_13008334 == 1) || ((DAT_13008334 == 0 && (DAT_13008338 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_13005760(param_1);
  (*(code *)PTR___exit_13008330)(0xff);
  return;
}


