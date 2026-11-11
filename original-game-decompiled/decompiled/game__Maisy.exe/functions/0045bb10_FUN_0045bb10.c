
/* ==== FUN_0045bb10 @ 0045bb10 ==== 
 * signature: undefined4 __cdecl FUN_0045bb10(int param_1, int * param_2)
 * body: 0045bb10-0045bb49
 */

undefined4 __cdecl FUN_0045bb10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048b560(0,param_1);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1e) & 0x10) != 0)) {
    iVar2 = FUN_00466a70(*(int *)(iVar2 + 4));
    *param_2 = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0x10000;
}


