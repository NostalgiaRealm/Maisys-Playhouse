
/* ==== FUN_00472900 @ 00472900 ==== 
 * signature: undefined __thiscall FUN_00472900(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00472900-00472a51
 */

void __thiscall FUN_00472900(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_16c [256];
  undefined4 local_6c;
  uint local_66;
  int local_5e [4];
  undefined2 local_4e;
  undefined4 local_4c;
  short local_48;
  undefined4 local_46;
  undefined2 local_42;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  uint local_26;
  undefined4 local_22;
  int *local_1c;
  undefined4 *local_18;
  undefined2 local_10;
  undefined1 local_a;
  short local_6;
  
  FUN_00486dd0(param_1,&local_6c,param_3,0x4e);
  if (local_48 != 0) {
    FUN_00486d60(param_1,local_16c,(int)local_48);
  }
  FUN_00437b00(DAT_004dae3c,this,local_5e);
  local_10 = local_4e;
  local_1c = param_1;
  local_18 = param_3;
  local_a = 0;
  (**(code **)(*(int *)this + 0x464))(param_1,&local_1c);
  *(undefined4 *)((int)this + 0xc) = local_4c;
  (**(code **)(*(int *)this + 0x124))(local_46,1);
  *(undefined2 *)((int)this + 0x5e) = local_3c;
  *(undefined4 *)((int)this + 0xa2) = local_3a;
  *(undefined2 *)((int)this + 0x60) = local_42;
  *(undefined4 *)((int)this + 0xa6) = local_36;
  *(undefined4 *)((int)this + 0xaa) = local_32;
  *(undefined4 *)((int)this + 0xae) = local_2e;
  puVar1 = (uint *)((int)this + 0x7e);
  *puVar1 = local_26;
  *(undefined4 *)((int)this + 0x82) = local_22;
  if (*puVar1 != 0) {
    *puVar1 = *puVar1 | 0x80000000;
  }
  local_6 = local_48;
  *(undefined4 *)((int)this + 0x56) = local_2a;
  uVar2 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar2);
  if (local_6 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar3 = FUN_0043f650(local_16c);
    *(char **)((int)this + 0x2e) = pcVar3;
  }
  if ((local_66 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((local_66 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


