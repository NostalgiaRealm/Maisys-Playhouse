
/* ==== FUN_11005160 @ 11005160 ==== 
 * signature: undefined __cdecl FUN_11005160(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11005160-11005221
 */

void __cdecl FUN_11005160(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  byte local_4;
  byte local_3;
  byte local_2;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_24,0x24);
  if (cVar1 != '\0') {
    if (local_4 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_4);
    }
    if (local_3 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_3);
    }
    if (local_2 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_2);
    }
    *(undefined4 *)(param_2 + 0xc) = local_24;
    *(undefined4 *)(param_2 + 0x10) = local_20;
    *(undefined4 *)(param_2 + 0x14) = local_1c;
    *(undefined4 *)(param_2 + 0x18) = local_18;
    *(undefined4 *)(param_2 + 0x1c) = local_14;
    if (*(int *)(param_2 + 0x20) == 1) {
      *(undefined4 *)(param_2 + 0x20) = local_10;
      *(undefined4 *)(param_2 + 0x24) = local_c;
    }
    *(undefined4 *)(param_2 + 0x28) = local_8;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


