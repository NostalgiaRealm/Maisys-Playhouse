
/* ==== FUN_00438cd0 @ 00438cd0 ==== 
 * signature: undefined __thiscall FUN_00438cd0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00438cd0-00438df7
 */

void __thiscall FUN_00438cd0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  char local_154 [256];
  undefined4 local_54 [3];
  undefined4 local_46;
  short local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_2a [3];
  undefined4 local_1c;
  short local_18;
  undefined4 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined4 local_e;
  uint local_8;
  
  local_8 = *(uint *)((int)param_3 + 6);
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,local_54,param_3,0x4a);
    if (local_42 + 0x4a < *(int *)((int)param_3 + 10)) {
      FUN_00486d40(param_1,(*(int *)((int)param_3 + 10) - (int)local_42) + -0x4a);
    }
    *(undefined4 *)((int)this + 0xc) = local_46;
    (**(code **)(*(int *)this + 0x124))(local_40,1);
    *(undefined4 *)((int)this + 0x96) = 0;
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_e;
    *(undefined2 *)((int)this + 0x60) = local_3c;
    local_18 = local_42;
  }
  else {
    FUN_00486dd0(param_1,local_2a,param_3,0x20);
    *(undefined4 *)((int)this + 0xc) = local_1c;
    (**(code **)(*(int *)this + 0x124))(local_16,1);
    *(undefined4 *)((int)this + 0x96) = local_e;
    *(undefined2 *)((int)this + 0x5e) = local_10;
    *(undefined2 *)((int)this + 0x60) = local_12;
  }
  if (local_18 != 0) {
    FUN_00486d60(param_1,local_154,(int)local_18);
    if (local_18 != 0) {
      pcVar1 = FUN_0043f650(local_154);
      *(char **)((int)this + 0x2e) = pcVar1;
      goto LAB_00438dc8;
    }
  }
  *(undefined4 *)((int)this + 0x2e) = 0;
LAB_00438dc8:
  if ((local_8 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((local_8 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  return;
}


