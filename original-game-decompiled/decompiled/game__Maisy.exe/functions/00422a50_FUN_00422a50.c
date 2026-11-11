
/* ==== FUN_00422a50 @ 00422a50 ==== 
 * signature: undefined __thiscall FUN_00422a50(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00422a50-00422afb
 */

void __thiscall FUN_00422a50(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  char local_120 [256];
  undefined4 local_20;
  byte local_1a;
  undefined4 local_12;
  short local_e;
  undefined4 local_c;
  undefined2 local_8;
  
  FUN_00486dd0(param_1,&local_20,param_3,0x1a);
  if (local_e != 0) {
    FUN_00486d60(param_1,local_120,(int)local_e);
  }
  *(undefined4 *)((int)this + 0xc) = local_12;
  (**(code **)(*(int *)this + 0x124))(local_c,1);
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x5e) = local_8;
  if (local_e == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar1 = FUN_0043f650(local_120);
    *(char **)((int)this + 0x2e) = pcVar1;
  }
  if ((local_1a & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((local_1a & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  return;
}


