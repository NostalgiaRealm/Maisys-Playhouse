
/* ==== FUN_0047a250 @ 0047a250 ==== 
 * signature: undefined4 __thiscall FUN_0047a250(void * this, undefined4 * param_1, short param_2, int param_3)
 * body: 0047a250-0047a679
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047a250(void *this,undefined4 *param_1,short param_2,int param_3)

{
  HDC pHVar1;
  undefined1 *puVar2;
  BYTE *pBVar3;
  uint uVar4;
  HBITMAP pHVar5;
  HGDIOBJ pvVar6;
  undefined4 uVar7;
  BOOL BVar8;
  undefined1 *puVar9;
  tagPALETTEENTRY *ptVar10;
  tagPALETTEENTRY *ptVar11;
  int iVar12;
  undefined4 *puVar13;
  code *pcVar14;
  undefined4 *puVar15;
  tagPALETTEENTRY local_404 [256];
  
  DAT_004dcb30 = GetStockObject(4);
  _DAT_004dcb34 = GetStockObject(0);
  uVar7 = param_1[1];
  *(undefined4 *)((int)this + 0x460) = *param_1;
  *(short *)((int)this + 0x47a) = param_2;
  *(undefined4 *)((int)this + 0x464) = uVar7;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0x28;
  *(undefined4 *)((int)this + 0x474) = 1;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined2 *)((int)this + 0x478) = 1;
  *(uint *)((int)this + 0x48c) = -(uint)(param_2 == 8) & 0x100;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)((int)this + 0x468) = pHVar1;
  if (pHVar1 == (HDC)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0xce4) == 0) {
    if (param_3 == 0) {
      ptVar10 = local_404;
      for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
        ptVar10->peRed = '\0';
        ptVar10->peGreen = '\0';
        ptVar10->peBlue = '\0';
        ptVar10->peFlags = '\0';
        ptVar10 = ptVar10 + 1;
      }
      pHVar1 = GetDC((HWND)0x0);
      GetSystemPaletteEntries(pHVar1,0,0x100,local_404);
      ReleaseDC((HWND)0x0,pHVar1);
      pBVar3 = (BYTE *)((int)this + 0x56);
      ptVar10 = local_404;
      do {
        ptVar11 = ptVar10 + 1;
        *pBVar3 = ptVar10->peRed;
        pBVar3[-2] = ptVar10->peBlue;
        pBVar3[-1] = ptVar10->peGreen;
        pBVar3[1] = '\0';
        pBVar3 = pBVar3 + 4;
        ptVar10 = ptVar11;
      } while (ptVar11 < (tagPALETTEENTRY *)&stack0xfffffffc);
    }
    else {
      iVar12 = 0x100;
      puVar2 = (undefined1 *)(param_3 + 2);
      puVar9 = (undefined1 *)((int)this + 0x56);
      do {
        iVar12 = iVar12 + -1;
        *puVar9 = *puVar2;
        puVar9[-2] = puVar2[-2];
        puVar9[-1] = puVar2[-1];
        puVar9[1] = 0;
        puVar2 = puVar2 + 4;
        puVar9 = puVar9 + 4;
      } while (iVar12 != 0);
      *(undefined1 *)((int)this + 0x452) = 0xff;
      *(undefined1 *)((int)this + 0x450) = 0xff;
      *(undefined1 *)((int)this + 0x451) = 0xff;
      *(undefined1 *)((int)this + 0x56) = 0;
      *(undefined1 *)((int)this + 0x54) = 0;
      *(undefined1 *)((int)this + 0x55) = 0;
    }
    *(undefined4 *)((int)this + 0xce8) = 0xfffffffe;
    iVar12 = FUN_00439650(&DAT_004e1c58,-2);
    *(int *)((int)this + 0xce4) = iVar12;
    if (iVar12 == 0) {
      uVar4 = FUN_004394e0(&DAT_004e1c58,*(uint *)((int)this + 0xce8),(HPALETTE)0x0,
                           (uint *)((int)this + 0x54));
      *(uint *)((int)this + 0xce4) = uVar4;
    }
    FUN_004396a0(&DAT_004e1c58,*(int *)((int)this + 0xce8),'\x01');
    *(undefined4 *)((int)this + 0x894) = *(undefined4 *)((int)this + 0xce4);
  }
  puVar13 = (undefined4 *)((int)this + 0x54);
  puVar15 = (undefined4 *)((int)this + 0x494);
  for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar15 = puVar15 + 1;
  }
  *(int *)((int)this + 0x474) = (int)*(short *)((int)this + 0x466) * *(int *)((int)this + 0x474);
  *(int *)((int)this + 0x470) = (int)*(short *)((int)this + 0x464);
  pcVar14 = SelectObject_exref;
  if (((param_2 != 0x10) && (param_2 != 0x20)) || ((*(byte *)((int)this + 0x1134) & 4) != 0))
  goto LAB_0047a5e0;
  iVar12 = FUN_0047a680();
  *(short *)((int)this + 0xd0a) = (short)iVar12;
  *(undefined4 *)((int)this + 0xd0c) = 0;
  *(undefined4 *)((int)this + 0xd10) = 0;
  *(undefined4 *)((int)this + 0xd14) = 0;
  *(undefined4 *)((int)this + 0xd18) = 0;
  *(undefined4 *)((int)this + 0xcfc) = 0x28;
  *(undefined4 *)((int)this + 0xd04) = 1;
  *(undefined4 *)((int)this + 0xd20) = 0;
  *(undefined4 *)((int)this + 0xd04) = 0xfffffff0;
  *(undefined2 *)((int)this + 0xd08) = 1;
  *(int *)((int)this + 0xd00) = (int)*(short *)((int)this + 0x464);
  *(uint *)((int)this + 0xd1c) = -(uint)(iVar12 == 8) & 0x100;
  if ((iVar12 == 0x10) && (param_2 == 0x10)) {
    *(undefined4 *)((int)this + 0x112c) = 0;
    *(undefined4 *)((int)this + 0xd0c) = 3;
    *(undefined4 *)((int)this + 0xd24) = 0xf800;
    *(undefined4 *)((int)this + 0xd28) = 0x7e0;
    *(undefined4 *)((int)this + 0xd2c) = 0x1f;
LAB_0047a544:
    *(byte *)((int)this + 0x1134) = *(byte *)((int)this + 0x1134) | 0x80;
  }
  else if (iVar12 == 8) {
    puVar13 = (undefined4 *)((int)this + 0x54);
    puVar15 = (undefined4 *)((int)this + 0xd24);
    for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    goto LAB_0047a544;
  }
  pcVar14 = SelectObject_exref;
  if ((*(byte *)((int)this + 0x1134) & 0x80) != 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    *(HDC *)((int)this + 0xcf8) = pHVar1;
    if (pHVar1 != (HDC)0x0) {
      pHVar5 = CreateDIBSection(pHVar1,(BITMAPINFO *)((int)this + 0xcfc),0,
                                (void **)((int)this + 0x1130),(HANDLE)0x0,0);
      *(HBITMAP *)((int)this + 0x1128) = pHVar5;
    }
    pcVar14 = SelectObject_exref;
    if ((*(HDC *)((int)this + 0xcf8) == (HDC)0x0) || (*(int *)((int)this + 0x1128) == 0)) {
      uVar4 = FUN_0047a720((int)this);
      return uVar4 & 0xffffff00;
    }
    SelectObject(*(HDC *)((int)this + 0xcf8),DAT_004dcb30);
    pvVar6 = SelectObject(*(HDC *)((int)this + 0xcf8),*(HGDIOBJ *)((int)this + 0x1128));
    *(HGDIOBJ *)((int)this + 0x112c) = pvVar6;
  }
LAB_0047a5e0:
  *(undefined4 *)((int)this + 0x89c) = 0;
  pHVar5 = CreateDIBSection(*(HDC *)((int)this + 0x468),(BITMAPINFO *)((int)this + 0x46c),0,
                            (void **)((int)this + 0x8a0),(HANDLE)0x0,0);
  *(HBITMAP *)((int)this + 0x898) = pHVar5;
  if (pHVar5 != (HBITMAP)0x0) {
    (*pcVar14)(*(undefined4 *)((int)this + 0x468),DAT_004dcb30);
    uVar7 = (*pcVar14)(*(undefined4 *)((int)this + 0x468),*(undefined4 *)((int)this + 0x898));
    *(undefined4 *)((int)this + 0x89c) = uVar7;
    BVar8 = PatBlt(*(HDC *)((int)this + 0x468),0,0,(int)*(short *)((int)this + 0x464),
                   (int)*(short *)((int)this + 0x466),0x42);
    return CONCAT31((int3)((uint)BVar8 >> 8),1);
  }
  uVar4 = FUN_0047a720((int)this);
  return uVar4 & 0xffffff00;
}


