
/* ==== __amsg_exit @ 110296c0 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 110296c0-110296f3
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 110296f4-110296f7
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_11036590 == 1) || ((DAT_11036590 == 0 && (DAT_11036594 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1102af10(param_1);
  (*(code *)PTR___exit_1103658c)(0xff);
  return;
}


