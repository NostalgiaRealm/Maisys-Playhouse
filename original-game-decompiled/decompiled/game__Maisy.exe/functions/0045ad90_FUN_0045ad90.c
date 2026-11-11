
/* ==== FUN_0045ad90 @ 0045ad90 ==== 
 * signature: undefined __stdcall FUN_0045ad90(void * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0045ad90-0045ae76
 */

void FUN_0045ad90(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_30 [3];
  short local_22;
  int local_20 [4];
  void *local_10;
  int *local_c;
  short local_6;
  
  FUN_00486dd0(param_1,local_30,param_3,0x10);
  local_6 = 0;
  if (0 < local_22) {
    do {
      FUN_00486e50(param_1,local_20);
      local_20[0] = 3;
      local_c = (int *)FUN_00466aa0(local_10,param_1,param_2,local_20);
      if (local_c != (int *)0x0) {
        FUN_004306b0(*(void **)((int)local_10 + 0x7e),local_c);
        if (*(short *)(param_3 + 1) == 0) {
          piVar2 = FUN_0041bd90(0x21,0,0);
          (**(code **)(*piVar2 + 0x38))(local_10);
          piVar3 = (int *)FUN_00469fb0(local_c);
          while (piVar3 != (int *)0x0) {
            piVar1 = *(int **)((int)piVar3 + 0x6a);
            (**(code **)(*piVar3 + 0x2c0))();
            (**(code **)(*piVar2 + 0x2b0))(piVar3,1);
            piVar3 = piVar1;
          }
          (**(code **)(*local_c + 0x2b0))(piVar2,1);
        }
      }
      local_6 = local_6 + 1;
    } while (local_6 < local_22);
  }
  return;
}


