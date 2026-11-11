
/* ==== FUN_00488d50 @ 00488d50 ==== 
 * signature: undefined __thiscall FUN_00488d50(void * this, uint param_1, undefined4 param_2, uint param_3)
 * body: 00488d50-00488dca
 */

void __thiscall FUN_00488d50(void *this,uint param_1,undefined4 param_2,uint param_3)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined2 auStack_3c [6];
  AFX_EXCEPTION_LINK aAStack_30 [28];
  undefined1 *local_14;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00488f03;
  *unaff_FS_OFFSET = &uStack_10;
  local_14 = &stack0xffffffb8;
  if (DAT_004dc57c == '\0') {
    FUN_004a8882(this);
    iVar2 = (**(code **)(*(int *)this + 0x130))();
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x50) != 0)) &&
       (*(int *)(*(int *)(iVar2 + 0x50) + 0x82) != 0)) {
      switch(param_1) {
      case 0x21:
        sVar5 = 0xb;
        break;
      case 0x22:
        sVar5 = 0xc;
        break;
      case 0x23:
        sVar5 = 4;
        break;
      case 0x24:
        sVar5 = 1;
        break;
      case 0x25:
        sVar5 = 0x1c;
        break;
      case 0x26:
        sVar5 = 0x1e;
        break;
      case 0x27:
        sVar5 = 0x1d;
        break;
      case 0x28:
        sVar5 = 0x1f;
        break;
      default:
        SVar1 = GetKeyState(0x11);
        if ((SVar1 < 0) &&
           (((param_1 < 0x3a && (0x2f < param_1)) ||
            ((param_1 == 0xc0 || ((param_1 == 0xbb || (param_1 == 0xbd)))))))) {
          FUN_00489050((int *)&param_1);
          sVar5 = (short)param_1;
        }
        else {
          sVar5 = -1;
        }
        break;
      case 0x2e:
        sVar5 = 0x7f;
        break;
      case 0x2f:
      case 0x70:
        sVar5 = 5;
      }
      if (0 < sVar5) {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(aAStack_30);
        uStack_8 = 1;
        FUN_00488fa0((int)sVar5,param_3,auStack_3c);
        iVar3 = FUN_00409610(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00409610(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
          (**(code **)(*piVar4 + 0x294))(auStack_3c);
        }
        iVar3 = FUN_00409600(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00409600(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
          (**(code **)(*piVar4 + 0x294))(auStack_3c);
        }
        uStack_8 = 0xffffffff;
        FUN_00488f0d();
      }
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return;
}


