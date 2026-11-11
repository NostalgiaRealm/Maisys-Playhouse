
/* ==== FUN_004031d0 @ 004031d0 ==== 
 * signature: undefined __thiscall FUN_004031d0(void * this, undefined4 param_1)
 * body: 004031d0-004032c6
 */

void __thiscall FUN_004031d0(void *this,undefined4 param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short local_10 [3];
  short local_a;
  void *local_8;
  
  sVar5 = (short)param_1 - *(short *)((int)this + 0x148);
  sVar6 = param_1._2_2_ - *(short *)((int)this + 0x14a);
  *(undefined4 *)((int)this + 0x148) = param_1;
  sVar4 = *(short *)(*(int *)((int)this + 0x56) + 0x26);
  local_8 = this;
  iVar2 = FUN_00430190(*(int *)((int)this + 0x56));
  while (sVar4 = sVar4 + -1, -1 < sVar4) {
    iVar3 = sVar4 * 0x1a;
    psVar1 = (short *)(iVar3 + 4 + iVar2);
    *psVar1 = *psVar1 + sVar5;
    psVar1 = (short *)(iVar3 + 8 + iVar2);
    *psVar1 = *psVar1 + sVar5;
    psVar1 = (short *)(iVar3 + iVar2 + 6);
    *psVar1 = *psVar1 + sVar6;
    psVar1 = (short *)(iVar3 + iVar2 + 10);
    *psVar1 = *psVar1 + sVar6;
  }
  FUN_004301f0(*(int *)((int)local_8 + 0x56));
  iVar2 = FUN_00430190(*(int *)((int)local_8 + 0x52));
  sVar4 = (short)*(undefined4 *)(*(int *)((int)local_8 + 0x52) + 0x26);
  while (sVar4 = sVar4 + -1, -1 < sVar4) {
    iVar3 = sVar4 * 0x1a + iVar2;
    *(short *)(iVar3 + 4) = *(short *)(iVar3 + 4) + sVar5;
    *(short *)(iVar3 + 8) = *(short *)(iVar3 + 8) + sVar5;
    *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + sVar6;
    *(short *)(iVar3 + 10) = *(short *)(iVar3 + 10) + sVar6;
  }
  FUN_004301f0(*(int *)((int)local_8 + 0x52));
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = *(short *)((int)local_8 + 0xbc) - *(short *)((int)local_8 + 0xb8);
  local_a = *(short *)((int)local_8 + 0xbe) - *(short *)((int)local_8 + 0xba);
  FUN_004087c0(local_8,local_10,'\x01');
  return;
}


