
/* ==== FUN_004069c0 @ 004069c0 ==== 
 * signature: undefined4 __thiscall FUN_004069c0(void * this, short * param_1)
 * body: 004069c0-00406b55
 */

undefined4 __thiscall FUN_004069c0(void *this,short *param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  
  sVar9 = *(short *)(*(int *)((int)this + 0x56) + 0x26);
  iVar5 = FUN_00430190(*(int *)((int)this + 0x56));
  do {
    do {
      sVar9 = sVar9 + -1;
      if (sVar9 < 0) {
        FUN_004301f0(*(int *)((int)this + 0x56));
        iVar6 = FUN_00430190(*(int *)((int)this + 0x52));
        iVar5 = *(int *)((int)this + 0x52);
        sVar9 = (short)*(undefined4 *)(iVar5 + 0x26);
        do {
          do {
            sVar9 = sVar9 + -1;
            if (sVar9 < 0) {
              FUN_004301f0(iVar5);
              return 0;
            }
            iVar1 = sVar9 * 0x1a + iVar6;
          } while (*(char *)(iVar1 + 0x18) == '\0');
          sVar7 = param_1[1];
          if (param_1[1] <= *(short *)(iVar1 + 6)) {
            sVar7 = *(short *)(iVar1 + 6);
          }
          sVar8 = param_1[3];
          if (*(short *)(iVar1 + 10) <= param_1[3]) {
            sVar8 = *(short *)(iVar1 + 10);
          }
          sVar10 = param_1[2];
          if (*(short *)(iVar1 + 8) <= param_1[2]) {
            sVar10 = *(short *)(iVar1 + 8);
          }
          sVar2 = *(short *)(iVar1 + 4);
          if (*(short *)(iVar1 + 4) <= *param_1) {
            sVar2 = *param_1;
          }
          if ((sVar10 <= sVar2) || (bVar4 = true, sVar8 <= sVar7)) {
            bVar4 = false;
          }
        } while (!bVar4);
        uVar3 = *(undefined4 *)(sVar9 * 0x1a + iVar6);
        FUN_004301f0(iVar5);
        return uVar3;
      }
      iVar6 = sVar9 * 0x1a + iVar5;
    } while (*(char *)(iVar6 + 0x18) == '\0');
    sVar7 = param_1[1];
    if (param_1[1] <= *(short *)(iVar6 + 6)) {
      sVar7 = *(short *)(iVar6 + 6);
    }
    sVar8 = param_1[3];
    if (*(short *)(iVar6 + 10) <= param_1[3]) {
      sVar8 = *(short *)(iVar6 + 10);
    }
    sVar10 = param_1[2];
    if (*(short *)(iVar6 + 8) <= param_1[2]) {
      sVar10 = *(short *)(iVar6 + 8);
    }
    sVar2 = *(short *)(iVar6 + 4);
    if (*(short *)(iVar6 + 4) <= *param_1) {
      sVar2 = *param_1;
    }
    if ((sVar10 <= sVar2) || (bVar4 = true, sVar8 <= sVar7)) {
      bVar4 = false;
    }
  } while (!bVar4);
  uVar3 = *(undefined4 *)(sVar9 * 0x1a + iVar5);
  FUN_004301f0(*(int *)((int)this + 0x56));
  return uVar3;
}


