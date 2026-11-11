
/* ==== FUN_00417900 @ 00417900 ==== 
 * signature: uint __cdecl FUN_00417900(int param_1, int * param_2)
 * body: 00417900-00417953
 */

uint __cdecl FUN_00417900(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_0048b560(0,param_1);
  piVar1 = (int *)*puVar2;
  if (piVar1 != (int *)0x0) {
    iVar3 = FUN_0040dd70(piVar1);
    *param_2 = iVar3;
    if (iVar3 == 0) {
      (**(code **)(*piVar1 + 0x238))();
      iVar3 = FUN_0040dd70(piVar1);
      *param_2 = iVar3;
    }
    return -(uint)(*param_2 == 0) & 0x10000;
  }
  return 0x10000;
}


