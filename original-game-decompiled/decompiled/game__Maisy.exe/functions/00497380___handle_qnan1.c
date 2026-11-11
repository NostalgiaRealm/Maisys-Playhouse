
/* ==== __handle_qnan1 @ 00497380 ==== 
 * signature: float10 __cdecl __handle_qnan1(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00497380-004973cf
 * note: Library Function - Single Match  __handle_qnan1  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 1998 Release */

float10 __cdecl __handle_qnan1(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_004dfc10 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)(double)CONCAT44(param_3,param_2);
}


