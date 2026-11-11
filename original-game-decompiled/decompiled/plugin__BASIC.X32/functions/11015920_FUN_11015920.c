
/* ==== FUN_11015920 @ 11015920 ==== 
 * signature: undefined __cdecl FUN_11015920(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11015920-110159d6
 */

void __cdecl FUN_11015920(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint local_1c;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  byte local_2;
  byte local_1;
  
  cVar1 = FUN_11011800(param_1,*param_3,&local_1c,0x1c);
  if (cVar1 != '\0') {
    if (local_2 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_2);
    }
    if (local_1 != 0) {
      FUN_11011880(param_1,*param_3,(uint)local_1);
    }
    FUN_11006290(&local_1c,'\0');
    *(uint *)(param_2 + 0xc) = local_1c;
    *(undefined4 *)(param_2 + 0x12) = local_16;
    *(undefined4 *)(param_2 + 0x1a) = local_e;
    *(undefined2 *)(param_2 + 0x22) = local_6;
    *(undefined4 *)(param_2 + 0x16) = local_12;
    *(undefined4 *)(param_2 + 0x1e) = local_a;
    *(undefined2 *)(param_2 + 0x10) = local_18;
    *(undefined2 *)(param_2 + 0x24) = local_4;
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


