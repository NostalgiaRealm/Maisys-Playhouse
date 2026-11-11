
/* ==== FUN_0040e300 @ 0040e300 ==== 
 * signature: undefined __thiscall FUN_0040e300(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040e300-0040e33f
 */

void __thiscall FUN_0040e300(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = FUN_00486c30(param_1);
  uVar2 = (**(code **)(*param_1 + 0x110))(uVar2,param_2,param_3);
  (**(code **)(iVar1 + 0x138))(uVar2);
  (**(code **)(iVar1 + 0x114))();
  return;
}


