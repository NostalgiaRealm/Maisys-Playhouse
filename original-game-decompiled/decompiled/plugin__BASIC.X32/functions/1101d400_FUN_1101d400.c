
/* ==== FUN_1101d400 @ 1101d400 ==== 
 * signature: undefined __cdecl FUN_1101d400(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 1101d400-1101d578
 */

void __cdecl FUN_1101d400(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  byte local_4;
  byte local_3;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_20,0x1c);
    if (cVar1 != '\0') {
      if (local_8._2_1_ != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_8._2_1_);
      }
      if (local_8._3_1_ != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_8._3_1_);
      }
      *(undefined4 *)(param_2 + 0xc) = local_20;
      *(undefined4 *)(param_2 + 0x10) = local_1c;
      *(undefined2 *)(param_2 + 0x1c) = local_10;
      *(undefined4 *)(param_2 + 0x14) = local_18;
      *(undefined4 *)(param_2 + 0x18) = local_14;
      *(undefined2 *)(param_2 + 0x1e) = local_e;
      *(undefined2 *)(param_2 + 0x22) = local_a;
      *(undefined2 *)(param_2 + 0x20) = local_c;
      *(int *)(param_2 + 0x24) = (short)local_8 * 100000;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_20,0x1e);
    if (cVar1 != '\0') {
      if (local_4 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_4);
      }
      if (local_3 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_3);
      }
      *(undefined4 *)(param_2 + 0xc) = local_20;
      *(undefined4 *)(param_2 + 0x10) = local_1c;
      *(undefined2 *)(param_2 + 0x1c) = local_10;
      *(undefined4 *)(param_2 + 0x14) = local_18;
      *(undefined4 *)(param_2 + 0x18) = local_14;
      *(undefined2 *)(param_2 + 0x1e) = local_e;
      *(undefined2 *)(param_2 + 0x20) = local_c;
      *(undefined4 *)(param_2 + 0x24) = local_8;
      *(undefined2 *)(param_2 + 0x22) = local_a;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


