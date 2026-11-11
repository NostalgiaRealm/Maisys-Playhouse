
/* ==== FUN_004358a0 @ 004358a0 ==== 
 * signature: undefined4 __thiscall FUN_004358a0(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined2 param_4, undefined2 param_5)
 * body: 004358a0-004358f7
 */

undefined4 __thiscall
FUN_004358a0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,
            undefined2 param_5)

{
  float10 fVar1;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  double local_1c;
  double local_14;
  undefined4 local_c;
  
  local_24 = param_1;
  local_1c = (double)param_3 * 1000.0;
  local_c = param_2;
  fVar1 = FUN_0043c2f0();
  local_14 = (double)(fVar1 + (float10)local_1c);
  local_20 = param_4;
  local_1e = param_5;
  (**(code **)(**(int **)((int)this + 0x7250) + 0xe8))(&local_24);
  return 0;
}


