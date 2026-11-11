
/* ==== FUN_1101c730 @ 1101c730 ==== 
 * signature: undefined2 __cdecl FUN_1101c730(undefined4 * param_1, short * param_2, int param_3, undefined2 * param_4)
 * body: 1101c730-1101c7dd
 */

undefined2 __cdecl FUN_1101c730(undefined4 *param_1,short *param_2,int param_3,undefined2 *param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_18 = 0x76;
  local_17 = 0x61;
  local_16 = 0x6c;
  local_15 = 0x75;
  local_14 = 0x65;
  local_13 = 0;
  local_10 = 0x3e81;
  local_e = *(undefined4 *)(param_3 + 2);
  local_a = *(undefined4 *)(param_3 + 6);
  local_6 = *(undefined4 *)(param_3 + 10);
  *param_2 = 0x17;
  sVar1 = FUN_11024d70(param_1,&local_10,&local_18,param_2,0);
  *(undefined4 *)(param_3 + 2) = local_e;
  *(undefined4 *)(param_3 + 6) = local_a;
  uVar2 = 0;
  if (sVar1 != 0) {
    uVar2 = 0xffe3;
    if (param_4 != (undefined2 *)0x0) {
      FUN_1101ca20(param_1,param_4,local_e);
    }
  }
  *(undefined4 *)(param_3 + 2) = 0;
  return uVar2;
}


