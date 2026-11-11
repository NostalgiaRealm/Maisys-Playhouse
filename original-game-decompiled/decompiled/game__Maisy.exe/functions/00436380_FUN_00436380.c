
/* ==== FUN_00436380 @ 00436380 ==== 
 * signature: undefined4 __thiscall FUN_00436380(void * this, int param_1)
 * body: 00436380-00436459
 */

undefined4 __thiscall FUN_00436380(void *this,int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_cc [36];
  int local_a8 [35];
  undefined2 local_1a;
  undefined *local_18;
  undefined4 local_14;
  int local_c;
  void *local_8;
  
  local_8 = this;
  FUN_00436e90((int)this + *(short *)(param_1 + 0x4c) * 0x124 + 0x26);
  local_18 = &DAT_004e0214;
  local_1a = 2;
  local_14 = DAT_004e0210;
  piVar4 = local_a8;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_c = 0;
  if (-1 < *(short *)(param_1 + 0x50)) {
    piVar4 = local_a8;
    do {
      iVar3 = FUN_00434920(DAT_004d99ac,0x400,1);
      if (iVar3 == 0) {
        FUN_004a3538();
      }
      *piVar4 = iVar3;
      piVar4 = piVar4 + 1;
      local_c = local_c + 1;
    } while (local_c <= *(short *)(param_1 + 0x50));
  }
  FUN_00436460(local_8,param_1,local_cc);
  FUN_00436480(local_8,(int)local_cc,param_1);
  DVar1 = timeGetTime();
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 1;
  *(uint *)(param_1 + 0x5a) = (DVar1 * 6) / 100;
  uVar2 = FUN_00436e30();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


