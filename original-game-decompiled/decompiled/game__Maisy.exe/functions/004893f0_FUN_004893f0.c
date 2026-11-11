
/* ==== FUN_004893f0 @ 004893f0 ==== 
 * signature: undefined __thiscall FUN_004893f0(void * this, UINT param_1, undefined4 param_2, uint param_3)
 * body: 004893f0-0048946d
 */

void __thiscall FUN_004893f0(void *this,UINT param_1,undefined4 param_2,uint param_3)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  BYTE aBStack_140 [256];
  undefined2 auStack_40 [6];
  AFX_EXCEPTION_LINK aAStack_34 [30];
  WORD WStack_16;
  undefined1 *local_14;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_004895de;
  *unaff_FS_OFFSET = &uStack_10;
  local_14 = &stack0xfffffeb4;
  if (DAT_004dc57c == '\0') {
    FUN_004a8882(this);
    iVar2 = (**(code **)(*(int *)this + 0x130))();
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x50) != 0)) &&
       (*(int *)(*(int *)(iVar2 + 0x50) + 0x82) != 0)) {
      switch(param_1) {
      case 0x21:
        WStack_16 = 0xb;
        break;
      case 0x22:
        WStack_16 = 0xc;
        break;
      case 0x23:
        WStack_16 = 4;
        break;
      case 0x24:
        WStack_16 = 1;
        break;
      case 0x25:
        WStack_16 = 0x1c;
        break;
      case 0x26:
        WStack_16 = 0x1e;
        break;
      case 0x27:
        WStack_16 = 0x1d;
        break;
      case 0x28:
        WStack_16 = 0x1f;
        break;
      default:
        GetKeyboardState(aBStack_140);
        iVar3 = ToAscii(param_1,param_3 & 0xf,aBStack_140,&WStack_16,0);
        if (iVar3 < 1) {
          SVar1 = GetKeyState(0x11);
          if ((SVar1 < 0) &&
             (((param_1 < 0x3a && (0x2f < param_1)) ||
              ((param_1 == 0xc0 || ((param_1 == 0xbb || (param_1 == 0xbd)))))))) {
            FUN_00489050((int *)&param_1);
            WStack_16 = (WORD)param_1;
          }
          else {
            WStack_16 = 0xffff;
          }
        }
        break;
      case 0x2e:
        WStack_16 = 0x7f;
        break;
      case 0x2f:
      case 0x70:
        WStack_16 = 5;
      }
      if (0 < (short)WStack_16) {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(aAStack_34);
        uStack_8 = 1;
        FUN_00488fa0((int)(short)WStack_16,param_3,auStack_40);
        iVar3 = FUN_00409610(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00409610(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
          (**(code **)(*piVar4 + 0x294))(auStack_40);
        }
        iVar3 = FUN_00409600(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00409600(*(int *)(*(int *)(iVar2 + 0x50) + 0x82));
          (**(code **)(*piVar4 + 0x294))(auStack_40);
        }
        uStack_8 = 0xffffffff;
        FUN_004895e8();
      }
    }
  }
  *unaff_FS_OFFSET = uStack_10;
  return;
}


