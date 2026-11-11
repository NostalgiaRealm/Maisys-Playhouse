
/* ==== FUN_0047b210 @ 0047b210 ==== 
 * signature: undefined __thiscall FUN_0047b210(void * this, short * param_1, short * param_2, int param_3, int param_4, HDC param_5)
 * body: 0047b210-0047b412
 */

void __thiscall
FUN_0047b210(void *this,short *param_1,short *param_2,int param_3,int param_4,HDC param_5)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int cx;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int cy;
  undefined4 local_1c;
  int local_18;
  int local_14;
  code *local_c;
  
  local_c = (code *)0x0;
  local_1c = 0;
  bVar3 = false;
  cx = (int)param_1[2] - (int)*param_1;
  if ((*(byte *)((int)this + 0x1134) & 0x80) != 0) {
    sVar1 = *(short *)((int)this + 0x2a);
    if ((*(short *)((int)this + 0xd0a) == 0x10) && (sVar1 == 0x10)) {
      local_c = FUN_0047b030;
    }
    else if (*(short *)((int)this + 0xd0a) == 8) {
      if (*(int *)((int)this + 0xcf4) == 0) {
        puVar4 = (undefined4 *)FUN_00434920(DAT_004d99ac,0x1000,0);
        *(undefined4 **)((int)this + 0xcf4) = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00451fc0((int)this + 0x54,puVar4);
        }
      }
      local_1c = *(undefined4 *)((int)this + 0xcf4);
      if (*(short *)((int)this + 0x2a) == 0x10) {
        local_c = FUN_0047b0c0;
      }
      else if (*(short *)((int)this + 0x2a) == 0x20) {
        local_c = FUN_0047b1b0;
      }
    }
    if (local_c != (code *)0x0) {
      iVar7 = (int)param_1[1];
      iVar5 = (int)param_1[3];
      local_14 = (int)param_2[1];
      iVar6 = *(int *)((int)this + 0xd00) * (uint)*(ushort *)((int)this + 0xd0a);
      uVar2 = *(undefined4 *)((int)this + 0x1130);
      local_18 = param_4 + (int)*param_1 *
                           (int)(short)((int)((int)sVar1 + ((int)sVar1 >> 0x1f & 7U)) >> 3) +
                           iVar7 * param_3;
      if (iVar7 < iVar5) {
        do {
          cy = iVar5 - iVar7;
          if (0x10 < cy) {
            cy = 0x10;
          }
          iVar7 = iVar7 + 0x10;
          (*local_c)(local_18,uVar2,param_3,
                     ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 3U & 0xfffffffc,cx,cy,local_1c);
          BitBlt(*(HDC *)((int)this + 0xcdc),(int)*param_2,local_14,cx,cy,
                 *(HDC *)((int)this + 0xcf8),0,0,0xcc0020);
          GdiFlush();
          local_14 = local_14 + 0x10;
          local_18 = local_18 + param_3 * 0x10;
        } while (iVar7 < iVar5);
      }
      bVar3 = true;
    }
  }
  if (!bVar3) {
    BitBlt(*(HDC *)((int)this + 0xcdc),(int)*param_2,(int)param_2[1],cx,
           (int)param_2[3] - (int)param_2[1],param_5,(int)*param_1,(int)param_1[1],0xcc0020);
    GdiFlush();
  }
  return;
}


