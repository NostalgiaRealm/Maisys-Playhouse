
/* ==== FUN_0041cb10 @ 0041cb10 ==== 
 * signature: undefined __thiscall FUN_0041cb10(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 0041cb10-0041cc93
 */

void __thiscall FUN_0041cb10(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_58 [2];
  undefined4 local_50 [13];
  int local_1c;
  int local_c;
  int local_8;
  
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,local_50,param_3,0x4c);
    FUN_0041e660(this,param_1,(int)local_50,param_2);
    FUN_0041e7a0(this,param_1,(int)local_50);
    return;
  }
  if (*(short *)(param_3 + 1) == 1) {
    FUN_00486dd0(param_1,local_58,param_3,0x54);
    FUN_0041e660(this,param_1,(int)local_58,param_2);
    *(int *)((int)this + 0x110) = local_8;
    FUN_0041e7a0(this,param_1,(int)local_58);
    iVar3 = *(int *)this;
    cVar1 = (**(code **)(iVar3 + 0x15c))(0xb);
    if (cVar1 != '\0') {
      uVar2 = FUN_00486c30(param_1);
      uVar2 = (**(code **)(*param_1 + 0x110))(uVar2,local_c,local_8);
      (**(code **)(iVar3 + 0x138))(uVar2);
      (**(code **)(iVar3 + 0x160))(0,1);
      *(undefined4 *)((int)this + 0x52) = 0xffffffff;
      return;
    }
  }
  else {
    FUN_00486dd0(param_1,local_58,param_3,0x54);
    FUN_0041e660(this,param_1,(int)local_58,param_2);
    *(int *)((int)this + 0x110) = local_1c;
    *(int *)((int)this + 0xcc) = local_8 - local_1c;
    iVar3 = local_c + local_1c;
    local_1c = 0;
    *(int *)((int)this + 200) = iVar3;
    FUN_0041e7a0(this,param_1,(int)local_58);
    iVar3 = *(int *)this;
    cVar1 = (**(code **)(iVar3 + 0x15c))(0xb);
    if (cVar1 != '\0') {
      uVar2 = FUN_00486c30(param_1);
      uVar2 = (**(code **)(*param_1 + 0x110))(uVar2,local_c,local_8);
      (**(code **)(iVar3 + 0x138))(uVar2);
      (**(code **)(iVar3 + 0x160))(0,1);
      *(undefined4 *)((int)this + 0x52) = 0xffffffff;
    }
  }
  return;
}


