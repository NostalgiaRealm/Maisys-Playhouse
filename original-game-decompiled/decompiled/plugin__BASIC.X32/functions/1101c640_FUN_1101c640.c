
/* ==== FUN_1101c640 @ 1101c640 ==== 
 * signature: undefined2 __cdecl FUN_1101c640(undefined4 * param_1, short * param_2, undefined4 param_3, undefined2 * param_4)
 * body: 1101c640-1101c6bf
 */

undefined2 __cdecl
FUN_1101c640(undefined4 *param_1,short *param_2,undefined4 param_3,undefined2 *param_4)

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
  
  local_18 = 0x76;
  local_17 = 0x61;
  local_16 = 0x6c;
  local_15 = 0x75;
  local_14 = 0x65;
  local_13 = 0;
  local_10 = 2;
  *param_2 = 0x17;
  local_e = param_3;
  sVar1 = FUN_11024d70(param_1,&local_10,&local_18,param_2,0);
  uVar2 = 0;
  if (sVar1 != 0) {
    if (param_4 != (undefined2 *)0x0) {
      FUN_1101ca20(param_1,param_4,param_3);
    }
    uVar2 = 0xffe3;
  }
  return uVar2;
}


