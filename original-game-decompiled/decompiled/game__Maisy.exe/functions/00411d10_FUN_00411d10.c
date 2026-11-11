
/* ==== FUN_00411d10 @ 00411d10 ==== 
 * signature: undefined __thiscall FUN_00411d10(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 00411d10-00411db2
 */

void __thiscall FUN_00411d10(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30 [9];
  int local_c;
  int local_8;
  
  FUN_00486dd0(param_1,local_30,param_3,0x28);
  (**(code **)(*(int *)this + 0x1e0))(param_1,local_30,param_2);
  if ((param_2 & 8) != 0) {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x144))(&local_8);
    iVar3 = local_8;
    iVar4 = local_c;
    uVar2 = FUN_00486c30(param_1);
    uVar2 = (**(code **)(iVar1 + 0x110))(uVar2,iVar3,iVar4);
    (**(code **)(*(int *)this + 0x138))(uVar2);
    FUN_00411dc0(this);
    (**(code **)(iVar1 + 0x148))(local_8 + local_c);
    return;
  }
  (**(code **)(*(int *)this + 0x1e4))(param_1,local_30,param_2);
  return;
}


