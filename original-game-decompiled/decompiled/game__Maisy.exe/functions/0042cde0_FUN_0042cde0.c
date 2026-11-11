
/* ==== FUN_0042cde0 @ 0042cde0 ==== 
 * signature: undefined __thiscall FUN_0042cde0(void * this, byte * param_1)
 * body: 0042cde0-0042cf69
 */

void __thiscall FUN_0042cde0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  short sVar10;
  byte local_104 [256];
  
  bVar9 = false;
  if (*(int *)((int)this + 0x2a) != 0) {
    piVar8 = (int *)0x0;
    if (((*(short *)((int)this + 0x36) != 0) && (*(int *)((int)this + 4) != 0)) &&
       (iVar2 = FUN_00466a80(*(int *)((int)this + 4)), iVar2 != 0)) {
      sVar10 = *(short *)((int)this + 0x36);
      pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      piVar8 = (int *)FUN_00450230(pvVar3,sVar10);
    }
    if ((piVar8 != (int *)0x0) && (piVar8 != this)) {
      (**(code **)(*piVar8 + 0x74))(param_1);
      bVar9 = true;
    }
  }
  if (!bVar9) {
    iVar2 = 0;
    if (param_1 != (byte *)0x0) {
      (**(code **)(*(int *)this + 0x70))(local_104);
      pbVar6 = local_104;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0042ce80:
          iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0042ce85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0042ce80;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_0042ce85:
      if (iVar2 == 0) {
        return;
      }
      uVar7 = 0xffffffff;
      pbVar6 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      iVar2 = ~uVar7 - 1;
    }
    if (*(LPVOID *)((int)this + 0x2e) != (LPVOID)0x0) {
      FUN_0043f6d0(*(LPVOID *)((int)this + 0x2e));
      *(undefined4 *)((int)this + 0x2e) = 0;
    }
    if ((param_1 != (byte *)0x0) && (iVar2 != 0)) {
      if (0xff < iVar2) {
        param_1[0xff] = 0;
      }
      pcVar5 = FUN_0043f650((char *)param_1);
      *(char **)((int)this + 0x2e) = pcVar5;
    }
  }
  if (DAT_004dbdc4 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(1);
  }
  if ((((*(int *)((int)this + 0x2a) == 0) && (piVar8 = FUN_0042c350(this), piVar8 != (int *)0x0)) &&
      (*(int **)((int)this + 0x3a) != (int *)0x0)) &&
     ((iVar2 = FUN_0040c620(*(int **)((int)this + 0x3a)), iVar2 != 0 &&
      (iVar2 = FUN_0040c620(*(int **)((int)this + 0x3a)), *(char *)(iVar2 + 0xa4) == '\0')))) {
    for (piVar8 = (int *)(**(code **)(*(int *)this + 0x218))();
        (piVar8 != (int *)0x0 && (*(int *)((int)piVar8 + 0x2a) == 0));
        piVar8 = (int *)(**(code **)(*piVar8 + 0x218))()) {
    }
    if ((*(int *)((int)piVar8 + 0x2a) != 0) && (*(int *)((int)this + 4) != 0)) {
      pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      FUN_004510f0(pvVar3,piVar8);
    }
  }
  return;
}


