
/* ==== FUN_0042e3c0 @ 0042e3c0 ==== 
 * signature: undefined1 __thiscall FUN_0042e3c0(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 0042e3c0-0042e407
 */

undefined1 __thiscall FUN_0042e3c0(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar3 = param_1;
  iVar4 = param_2;
  psVar5 = param_3;
  this_00 = (void *)(**(code **)(*(int *)this + 0x10))();
  cVar1 = FUN_0045a6e0(this_00,iVar3,iVar4,psVar5);
  if (cVar1 == '\0') {
    uVar2 = FUN_0046bad0(this,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 1;
}


