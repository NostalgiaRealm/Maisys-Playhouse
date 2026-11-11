
/* ==== FUN_12003350 @ 12003350 ==== 
 * signature: int __thiscall FUN_12003350(void * this, int param_1)
 * body: 12003350-12003587
 */

int __thiscall FUN_12003350(void *this,int param_1)

{
  undefined2 uVar1;
  short sVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int *this_00;
  byte *pbVar9;
  int local_c;
  uint local_8;
  byte *local_4;
  
  local_c = 0;
  sVar8 = -1;
  FUN_120032b0((int)this);
  if (param_1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0xc) = param_1;
  pbVar3 = (byte *)FUN_12015f80(param_1);
  *(byte **)((int)this + 0x16) = pbVar3;
  iVar4 = FUN_12015f30(*(int *)((int)this + 0xc));
  local_4 = pbVar3 + iVar4 + -8;
  *(undefined4 *)((int)this + 0x2a) = 500000;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0xffffffff;
  pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x17,(int *)&local_8);
  DAT_12039a9c = (*pcVar5)(local_8,(int)this + 0x52,0xff,0x10);
  if (pbVar3 < local_4) {
    do {
      uVar6 = FUN_12003300(pbVar3);
      local_8 = FUN_12003300(pbVar3 + 4);
      pbVar9 = pbVar3 + 8;
      if (uVar6 == 0x4d546864) {
        FUN_12003330(pbVar9);
        uVar1 = FUN_12003330(pbVar3 + 10);
        *(undefined2 *)((int)this + 0x10) = uVar1;
        sVar2 = FUN_12003330(pbVar3 + 0xc);
        *(short *)((int)this + 0x1c) = sVar2;
        if (sVar2 < 0) {
LAB_1200354c:
          local_c = 3;
          break;
        }
        sVar8 = 0;
        FUN_12011340((int)sVar2,1000000,(undefined4 *)((int)this + 0x1e));
        iVar4 = FUN_12015de0(*(short *)((int)this + 0x10) * 0x3c);
        *(int *)((int)this + 0x12) = iVar4;
        if (iVar4 == 0) {
          local_c = 1;
          break;
        }
        iVar4 = 0;
        if (0 < *(short *)((int)this + 0x10)) {
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 0x3c;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(*(int *)((int)this + 0x12) + -0x3c + iVar7) = 0;
            *(undefined4 *)(*(int *)((int)this + 0x12) + -0x38 + iVar7) = 0;
            *(undefined4 *)(*(int *)((int)this + 0x12) + -0x34 + iVar7) = 0;
            *(undefined1 *)(*(int *)((int)this + 0x12) + -0x18 + iVar7) = 0;
            *(undefined1 *)(*(int *)((int)this + 0x12) + -0x17 + iVar7) = 0;
            *(undefined2 *)(*(int *)((int)this + 0x12) + -0x16 + iVar7) = 0;
            *(undefined4 *)(*(int *)((int)this + 0x12) + -0x14 + iVar7) = 0;
          } while (iVar4 < *(short *)((int)this + 0x10));
        }
      }
      else if (uVar6 == 0x4d54726b) {
        if ((sVar8 == -1) || (*(short *)((int)this + 0x10) <= sVar8)) goto LAB_1200354c;
        iVar4 = (int)sVar8;
        sVar8 = sVar8 + 1;
        this_00 = (int *)(iVar4 * 0x3c + *(int *)((int)this + 0x12));
        *this_00 = (int)this;
        this_00[1] = (int)pbVar9 - *(int *)((int)this + 0x16);
        this_00[2] = local_8;
        FUN_12003e00(this_00,*(int *)((int)this + 0x16));
        FUN_12003e20(this_00);
      }
      pbVar3 = pbVar9 + local_8;
    } while (pbVar3 < local_4);
  }
  if (*(int *)((int)this + 0x4e) == -1) {
    *(undefined4 *)((int)this + 0x4e) = *(undefined4 *)((int)this + 0x46);
  }
  if (local_c != 0) {
    FUN_120032b0((int)this);
  }
  FUN_12015fd0(*(int *)((int)this + 0xc));
  return local_c;
}


