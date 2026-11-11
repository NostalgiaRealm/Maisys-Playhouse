
/* ==== FUN_0044a480 @ 0044a480 ==== 
 * signature: undefined __thiscall FUN_0044a480(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 0044a480-0044a56b
 */

void __thiscall FUN_0044a480(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_60 [19];
  undefined4 local_14;
  SIZE_T local_10;
  int local_8;
  
  FUN_00486dd0(param_1,local_60,param_3,0x5c);
  FUN_0041e660(this,param_1,(int)local_60,param_2);
  FUN_0041e7a0(this,param_1,(int)local_60);
  *(undefined4 *)((int)this + 0x74) = local_14;
  if (local_10 != 0) {
    *(SIZE_T *)((int)this + 0x164) = local_10;
    uVar3 = FUN_00434920(DAT_004d99ac,local_10,0);
    *(undefined4 *)((int)this + 0x160) = uVar3;
    FUN_00486d60(param_1,uVar3,*(undefined4 *)((int)this + 0x164));
  }
  iVar1 = *(int *)this;
  cVar2 = (**(code **)(iVar1 + 0x15c))(0xb);
  if (cVar2 != '\0') {
    uVar4 = 0;
    uVar3 = FUN_00486c30(param_1);
    uVar3 = (**(code **)(*param_1 + 0x110))(uVar3,local_14,uVar4);
    (**(code **)(iVar1 + 0x138))(uVar3);
    (**(code **)(iVar1 + 0x160))(0,1);
    *(undefined4 *)((int)this + 0x52) = 0xffffffff;
  }
  *(int *)((int)this + 0x156) = local_8;
  if ((local_8 == 0x6e705453) || (local_8 == 0x616e7473)) {
    *(undefined1 *)((int)this + 0x15a) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x15a) = 0;
  }
  *(int **)((int)this + 0x15c) = param_1;
  return;
}


