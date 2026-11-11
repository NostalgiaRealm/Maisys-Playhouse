
/* ==== FUN_00445ec0 @ 00445ec0 ==== 
 * signature: undefined __fastcall FUN_00445ec0(int * param_1)
 * body: 00445ec0-00445eeb
 */

void __fastcall FUN_00445ec0(int *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  
  FUN_00447460((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x56);
  iVar1 = (**(code **)(*param_1 + 0x10))(iVar2,1);
  this = (void *)FUN_00466a70(iVar1);
  FUN_0044e610(this,iVar2);
  FUN_0046a480(param_1);
  return;
}


