
/* ==== FUN_00471110 @ 00471110 ==== 
 * signature: undefined4 __cdecl FUN_00471110(int param_1, int * param_2)
 * body: 00471110-00471146
 */

undefined4 __cdecl FUN_00471110(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x10000;
  piVar1 = (int *)FUN_0048b550(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x10))();
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x82), *param_2 = iVar2, iVar2 != 0)) {
    uVar3 = 0;
  }
  return uVar3;
}


