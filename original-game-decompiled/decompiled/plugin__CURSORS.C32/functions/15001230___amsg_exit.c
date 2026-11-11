
/* ==== __amsg_exit @ 15001230 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 15001230-15001263
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 15001264-15001267
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_15005040 == 1) || ((DAT_15005040 == 0 && (DAT_15005044 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_15002080(param_1);
  (*(code *)PTR___exit_1500503c)(0xff);
  return;
}


