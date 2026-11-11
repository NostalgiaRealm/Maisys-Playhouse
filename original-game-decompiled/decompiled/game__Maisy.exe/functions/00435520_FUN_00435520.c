
/* ==== FUN_00435520 @ 00435520 ==== 
 * signature: undefined4 __thiscall FUN_00435520(void * this, int * param_1, undefined4 * param_2, undefined4 * param_3, undefined2 param_4, undefined4 param_5)
 * body: 00435520-00435578
 */

undefined4 __thiscall
FUN_00435520(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,undefined2 param_4,
            undefined4 param_5)

{
  undefined1 local_30 [4];
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  undefined2 local_c;
  undefined4 local_a;
  
  if (param_1 == (int *)0x0) {
    param_1 = *(int **)((int)this + 0x724c);
  }
  FUN_004374c0(local_2c,param_2);
  FUN_004374c0(local_1c,param_3);
  local_c = param_4;
  local_a = param_5;
  (**(code **)(*param_1 + 0xe8))(local_30);
  return 0;
}


