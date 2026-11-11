
/* ==== FUN_00436230 @ 00436230 ==== 
 * signature: undefined4 __thiscall FUN_00436230(void * this, int param_1)
 * body: 00436230-004362d4
 */

undefined4 __thiscall FUN_00436230(void *this,int param_1)

{
  ulonglong uVar1;
  DWORD DVar2;
  undefined4 local_c4 [41];
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_12;
  short local_8;
  
  local_12 = 0;
  local_1e = 0;
  local_20 = 0;
  local_8 = 0;
  local_1a = 0;
  FUN_004374c0(local_c4,(undefined4 *)&DAT_004da40c);
  FUN_00436460(this,param_1,local_c4);
  if (local_8 < 1) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 0x20;
  }
  else {
    *(undefined2 *)(param_1 + 0x46) = local_1e;
    *(undefined4 *)(param_1 + 0x52) = local_1a;
    *(undefined4 *)(param_1 + 0x74) = local_16;
    *(undefined2 *)(param_1 + 0x7a) = local_20;
    FUN_004374c0((undefined4 *)(param_1 + 0x14),local_c4);
  }
  DVar2 = timeGetTime();
  uVar1 = (ulonglong)(DVar2 * 6) / 100;
  *(int *)(param_1 + 0x5a) = (int)uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


