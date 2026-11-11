
/* ==== FUN_00420af0 @ 00420af0 ==== 
 * signature: int __thiscall FUN_00420af0(void * this, int param_1, uint param_2)
 * body: 00420af0-00420daf
 */

int __thiscall FUN_00420af0(void *this,int param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  SIZE_T SVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  int local_8;
  
  piVar6 = (int *)0x0;
  local_8 = 0;
  if (DAT_004da3ac != (int *)0x0) {
    pvVar1 = FUN_0046da90(DAT_004da3ac,'\x01','\x01');
    if ((pvVar1 == this) && ((*(byte *)(DAT_004da3ac + 8) & 0x40) != 0)) {
      piVar6 = DAT_004da3ac;
    }
  }
  if (*(int *)((int)this + 0x152) != 0) {
    if (*(char *)((int)this + 0x1de) != '\0') {
      sVar5 = 0;
      if (0 < *(int *)((int)this + 0x1d6)) {
        do {
          if (param_1 <= local_8) break;
          if (piVar6 == (int *)0x0) {
LAB_00420b6b:
            if (*(uint *)(*(int *)((int)this + 0x152) + sVar5 * 0x3a) >> 0x10 <= param_2) {
              SVar3 = FUN_00421300(this,(int)sVar5);
              local_8 = local_8 + SVar3;
            }
          }
          else {
            iVar2 = (**(code **)(*piVar6 + 0x4a8))();
            if (iVar2 != sVar5) goto LAB_00420b6b;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)((int)this + 0x1d6));
      }
      sVar5 = (short)*(undefined4 *)((int)this + 0x1da) + 1;
      if (sVar5 < *(short *)((int)this + 0x176)) {
        do {
          if (param_1 <= local_8) break;
          if (piVar6 == (int *)0x0) {
LAB_00420bd1:
            if (*(uint *)(*(int *)((int)this + 0x152) + sVar5 * 0x3a) >> 0x10 <= param_2) {
              SVar3 = FUN_00421300(this,(int)sVar5);
              local_8 = local_8 + SVar3;
            }
          }
          else {
            iVar2 = (**(code **)(*piVar6 + 0x4a8))();
            if (iVar2 != sVar5) goto LAB_00420bd1;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < *(short *)((int)this + 0x176));
      }
    }
    sVar5 = 0;
    if (0 < *(short *)((int)this + 0x176)) {
      do {
        if (param_1 <= local_8) break;
        if (piVar6 == (int *)0x0) {
LAB_00420c30:
          if (*(uint *)(*(int *)((int)this + 0x152) + sVar5 * 0x3a) >> 0x10 <= param_2) {
            SVar3 = FUN_00421300(this,(int)sVar5);
            local_8 = local_8 + SVar3;
          }
        }
        else {
          iVar2 = (**(code **)(*piVar6 + 0x4a8))();
          if (iVar2 != sVar5) goto LAB_00420c30;
        }
        sVar5 = sVar5 + 1;
      } while (sVar5 < *(short *)((int)this + 0x176));
    }
  }
  if (((local_8 < param_1) && (*(HGLOBAL *)((int)this + 0x1ca) != (HGLOBAL)0x0)) &&
     (*(char *)((int)this + 0x1df) == '\0')) {
    SVar3 = GlobalSize(*(HGLOBAL *)((int)this + 0x1ca));
    local_8 = local_8 + SVar3;
    FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x1ca));
    *(undefined4 *)((int)this + 0x1ca) = 0;
  }
  if (((local_8 < param_1) && (*(HGLOBAL *)((int)this + 0x1ce) != (HGLOBAL)0x0)) &&
     (*(char *)((int)this + 0x1df) == '\0')) {
    SVar3 = GlobalSize(*(HGLOBAL *)((int)this + 0x1ce));
    local_8 = local_8 + SVar3;
    FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x1ce));
    *(undefined4 *)((int)this + 0x1ce) = 0;
  }
  if ((*(int *)((int)this + 0x194) != 0) && (sVar5 = 0, 0 < *(short *)((int)this + 0x176))) {
    do {
      iVar2 = sVar5 * 0x30;
      iVar4 = *(int *)((int)this + 0x194) + iVar2;
      if ((*(char *)(iVar4 + 2) != '\0') &&
         ((*(uint *)(*(int *)((int)this + 0x152) + sVar5 * 0x3a) & 0xffff) <= param_2)) {
        SVar3 = GlobalSize(*(HGLOBAL *)(iVar4 + 0x1c));
        local_8 = local_8 + SVar3;
        FUN_0043f7a0(*(HGLOBAL *)(*(int *)((int)this + 0x194) + 0x1c + iVar2));
        *(undefined4 *)(*(int *)((int)this + 0x194) + 0x1c + iVar2) = 0;
        *(undefined1 *)(*(int *)((int)this + 0x194) + 2 + iVar2) = 0;
        if (param_1 <= local_8) break;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < *(short *)((int)this + 0x176));
  }
  if (local_8 < param_1) {
    iVar2 = FUN_0041e220(this,param_1 - local_8,param_2);
    local_8 = local_8 + iVar2;
  }
  return local_8;
}


