
/* ==== FUN_004b7c85 @ 004b7c85 ==== 
 * signature: undefined4 __fastcall FUN_004b7c85(int * param_1)
 * body: 004b7c85-004b7ca5
 */

undefined4 __fastcall FUN_004b7c85(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((int *)param_1[0x1a] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x74))(), iVar1 != 0)) {
    return 1;
  }
  uVar2 = FUN_004a8882(param_1);
  return uVar2;
}


