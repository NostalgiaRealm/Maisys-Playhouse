
/* ==== FUN_00489da0 @ 00489da0 ==== 
 * signature: int __fastcall FUN_00489da0(int param_1)
 * body: 00489da0-00489daa
 */

int __fastcall FUN_00489da0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  return iVar1;
}


