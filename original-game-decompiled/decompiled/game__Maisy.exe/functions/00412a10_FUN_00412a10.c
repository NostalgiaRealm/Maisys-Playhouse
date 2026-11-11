
/* ==== FUN_00412a10 @ 00412a10 ==== 
 * signature: int __fastcall FUN_00412a10(int * param_1)
 * body: 00412a10-00412a23
 */

int __fastcall FUN_00412a10(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x218))();
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)param_1 + 0x3a);
  }
  return iVar1;
}


