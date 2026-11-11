
/* ==== __umatherr @ 00497c20 ==== 
 * signature: float10 __cdecl __umatherr(int param_1, int param_2)
 * body: 00497c20-00497ccd
 * note: Library Function - Single Match  __umatherr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 1998 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_00497d00(param_2);
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_0049ed30();
    if (iVar1 == 0) {
      __set_errno(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


