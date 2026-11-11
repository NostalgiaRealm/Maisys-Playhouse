
/* ==== FUN_11014fe0 @ 11014fe0 ==== 
 * signature: short __cdecl FUN_11014fe0(undefined4 * param_1, short * param_2, undefined2 * param_3, int param_4, undefined2 * param_5)
 * body: 11014fe0-1101507d
 */

short __cdecl
FUN_11014fe0(undefined4 *param_1,short *param_2,undefined2 *param_3,int param_4,undefined2 *param_5)

{
  short sVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined2 local_10 [8];
  
  sVar1 = FUN_1101d0b0(param_1,param_4,param_2,local_10);
  if (sVar1 == 0) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      local_18 = 0x76;
      local_17 = 0x61;
      local_16 = 0x6c;
      local_15 = 0x75;
      local_14 = 0x65;
      local_13 = 0;
      puVar3 = &local_18;
    }
    else {
      puVar3 = *(undefined1 **)(*(int *)(param_4 + 0x28) + *(int *)(param_2 + 5) * 4);
    }
    sVar2 = FUN_11024e20(param_1,local_10,puVar3,param_3,*(undefined4 *)(param_2 + 9));
    sVar1 = 0;
    if (sVar2 != 0) {
      FUN_11014f70(param_1,param_5,*(undefined4 *)(param_2 + 3),(int)puVar3,0,*param_3);
      sVar1 = -0x1e;
    }
  }
  return sVar1;
}


