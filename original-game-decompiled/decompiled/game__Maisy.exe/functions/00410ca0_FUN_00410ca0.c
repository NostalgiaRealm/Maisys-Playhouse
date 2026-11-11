
/* ==== FUN_00410ca0 @ 00410ca0 ==== 
 * signature: undefined __thiscall FUN_00410ca0(void * this, short param_1)
 * body: 00410ca0-00410dbb
 */

void __thiscall FUN_00410ca0(void *this,short param_1)

{
  short sVar1;
  undefined4 uVar2;
  HCURSOR hCursor;
  int iVar3;
  short sVar4;
  LPCSTR lpCursorName;
  
  sVar1 = *(short *)((int)this + 0x26);
  if ((param_1 != sVar1) && ((param_1 != 0x2a || (*(short *)((int)this + 0x28) != sVar1)))) {
    sVar4 = sVar1;
    if ((param_1 != 0x29) &&
       ((sVar4 = param_1, param_1 == 0x2a &&
        (sVar4 = *(short *)((int)this + 0x28), *(short *)((int)this + 0x28) == 0)))) {
      sVar4 = 0x2b;
    }
    if (sVar4 != sVar1) {
      switch(sVar4) {
      case 3:
        FUN_004bafca();
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f82);
        break;
      default:
        FUN_004bafca();
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        break;
      case 9:
        FUN_004bafca();
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f83);
        break;
      case 0xc:
      case 0x15:
        iVar3 = FUN_004bafca();
        uVar2 = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_004bafca();
        lpCursorName = (LPCSTR)0x2712;
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        iVar3 = FUN_004bafca();
        hCursor = LoadCursorA(*(HINSTANCE *)(iVar3 + 8),lpCursorName);
        break;
      case 0x14:
        FUN_004bafca();
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f03);
        break;
      case 0x16:
        FUN_004bafca();
        hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f01);
        break;
      case 0x2c:
        hCursor = *(HCURSOR *)((int)this + 0xc2);
      }
      if (*(HCURSOR *)((int)this + 0xc2) != (HCURSOR)0x0) {
        hCursor = *(HCURSOR *)((int)this + 0xc2);
      }
      if (hCursor != (HCURSOR)0x0) {
        SetCursor(hCursor);
      }
      *(short *)((int)this + 0x26) = sVar4;
    }
  }
  return;
}


