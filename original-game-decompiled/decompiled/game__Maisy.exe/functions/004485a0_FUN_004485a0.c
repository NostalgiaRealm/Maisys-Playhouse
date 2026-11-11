
/* ==== FUN_004485a0 @ 004485a0 ==== 
 * signature: uint __thiscall FUN_004485a0(void * this, int param_1, short param_2)
 * body: 004485a0-0044860f
 */

uint __thiscall FUN_004485a0(void *this,int param_1,short param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  
  iVar3 = FUN_00430190(*(int *)((int)this + 0x2a));
  sVar2 = *(short *)(*(int *)((int)this + 0x2a) + 0x26);
  uVar6 = (uint)this & 0xffff0000;
  if (0 < sVar2) {
    do {
      piVar1 = (int *)(iVar3 + (short)uVar6 * 0xc);
      if ((*piVar1 == param_1) && ((param_2 == 0 || ((short)piVar1[1] == param_2)))) break;
      sVar5 = (short)uVar6 + 1;
      uVar6 = CONCAT22((short)(uVar6 >> 0x10),sVar5);
    } while (sVar5 < sVar2);
  }
  uVar4 = FUN_004301f0(*(int *)((int)this + 0x2a));
  if ((short)uVar6 < sVar2) {
    return uVar6 + 1;
  }
  return uVar4 & 0xffff0000;
}


