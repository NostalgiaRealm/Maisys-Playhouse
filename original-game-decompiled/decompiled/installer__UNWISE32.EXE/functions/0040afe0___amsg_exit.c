
/* ==== __amsg_exit @ 0040afe0 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 0040afe0-0040b005
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040b006-0040b009
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00413430 == 1) {
    FUN_0040d5c0();
  }
  FUN_0040d600(param_1);
  (*(code *)PTR___exit_00411050)(0xff);
  return;
}


