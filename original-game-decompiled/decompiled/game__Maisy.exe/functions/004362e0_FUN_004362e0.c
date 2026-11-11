
/* ==== FUN_004362e0 @ 004362e0 ==== 
 * signature: undefined4 __thiscall FUN_004362e0(void * this, undefined4 * param_1)
 * body: 004362e0-00436374
 */

undefined4 __thiscall FUN_004362e0(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined1 local_c4 [17];
  undefined4 local_b3 [4];
  undefined2 local_a2;
  undefined2 local_1c;
  undefined2 local_12;
  
  FUN_00436e90((int)this + *(short *)(param_1 + 0x13) * 0x124 + 0x26);
  local_12 = 1;
  local_a2 = 0;
  local_1c = 0xffff;
  FUN_00436460(this,(int)param_1,local_c4);
  *(undefined2 *)(param_1 + 0x14) = local_a2;
  FUN_004374c0(param_1,local_b3);
  *(undefined2 *)((int)param_1 + 0x12) = local_1c;
  DVar1 = timeGetTime();
  *(uint *)((int)param_1 + 0x5a) = (DVar1 * 6) / 100;
  uVar2 = FUN_00436e30();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


