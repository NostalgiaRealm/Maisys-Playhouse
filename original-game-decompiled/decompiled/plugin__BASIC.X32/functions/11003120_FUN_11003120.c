
/* ==== FUN_11003120 @ 11003120 ==== 
 * signature: undefined __cdecl FUN_11003120(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11003120-11003294
 */

void __cdecl FUN_11003120(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_a;
  byte local_6;
  byte local_5;
  byte local_4;
  
  if (*(short *)(param_3 + 3) == 0) {
    cVar1 = FUN_11011800(param_1,*param_3,&local_20,0x1c);
    if (cVar1 != '\0') {
      if (local_a._3_1_ != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_a._3_1_);
      }
      if (local_6 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_6);
      }
      *(undefined4 *)(param_2 + 0xc) = local_20;
      *(undefined4 *)(param_2 + 0x10) = local_1c;
      *(undefined2 *)(param_2 + 0x1c) = local_10;
      *(undefined4 *)(param_2 + 0x14) = local_18;
      *(undefined4 *)(param_2 + 0x18) = local_14;
      *(undefined2 *)(param_2 + 0x1e) = local_e;
      *(undefined2 *)(param_2 + 0x50) = local_c;
      *(undefined1 *)(param_2 + 0x35) = local_a._2_1_;
      *(int *)(param_2 + 0x52) = (short)local_a * 100000;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
    }
  }
  else {
    cVar1 = FUN_11011800(param_1,*param_3,&local_20,0x1e);
    if (cVar1 != '\0') {
      if (local_5 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_5);
      }
      if (local_4 != 0) {
        FUN_11011880(param_1,*param_3,(uint)local_4);
      }
      *(undefined4 *)(param_2 + 0xc) = local_20;
      *(undefined4 *)(param_2 + 0x10) = local_1c;
      *(undefined2 *)(param_2 + 0x1c) = local_10;
      *(undefined4 *)(param_2 + 0x14) = local_18;
      *(undefined2 *)(param_2 + 0x1e) = local_e;
      *(undefined4 *)(param_2 + 0x18) = local_14;
      *(undefined2 *)(param_2 + 0x50) = local_c;
      *(undefined4 *)(param_2 + 0x52) = local_a;
      *(byte *)(param_2 + 0x35) = local_6;
      *(undefined1 *)((int)param_3 + 0x12) = 1;
      return;
    }
  }
  return;
}


