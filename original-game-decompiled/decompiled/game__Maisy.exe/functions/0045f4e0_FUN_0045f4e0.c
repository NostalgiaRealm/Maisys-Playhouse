
/* ==== FUN_0045f4e0 @ 0045f4e0 ==== 
 * signature: undefined __fastcall FUN_0045f4e0(CWnd * param_1)
 * body: 0045f4e0-0045f559
 */

void __fastcall FUN_0045f4e0(CWnd *param_1)

{
  HGDIOBJ pvVar1;
  CGdiObject *pCVar2;
  HBRUSH hbr;
  undefined4 *unaff_FS_OFFSET;
  CPaintDC local_74 [4];
  HDC local_70;
  tagRECT local_20;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045f55a;
  *unaff_FS_OFFSET = &local_10;
  hbr = (HBRUSH)0x0;
  CPaintDC::CPaintDC(local_74,param_1);
  local_8 = 0;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_20);
  pvVar1 = GetStockObject(4);
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  if (pCVar2 != (CGdiObject *)0x0) {
    hbr = *(HBRUSH *)(pCVar2 + 4);
  }
  FillRect(local_70,&local_20,hbr);
  local_8 = 0xffffffff;
  FUN_0045f564();
  *unaff_FS_OFFSET = local_10;
  return;
}


