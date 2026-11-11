
/* ==== FUN_0041e7a0 @ 0041e7a0 ==== 
 * signature: undefined __thiscall FUN_0041e7a0(void * this, int * param_1, int param_2)
 * body: 0041e7a0-0041e82d
 */

void __thiscall FUN_0041e7a0(void *this,int *param_1,int param_2)

{
  char *pcVar1;
  char local_108 [256];
  int local_8;
  
  if (*(short *)(param_2 + 0x1a) != 0) {
    FUN_00486d60(param_1,local_108,(int)*(short *)(param_2 + 0x1a));
  }
  if (*(short *)(param_2 + 0x1a) != 0) {
    pcVar1 = FUN_0043f650(local_108);
    *(char **)((int)this + 0x5a) = pcVar1;
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    (**(code **)(*param_1 + 0x144))(&local_8);
    (**(code **)(*(int *)this + 0x13c))(param_1,local_8,*(undefined4 *)(param_2 + 0x3c));
    (**(code **)(*param_1 + 0x148))(*(int *)(param_2 + 0x3c) + local_8);
  }
  return;
}


