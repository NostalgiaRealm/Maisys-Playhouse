
/* ==== FUN_004794f0 @ 004794f0 ==== 
 * signature: int __thiscall FUN_004794f0(void * this, int * param_1, int param_2)
 * body: 004794f0-004795ef;00479607-0047968f
 */

int __thiscall FUN_004794f0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *unaff_FS_OFFSET;
  bool bVar8;
  byte local_140 [256];
  int *local_40;
  int local_3c;
  int local_38;
  char *local_34;
  undefined1 local_30 [24];
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004795f0;
  *unaff_FS_OFFSET = &local_10;
  sVar2 = FUN_00479330(this,(short)param_2);
  iVar6 = (int)sVar2;
  if (iVar6 != 0) {
    FUN_00430370(*(void **)((int)this + 0x54),iVar6,local_30);
    if (local_18 == (int *)0x0) {
      local_14 = FUN_00412c20(0x4a);
      local_8 = 0;
      local_18 = (int *)0x0;
      if (local_14 != (undefined4 *)0x0) {
        local_18 = FUN_0042f8d0(local_14);
      }
      local_8 = 0xffffffff;
      FUN_0042fb50(local_18,0x10,0,'\0',0);
      FUN_0042ff10(*(void **)((int)this + 0x54),iVar6,local_30);
      if (local_18 == (int *)0x0) goto LAB_0047965e;
    }
    local_14._2_2_ = *(short *)((int)local_18 + 0x26);
    iVar6 = FUN_00430190((int)local_18);
    (**(code **)(*param_1 + 0x70))(local_140);
    sVar2 = 0;
    if (0 < local_14._2_2_) {
      do {
        pbVar4 = local_140;
        iVar3 = sVar2 * 0x10 + iVar6;
        pbVar7 = *(byte **)(iVar3 + 0xc);
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00479607:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0047960c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00479607;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0047960c:
        if ((iVar5 == 0) && (*(int *)(iVar3 + 4) == param_2)) {
          FUN_004301f0((int)local_18);
          iVar6 = *(int *)(sVar2 * 0x10 + 8 + iVar6);
          goto LAB_00479669;
        }
        sVar2 = sVar2 + 1;
      } while (sVar2 < local_14._2_2_);
    }
    FUN_004301f0((int)local_18);
    local_34 = FUN_0043f650((char *)local_140);
    local_3c = param_2;
    local_40 = param_1;
    local_38 = DAT_004dc0f0;
    (**(code **)(*local_18 + 0xe8))(&local_40);
  }
LAB_0047965e:
  iVar6 = DAT_004dc0f0;
  DAT_004dc0f0 = DAT_004dc0f0 + 1;
LAB_00479669:
  *unaff_FS_OFFSET = local_10;
  return iVar6;
}


