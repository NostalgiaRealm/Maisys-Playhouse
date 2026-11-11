
/* ==== FUN_00425be0 @ 00425be0 ==== 
 * signature: undefined __thiscall FUN_00425be0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00425be0-00425cec
 */

void __thiscall FUN_00425be0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_bc [64];
  undefined4 local_7c;
  byte local_76;
  undefined4 local_6e;
  short local_6a;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined2 local_1a;
  undefined4 local_18;
  
  FUN_00486dd0(param_1,&local_7c,param_3,0x78);
  if (local_6a != 0) {
    FUN_00486d60(param_1,local_bc,(int)local_6a);
  }
  *(undefined4 *)((int)this + 0x94) = local_1e;
  *(undefined4 *)((int)this + 0xc) = local_6e;
  (**(code **)(*(int *)this + 0x124))(local_68,1);
  *(undefined2 *)((int)this + 0x60) = local_64;
  *(undefined2 *)((int)this + 0x5e) = local_36;
  *(undefined4 *)((int)this + 0xa2) = local_32;
  *(undefined4 *)((int)this + 0xa6) = local_2e;
  *(undefined4 *)((int)this + 0xaa) = local_2a;
  *(undefined4 *)((int)this + 0xae) = local_26;
  *(undefined2 *)((int)this + 0x15e) = local_1a;
  piVar1 = *(int **)((int)this + 0x5a);
  *(undefined4 *)((int)this + 0x14a) = local_18;
  *(undefined4 *)((int)this + 0x56) = local_22;
  uVar2 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(*piVar1 + 0x124))(uVar2);
  if (local_6a == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar3 = FUN_0043f650(local_bc);
    *(char **)((int)this + 0x2e) = pcVar3;
  }
  if ((local_76 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((local_76 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  return;
}


