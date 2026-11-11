
/* ==== FUN_00429060 @ 00429060 ==== 
 * signature: int __thiscall FUN_00429060(void * this, HGLOBAL param_1, short * param_2, undefined4 param_3, short * param_4)
 * body: 00429060-00429386
 */

int __thiscall
FUN_00429060(void *this,HGLOBAL param_1,short *param_2,undefined4 param_3,short *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  LPVOID pvVar10;
  uint uVar11;
  code *pcVar12;
  short local_18 [3];
  undefined2 local_12;
  short local_10 [2];
  undefined4 local_c;
  uint local_8;
  
  pbVar8 = GlobalLock(param_1);
  if ((((uint)pbVar8[2] | (uint)*pbVar8 << 0x10) << 8 | (uint)pbVar8[1] << 0x10 | (uint)pbVar8[3])
      != 1) {
    if (*(int *)((int)this + 0x1a) == 0) {
      bVar1 = pbVar8[6];
      bVar2 = pbVar8[7];
      bVar3 = pbVar8[10];
      bVar4 = pbVar8[0xb];
      bVar5 = pbVar8[0xe];
      bVar6 = pbVar8[0xf];
      *(undefined2 *)((int)this + 4) = 0;
      *(undefined2 *)((int)this + 2) = 0;
      *(short *)((int)this + 6) = CONCAT11(bVar3,bVar4);
      *(ushort *)((int)this + 0x18) = CONCAT11(bVar1,bVar2) * CONCAT11(bVar3,bVar4) + 3U & 0xfffc;
      *(ushort *)((int)this + 8) = CONCAT11(bVar5,bVar6);
      *(short *)((int)this + 0x12) = CONCAT11(bVar1,bVar2) << 3;
      *(undefined4 *)((int)this + 0xe) = 0x480000;
      *(undefined4 *)((int)this + 10) = 0x480000;
    }
    if (*(int *)((int)this + 0x44) == 0) {
      local_c = (uint)*(short *)((int)this + 0x18);
      iVar9 = FUN_0047c7d0(0,param_1,0,&local_c,(uint *)0x0,(undefined4 *)((int)this + 0x1a),
                           (uint *)((int)this + 0x1e));
    }
    else {
      local_c = (uint)*(short *)((int)this + 0x4c);
      iVar9 = FUN_0047cd40(0,param_1,param_2,&local_c,(short *)((int)this + 0x4e),
                           *(int *)((int)this + 0x44),(int *)0x0);
      *(undefined4 *)((int)this + 0x1e) = 0;
    }
    GlobalUnlock(param_1);
    if (iVar9 != 0) {
      return iVar9;
    }
    *(undefined1 *)this = 1;
    *(undefined1 *)((int)this + 1) = 0;
    return 0;
  }
  if (*(HGLOBAL *)((int)this + 0x1a) == (HGLOBAL)0x0) {
    if (*(int *)((int)this + 0x44) == 0) {
      return 0x10000;
    }
  }
  else if (*(int *)((int)this + 0x44) == 0) {
    pvVar10 = GlobalLock(*(HGLOBAL *)((int)this + 0x1a));
    local_c = (uint)pbVar8[8];
    local_c = (local_c << 0x10 | (uint)pbVar8[10]) << 8 | (uint)pbVar8[9] << 0x10 |
              (uint)pbVar8[0xb];
    local_12 = CONCAT11(pbVar8[0xe],pbVar8[0xf]);
    local_8 = (uint)pbVar8[0x12];
    uVar11 = (uint)pbVar8[0x10] << 0x10 | local_8;
    local_8 = (uint)pbVar8[0x11];
    uVar7 = local_8 << 0x10;
    local_18[0] = 0;
    local_8 = (uint)pbVar8[0x13];
    local_18[1] = 0;
    local_18[2] = (undefined2)local_c;
    iVar9 = FUN_004285e0((int)pvVar10,(int)*(short *)((int)this + 0x18),local_18,
                         (ushort *)(pbVar8 + 0x14),uVar11 << 8 | uVar7 | local_8,1);
    pcVar12 = GlobalUnlock_exref;
    GlobalUnlock(*(HGLOBAL *)((int)this + 0x1a));
    goto LAB_00429376;
  }
  local_10[0] = 0;
  local_10[1] = 0;
  local_c = CONCAT22(CONCAT11(pbVar8[0xe],pbVar8[0xf]),CONCAT11(pbVar8[10],pbVar8[0xb]));
  iVar9 = FUN_00428810(*(int *)((int)this + 0x44),local_10,pbVar8 + 0x14,
                       ((uint)pbVar8[0x10] << 0x10 | (uint)pbVar8[0x12]) << 8 |
                       (uint)pbVar8[0x11] << 0x10 | (uint)pbVar8[0x13],1,
                       *(short *)((int)this + 0x4c),param_2,(short *)((int)this + 0x4e),param_4);
  pcVar12 = GlobalUnlock_exref;
LAB_00429376:
  (*pcVar12)(param_1);
  return iVar9;
}


