
/* ==== FUN_00428df0 @ 00428df0 ==== 
 * signature: int __thiscall FUN_00428df0(void * this, HGLOBAL param_1, char param_2)
 * body: 00428df0-00429051
 */

int __thiscall FUN_00428df0(void *this,HGLOBAL param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  short sVar4;
  LPVOID pvVar5;
  int iVar6;
  LPVOID pvVar7;
  uint uVar8;
  short sVar9;
  short local_1c [3];
  undefined2 local_16;
  short local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (param_1 == (HGLOBAL)0x0) {
    return 1;
  }
  pvVar5 = GlobalLock(param_1);
  if (pvVar5 == (LPVOID)0x0) {
    return 0;
  }
  if (param_2 == '\0') {
    if (*(HGLOBAL *)((int)this + 0x1a) == (HGLOBAL)0x0) {
      return 0x10000;
    }
    pvVar7 = GlobalLock(*(HGLOBAL *)((int)this + 0x1a));
    local_10 = (CONCAT21(local_10._2_2_,*(undefined1 *)((int)pvVar5 + 4)) & 0xfffff0) << 8;
    sVar4 = CONCAT11(*(undefined1 *)((int)pvVar5 + 6),*(undefined1 *)((int)pvVar5 + 7));
    _local_14 = CONCAT22(uStack_12,sVar4);
    local_8 = (uint)*(byte *)((int)pvVar5 + 8);
    local_8 = (local_8 << 0x10 | (uint)*(byte *)((int)pvVar5 + 10)) << 8 |
              (uint)*(byte *)((int)pvVar5 + 9) << 0x10 | (uint)*(byte *)((int)pvVar5 + 0xb);
    local_16 = CONCAT11(*(undefined1 *)((int)pvVar5 + 0xe),*(undefined1 *)((int)pvVar5 + 0xf));
    local_c = (uint)*(byte *)((int)pvVar5 + 0x12);
    uVar8 = (uint)*(byte *)((int)pvVar5 + 0x10) << 0x10 | local_c;
    local_c = (uint)*(byte *)((int)pvVar5 + 0x11);
    uVar3 = local_c << 0x10;
    local_1c[0] = 0;
    local_c = (uint)*(byte *)((int)pvVar5 + 0x13);
    local_1c[1] = 0;
    local_1c[2] = (undefined2)local_8;
    iVar6 = FUN_004285e0((int)pvVar7,(int)*(short *)((int)this + 0x18),local_1c,
                         (ushort *)((int)pvVar5 + 0x14),uVar8 << 8 | uVar3 | local_c,sVar4);
    GlobalUnlock(*(HGLOBAL *)((int)this + 0x1a));
    GlobalUnlock(param_1);
  }
  else {
    if (*(int *)((int)this + 0x1a) == 0) {
      sVar9 = CONCAT11(*(undefined1 *)((int)pvVar5 + 6),*(undefined1 *)((int)pvVar5 + 7));
      sVar4 = CONCAT11(*(undefined1 *)((int)pvVar5 + 10),*(undefined1 *)((int)pvVar5 + 0xb));
      uVar1 = *(undefined1 *)((int)pvVar5 + 0xe);
      uVar2 = *(undefined1 *)((int)pvVar5 + 0xf);
      *(undefined2 *)((int)this + 4) = 0;
      *(undefined2 *)((int)this + 2) = 0;
      *(short *)((int)this + 6) = sVar4;
      *(ushort *)((int)this + 8) = CONCAT11(uVar1,uVar2);
      *(undefined4 *)((int)this + 0xe) = 0x480000;
      *(undefined4 *)((int)this + 10) = 0x480000;
      *(ushort *)((int)this + 0x18) = sVar4 * sVar9 + 3U & 0xfffc;
      *(short *)((int)this + 0x12) = sVar9 << 3;
    }
    local_8 = (uint)*(short *)((int)this + 0x18);
    iVar6 = FUN_0047c7d0(0,param_1,0,&local_8,(uint *)0x0,(undefined4 *)((int)this + 0x1a),
                         (uint *)((int)this + 0x1e));
    GlobalUnlock(param_1);
    if (iVar6 == 0) {
      *(undefined1 *)this = 1;
      *(undefined1 *)((int)this + 1) = 0;
      return 0;
    }
  }
  return iVar6;
}


