
/* ==== FUN_00420e80 @ 00420e80 ==== 
 * signature: undefined __thiscall FUN_00420e80(void * this, int param_1, short param_2)
 * body: 00420e80-00421115
 */

void __thiscall FUN_00420e80(void *this,int param_1,short param_2)

{
  uint *puVar1;
  bool bVar2;
  void *pvVar3;
  char cVar4;
  short sVar5;
  HPSTR pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int local_c;
  HGLOBAL local_8;
  
  (**(code **)(*(int *)this + 0x114))();
  pvVar3 = DAT_004da3a0;
  if ((*(int *)((int)this + 0x188) == 0x2e524c45) && ((*(byte *)((int)this + 0x16d) & 0x80) == 0)) {
    if ((*(int *)((int)this + 0x15a) == 0) ||
       (*(int *)(*(int *)((int)this + 0x15a) + param_1 * 4) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
  }
  else {
    cVar4 = '\x01' - (*(int *)(*(int *)((int)this + 0x152) + 0x32 + param_1 * 0x3a) == 0);
  }
  if (cVar4 == '\0') {
    if (DAT_004da3a0 == this) {
      DAT_004da3a0 = (void *)0x0;
    }
    iVar8 = param_1 * 0x3a;
    local_8 = FUN_0043f770(*(SIZE_T *)(*(int *)((int)this + 0x152) + 0x12 + param_1 * 0x3a));
    DAT_004da3a0 = pvVar3;
    if (local_8 == (HGLOBAL)0x0) {
      FUN_004a3538();
    }
    pcVar6 = GlobalLock(local_8);
    FUN_0040e0e0(this,*(int *)(*(int *)((int)this + 0x152) + 0xc + iVar8) +
                      *(int *)((int)this + 0x74));
    FUN_0040e180(this,pcVar6,*(int *)(*(int *)((int)this + 0x152) + 0x12 + iVar8));
    FUN_00421120();
    GlobalUnlock(local_8);
    if ((*(int *)((int)this + 0x188) == 0x2e524c45) && ((*(byte *)((int)this + 0x16d) & 0x80) == 0))
    {
      if (*(int *)((int)this + 0x15a) == 0) {
        uVar7 = FUN_00434920(DAT_004d99ac,(int)*(short *)((int)this + 0x176) << 2,0);
        *(undefined4 *)((int)this + 0x15a) = uVar7;
        sVar5 = 0;
        if (0 < *(short *)((int)this + 0x176)) {
          do {
            iVar8 = (int)sVar5;
            sVar5 = sVar5 + 1;
            *(undefined4 *)(*(int *)((int)this + 0x15a) + iVar8 * 4) = 0;
          } while (sVar5 < *(short *)((int)this + 0x176));
        }
      }
      if (*(int *)((int)this + 0x15a) != 0) {
        *(HGLOBAL *)(*(int *)((int)this + 0x15a) + param_1 * 4) = local_8;
      }
    }
    else {
      *(HGLOBAL *)(*(int *)((int)this + 0x152) + 0x32 + iVar8) = local_8;
      *(undefined1 *)(*(int *)((int)this + 0x152) + 0x19 + iVar8) = 0;
    }
  }
  puVar1 = (uint *)(*(int *)((int)this + 0x152) + param_1 * 0x3a);
  *puVar1 = param_2 * 0x10000 + (*puVar1 & 0xffff);
  if (*(int *)((int)this + 0x166) == 0) {
    iVar8 = FUN_00434920(DAT_004d99ac,(int)*(short *)((int)this + 0x176),1);
    *(int *)((int)this + 0x166) = iVar8;
    if (iVar8 == 0) {
      FUN_004a3538();
    }
  }
  *(undefined1 *)(*(int *)((int)this + 0x166) + param_1) = 1;
  if (*(int *)((int)this + 0x162) != 0) {
    *(undefined1 *)(param_1 + *(int *)((int)this + 0x162)) = 0;
  }
  if ((*(int *)((int)this + 0x15e) != 0) &&
     (uVar9 = 1, *(int *)(*(int *)((int)this + 0x15e) + 0x26) != 0)) {
    do {
      local_8 = (HGLOBAL)0x0;
      local_c = 0;
      FUN_00430370(*(void **)((int)this + 0x15e),uVar9,&local_c);
      bVar2 = true;
      if (local_c <= (int)local_8) {
        iVar8 = local_c;
        do {
          if (*(char *)(*(int *)((int)this + 0x166) + iVar8) == '\0') {
            bVar2 = false;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 <= (int)local_8);
      }
      if (bVar2) {
        (**(code **)(*(int *)this + 0x238))(&local_c);
        FUN_00430090(*(void **)((int)this + 0x15e),uVar9);
      }
      else {
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 <= *(uint *)(*(int *)((int)this + 0x15e) + 0x26));
  }
  return;
}


