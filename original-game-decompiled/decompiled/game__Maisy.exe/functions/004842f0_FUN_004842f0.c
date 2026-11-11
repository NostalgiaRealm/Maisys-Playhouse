
/* ==== FUN_004842f0 @ 004842f0 ==== 
 * signature: undefined4 __cdecl FUN_004842f0(undefined4 param_1, int param_2, int param_3)
 * body: 004842f0-00484345
 */

undefined4 __cdecl FUN_004842f0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *this;
  
  piVar1 = (int *)FUN_0048b550(param_3);
  iVar2 = FUN_0048b550(param_2);
  if (piVar1 == (int *)0x0) {
    return 0x90001;
  }
  this = (void *)FUN_0040c620(piVar1);
  if (this != (void *)0x0) {
    FUN_00404d20(this,(int)piVar1,(char *)0x0,0,iVar2);
    return 0;
  }
  return 0x9000d;
}


