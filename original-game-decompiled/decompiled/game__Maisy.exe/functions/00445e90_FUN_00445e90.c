
/* ==== FUN_00445e90 @ 00445e90 ==== 
 * signature: undefined __fastcall FUN_00445e90(int * param_1)
 * body: 00445e90-00445eb6
 */

void __fastcall FUN_00445e90(int *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  byte bVar3;
  char cVar4;
  
  cVar4 = '\0';
  iVar2 = *(int *)((int)param_1 + 0x56);
  bVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  this = (void *)FUN_00466a70(iVar1);
  FUN_0044d9d0(this,iVar2,bVar3,cVar4);
  FUN_0046a460(param_1);
  return;
}


