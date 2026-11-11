
/* ==== __amsg_exit @ 12028e70 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 12028e70-12028ea3
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 12028ea4-12028ea7
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_12037e60 == 1) || ((DAT_12037e60 == 0 && (DAT_12037e64 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1202b0f0(param_1);
  (*(code *)PTR___exit_12037e5c)(0xff);
  return;
}


