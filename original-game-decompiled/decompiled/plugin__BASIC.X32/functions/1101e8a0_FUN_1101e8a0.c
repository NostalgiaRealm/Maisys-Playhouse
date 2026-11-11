
/* ==== FUN_1101e8a0 @ 1101e8a0 ==== 
 * signature: undefined __cdecl FUN_1101e8a0(undefined4 * param_1, int param_2)
 * body: 1101e8a0-1101e99f
 */

void __cdecl FUN_1101e8a0(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 2;
  if (*(short *)(param_2 + 0x1e) == 0x16) {
    local_14 = *(undefined4 *)(param_2 + 0x1e);
    local_10 = *(undefined4 *)(param_2 + 0x22);
    local_c = *(undefined4 *)(param_2 + 0x26);
    local_8 = *(undefined4 *)(param_2 + 0x2a);
    local_4 = *(undefined2 *)(param_2 + 0x2e);
  }
  else {
    FUN_1101e310(param_1,param_2,&local_14);
  }
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 1;
  FUN_1101e4c0(param_1,(int)&local_14,&local_18);
  *(undefined2 *)(param_2 + 0x52) = local_16;
  *(undefined2 *)(param_2 + 0x50) = local_18;
  *(undefined4 *)(param_2 + 0x54) = local_14;
  *(undefined4 *)(param_2 + 0x58) = local_10;
  *(undefined4 *)(param_2 + 0x5c) = local_c;
  *(undefined4 *)(param_2 + 0x60) = local_8;
  *(undefined2 *)(param_2 + 100) = local_4;
  DVar1 = timeGetTime();
  *(uint *)(param_2 + 0x6a) = (DVar1 * 6) / 100;
  DVar1 = timeGetTime();
  *(uint *)(param_2 + 0x70) = (DVar1 * 6) / 100 + (int)*(short *)(param_2 + 0x6e);
  *(undefined2 *)(param_2 + 0x68) = 0;
  *(undefined2 *)(param_2 + 0x66) = 0;
  FUN_11004840(param_1,10,1);
  FUN_1101e7a0(0x1f5,param_1);
  return;
}


