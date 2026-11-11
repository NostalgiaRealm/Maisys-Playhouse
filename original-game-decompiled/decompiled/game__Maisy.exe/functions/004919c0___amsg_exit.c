
/* ==== __amsg_exit @ 004919c0 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 004919c0-004919e5
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004919e6-004919e9
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_004de190 == 1) {
    __FF_MSGBANNER();
  }
  FUN_0049b9a0(param_1);
  (*(code *)PTR___exit_004de18c)(0xff);
  return;
}


