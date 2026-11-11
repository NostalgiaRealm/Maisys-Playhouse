
/* ==== FUN_004acaa2 @ 004acaa2 ==== 
 * signature: undefined4 __thiscall FUN_004acaa2(void * this, LPCSTR param_1, undefined2 param_2)
 * body: 004acaa2-004acbe5
 */

undefined4 __thiscall FUN_004acaa2(void *this,LPCSTR param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  DLGTEMPLATE *pDVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  WCHAR local_5c [32];
  void *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  void *local_8;
  
  local_10 = (int *)((int)this + 4);
  if (*local_10 == 0) {
    uVar5 = 0;
  }
  else {
    local_c = this;
    pDVar6 = GlobalLock(*(HGLOBAL *)this);
    sVar3 = *(short *)((int)&pDVar6->style + 2);
    local_18 = (uint)(sVar3 == -1);
    if (sVar3 == -1) {
      uVar7._0_2_ = pDVar6->y;
      uVar7._2_2_ = pDVar6->cx;
    }
    else {
      uVar7 = pDVar6->style;
    }
    local_8 = (void *)(uVar7 & 0x40);
    iVar1 = (-(uint)(local_18 == 0) & 0xfffffffe) * 2;
    iVar2 = iVar1 + 6;
    if (local_18 == 0) {
      *(byte *)&pDVar6->style = (byte)pDVar6->style | 0x40;
    }
    else {
      *(byte *)&pDVar6->y = (byte)pDVar6->y | 0x40;
    }
    iVar8 = MultiByteToWideChar(0,0,param_1,-1,local_5c,0x20);
    local_14 = iVar2 + iVar8 * 2;
    puVar9 = CDialogTemplate::GetFontSizeField(pDVar6);
    iVar8 = 0;
    if (local_8 != (void *)0x0) {
      iVar8 = FUN_00492020((short *)(puVar9 + iVar2));
      iVar8 = iVar1 + 8 + iVar8 * 2;
    }
    local_8 = (void *)((uint)(puVar9 + iVar8 + 3) & 0xfffffffc);
    local_1c = (void *)((uint)(puVar9 + local_14 + 3) & 0xfffffffc);
    if (local_18 == 0) {
      cVar4 = (char)pDVar6->cdit;
    }
    else {
      cVar4 = (char)pDVar6->cy;
    }
    if ((local_14 != iVar8) && (cVar4 != '\0')) {
      FID_conflict__memcpy(local_1c,local_8,(int)pDVar6 + (*local_10 - (int)local_8));
    }
    *(undefined2 *)puVar9 = param_2;
    FID_conflict__memcpy(puVar9 + iVar2,local_5c,local_14 - iVar2);
    *local_10 = (int)local_1c + (*local_10 - (int)local_8);
    GlobalUnlock((HGLOBAL)*local_c);
    uVar5 = 1;
    local_c[2] = 0;
  }
  return uVar5;
}


