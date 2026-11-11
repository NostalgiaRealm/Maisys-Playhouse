
/* ==== FUN_00442360 @ 00442360 ==== 
 * signature: int __fastcall FUN_00442360(int param_1)
 * body: 00442360-00442382
 */

int __fastcall FUN_00442360(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar2 = FUN_00428d90(*(int *)(param_1 + 0x88));
  }
  iVar1 = thunk_FUN_00414290();
  return iVar1 + iVar2;
}


