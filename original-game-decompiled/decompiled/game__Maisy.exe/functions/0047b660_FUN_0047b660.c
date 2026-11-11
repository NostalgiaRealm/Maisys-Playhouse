
/* ==== FUN_0047b660 @ 0047b660 ==== 
 * signature: uint __thiscall FUN_0047b660(void * this, byte * param_1)
 * body: 0047b660-0047b7c1
 */

uint __thiscall FUN_0047b660(void *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (uint)param_1[2];
  uVar6 = (uint)param_1[1];
  bVar1 = *param_1;
  uVar4 = (uint)bVar1;
  if (*(short *)((int)this + 0x47a) == 8) {
    if (((*(byte *)((int)this + 0x496) == uVar3) && (*(byte *)((int)this + 0x495) == uVar6)) &&
       (*(byte *)((int)this + 0x494) == uVar4)) {
      return 0;
    }
    if (((*(byte *)((int)this + 0x892) == uVar3) && (*(byte *)((int)this + 0x891) == uVar6)) &&
       (*(byte *)((int)this + 0x890) == uVar4)) {
      return 0xff;
    }
    uVar2 = (uint)*(byte *)(((uint)(bVar1 >> 4) | (uVar3 & 0xf0) << 4 | uVar6 & 0xf0) +
                           *(int *)((int)this + 0xcf4));
    pbVar5 = (byte *)((int)this + 0x494) + uVar2 * 4;
    if (((*(byte *)((int)this + uVar2 * 4 + 0x496) != uVar3) || (pbVar5[1] != uVar6)) ||
       (*pbVar5 != uVar4)) {
      uVar7 = 1;
      pbVar5 = (byte *)((int)this + 0x49a);
      while (((*pbVar5 != uVar3 || (pbVar5[-1] != uVar6)) || (pbVar5[-2] != uVar4))) {
        pbVar5 = pbVar5 + 4;
        uVar7 = uVar7 + 1;
        if (0xfe < (int)uVar7) {
          return uVar2;
        }
      }
      return uVar7;
    }
  }
  else {
    if (*(short *)((int)this + 0x47a) != 0x10) {
      return uVar3 << 0x10 | uVar6 << 8 | uVar4;
    }
    uVar2 = ((uVar3 & 0xf8) << 5 | param_1[1] & 0xf8) << 2 | (uint)(bVar1 >> 3);
  }
  return uVar2;
}


