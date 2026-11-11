
/* ==== FUN_0046db90 @ 0046db90 ==== 
 * signature: undefined __thiscall FUN_0046db90(void * this, char * param_1)
 * body: 0046db90-0046dcda
 */

void __thiscall FUN_0046db90(void *this,char *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(char **)((int)this + 0x2e) != (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar9 = *(char **)((int)this + 0x2e);
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  if (*(int *)((int)this + 0x56) != -1) {
    pcVar2 = *(code **)(*(int *)this + 0x10);
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) {
      iVar3 = (*pcVar2)();
      iVar3 = FUN_00466a70(iVar3);
      if (iVar3 != 0) {
        iVar3 = *(int *)((int)this + 0x56);
        pcVar9 = param_1;
        iVar4 = (*pcVar2)();
        pvVar5 = (void *)FUN_00466a70(iVar4);
        FUN_0044e840(pvVar5,iVar3,pcVar9);
        if (*param_1 != '\0') {
          return;
        }
        pvVar5 = FUN_0046da90(this,'\x01','\x01');
        if (pvVar5 == (void *)0x0) {
          return;
        }
        piVar6 = FUN_0046da90(this,'\x01','\x01');
        (**(code **)(*piVar6 + 0x70))(param_1);
        return;
      }
    }
  }
  pvVar5 = FUN_0046da90(this,'\x01','\x01');
  if (pvVar5 != (void *)0x0) {
    piVar6 = FUN_0046da90(this,'\x01','\x01');
    (**(code **)(*piVar6 + 0x70))(param_1);
    return;
  }
  if (((*(short *)((int)this + 0x60) == 0) && ((*(byte *)((int)this + 0x21) & 0x40) == 0)) &&
     (*(short *)((int)this + 0x22) != 0x43)) {
    pcVar2 = *(code **)(*(int *)this + 0x16c);
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) {
      piVar6 = (int *)(*pcVar2)();
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x18c))();
      if (pvVar5 == this) {
        uVar7 = 0xffffffff;
        pcVar9 = s_Untitled_Shared_Scene_004dc544;
        do {
          pcVar10 = pcVar9;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar9 = pcVar10 + -uVar7;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)param_1 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          param_1 = param_1 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *param_1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          param_1 = param_1 + 1;
        }
        return;
      }
    }
  }
  (**(code **)(*(int *)this + 0x2ac))(param_1);
  return;
}


