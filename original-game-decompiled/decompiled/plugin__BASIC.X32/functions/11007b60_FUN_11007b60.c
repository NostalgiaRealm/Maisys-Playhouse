
/* ==== FUN_11007b60 @ 11007b60 ==== 
 * signature: undefined __cdecl FUN_11007b60(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11007b60-11007c61
 */

void __cdecl FUN_11007b60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_128 [6];
  undefined2 local_122;
  undefined2 local_120;
  undefined4 local_11e;
  undefined4 local_11a;
  undefined2 local_116;
  undefined2 local_114;
  undefined4 local_112;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  byte local_102;
  undefined1 local_100 [256];
  
  cVar1 = FUN_11011800(param_1,*param_3,local_128,0x28);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x24) = local_112;
    *(undefined4 *)(param_2 + 0x28) = local_10e;
    *(undefined4 *)(param_2 + 0x2c) = local_10a;
    *(undefined4 *)(param_2 + 0x30) = local_106;
    *(undefined4 *)(param_2 + 0x1c) = local_11a;
    *(undefined2 *)(param_2 + 0x20) = local_116;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined2 *)(param_2 + 0x22) = local_114;
    *(undefined2 *)(param_2 + 0x14) = local_122;
    *(undefined4 *)(param_2 + 0x18) = local_11e;
    *(undefined2 *)(param_2 + 0x16) = local_120;
    if (local_102 == 0) {
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_11002530(param_1,*(int *)(param_2 + 0x34));
      }
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    else {
      FUN_11011800(param_1,*param_3,local_100,(uint)local_102);
      local_100[local_102] = 0;
      if (*(int *)(param_2 + 0x34) != 0) {
        FUN_11002530(param_1,*(int *)(param_2 + 0x34));
      }
      uVar2 = FUN_110024d0(param_1,local_100);
      *(undefined4 *)(param_2 + 0x34) = uVar2;
    }
    *(undefined1 *)((int)param_3 + 0x12) = 1;
  }
  return;
}


