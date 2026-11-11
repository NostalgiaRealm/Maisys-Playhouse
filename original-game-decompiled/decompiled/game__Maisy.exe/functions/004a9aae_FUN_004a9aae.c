
/* ==== FUN_004a9aae @ 004a9aae ==== 
 * signature: undefined4 __stdcall FUN_004a9aae(void)
 * body: 004a9aae-004a9d43;004a9d54-004a9d8f;004a9da2-004aa0e9
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_004a9aae(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  CWnd *pCVar4;
  AFX_MSGMAP_ENTRY *pAVar5;
  void *pvVar6;
  int iVar7;
  CWnd *pCVar8;
  uint uVar9;
  undefined4 uVar10;
  CWnd *extraout_ECX;
  uint uVar11;
  int unaff_EBP;
  short sVar12;
  short sVar13;
  undefined4 *unaff_FS_OFFSET;
  HWND__ *pHVar14;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(int *)(unaff_EBP + 8) == 0x111) {
    iVar3 = (**(code **)(*(int *)extraout_ECX + 0x7c))
                      (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar3 == 0) goto LAB_004a9c6c;
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    goto switchD_004a9c16_caseD_26;
  }
  if (*(int *)(unaff_EBP + 8) == 0x4e) {
    if ((**(int **)(unaff_EBP + 0x10) == 0) ||
       (iVar3 = (**(code **)(*(int *)extraout_ECX + 0x80))
                          (*(undefined4 *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                           unaff_EBP + -0x14), iVar3 == 0)) goto LAB_004a9c6c;
    goto switchD_004a9c16_caseD_26;
  }
  pHVar14 = *(HWND__ **)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 8) == 6) {
    pCVar4 = CWnd::FromHandle(pHVar14);
    _AfxHandleActivate(extraout_ECX,*(uint *)(unaff_EBP + 0xc),pCVar4);
  }
  sVar12 = (short)pHVar14;
  if ((*(int *)(unaff_EBP + 8) == 0x20) &&
     (iVar3 = _AfxHandleSetCursor(extraout_ECX,(int)sVar12,(uint)pHVar14 >> 0x10), iVar3 != 0)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    goto switchD_004a9c16_caseD_26;
  }
  uVar10 = (**(code **)(*(int *)extraout_ECX + 0x30))();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar10;
  AfxLockGlobals(7);
  *(undefined **)(unaff_EBP + -0x18) =
       &DAT_004e3640 +
       (((uint)*(ushort *)(unaff_EBP + -0x10) ^ *(uint *)(unaff_EBP + 8)) & 0x1ff) * 0xc;
  if ((*(int *)(&DAT_004e3640 +
               (((uint)*(ushort *)(unaff_EBP + -0x10) ^ *(uint *)(unaff_EBP + 8)) & 0x1ff) * 0xc) !=
       *(int *)(unaff_EBP + 8)) ||
     (*(int *)(*(int *)(unaff_EBP + -0x18) + 8) != *(int *)(unaff_EBP + -0x10))) {
    puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
    iVar3 = *(int *)(unaff_EBP + -0x10);
    *puVar1 = *(undefined4 *)(unaff_EBP + 8);
    puVar1[2] = iVar3;
    while (iVar3 != 0) {
      if (*(uint *)(unaff_EBP + 8) < 0xc000) {
        pAVar5 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(*(int *)(unaff_EBP + -0x10) + 4),
                                     *(uint *)(unaff_EBP + 8),0,0);
        if (pAVar5 != (AFX_MSGMAP_ENTRY *)0x0) {
          *(AFX_MSGMAP_ENTRY **)(*(int *)(unaff_EBP + -0x18) + 4) = pAVar5;
          AfxUnlockGlobals(7);
          goto LAB_004a9c01;
        }
      }
      else {
        pAVar5 = *(AFX_MSGMAP_ENTRY **)(*(int *)(unaff_EBP + -0x10) + 4);
        while (pAVar5 = AfxFindMessageEntry(pAVar5,0xc000,0,0), pAVar5 != (AFX_MSGMAP_ENTRY *)0x0) {
          if (**(int **)(pAVar5 + 0x10) == *(int *)(unaff_EBP + 8)) {
            *(AFX_MSGMAP_ENTRY **)(*(int *)(unaff_EBP + -0x18) + 4) = pAVar5;
            AfxUnlockGlobals(7);
            goto LAB_004aa0c3;
          }
          pAVar5 = pAVar5 + 0x18;
        }
      }
      iVar3 = **(int **)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x10) = iVar3;
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4) = 0;
    AfxUnlockGlobals(7);
LAB_004a9c6c:
    uVar10 = 0;
    goto LAB_004a9c6e;
  }
  pAVar5 = *(AFX_MSGMAP_ENTRY **)(*(int *)(unaff_EBP + -0x18) + 4);
  AfxUnlockGlobals(7);
  if (pAVar5 == (AFX_MSGMAP_ENTRY *)0x0) goto LAB_004a9c6c;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_004aa0c3:
    pcVar2 = *(code **)(pAVar5 + 0x14);
    *(code **)(unaff_EBP + -0x10) = pcVar2;
    uVar10 = (*pcVar2)(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    goto LAB_004aa0d1;
  }
LAB_004a9c01:
  iVar3 = *(int *)(pAVar5 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(pAVar5 + 0x14);
  sVar13 = (short)((uint)pHVar14 >> 0x10);
  switch(iVar3) {
  case 1:
    uVar10 = FUN_004b0c83(*(void **)(unaff_EBP + 0xc));
    uVar10 = (**(code **)(unaff_EBP + -0x10))(uVar10);
    goto LAB_004aa0d1;
  case 2:
    uVar10 = (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_004aa0d1;
  case 3:
    uVar9 = (uint)pHVar14 >> 0x10;
    iVar3 = (int)sVar12;
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    uVar10 = (**(code **)(unaff_EBP + -0x10))(pCVar4,iVar3,uVar9);
    goto LAB_004aa0d1;
  case 4:
    CDC::CDC((CDC *)(unaff_EBP + -0x34));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x30) = pHVar14[1].unused;
    CWnd::CWnd((CWnd *)(unaff_EBP + -0x70));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pvVar6 = (void *)pHVar14->unused;
    *(void **)(unaff_EBP + -0x54) = pvVar6;
    iVar3 = pHVar14[2].unused;
    pvVar6 = FUN_004a8970(pvVar6);
    if (pvVar6 == (void *)0x0) {
      if ((*(int *)(extraout_ECX + 0x34) != 0) &&
         (iVar7 = CMapPtrToPtr::Lookup
                            ((CMapPtrToPtr *)(*(int *)(extraout_ECX + 0x34) + 0x20),
                             *(void **)(unaff_EBP + -0x54),(void **)(unaff_EBP + -0x18)), iVar7 != 0
         )) {
        *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x18);
      }
      pvVar6 = (void *)(unaff_EBP + -0x70);
    }
    uVar10 = (**(code **)(unaff_EBP + -0x10))(unaff_EBP + -0x34,pvVar6,iVar3);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004a9d44();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004a9d4c();
    break;
  case 5:
    CDC::CDC((CDC *)(unaff_EBP + -0x24));
    *(undefined4 *)(unaff_EBP + -4) = 2;
    *(int *)(unaff_EBP + -0x20) = pHVar14[1].unused;
    uVar10 = (**(code **)(unaff_EBP + -0x10))(unaff_EBP + -0x24,pHVar14[2].unused);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
    FUN_004a9d9a();
    break;
  case 6:
    uVar9 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    pCVar4 = CWnd::FromHandle(pHVar14);
    uVar10 = (**(code **)(unaff_EBP + -0x10))(*(undefined2 *)(unaff_EBP + 0xc),pCVar4,uVar9);
    goto LAB_004aa0d1;
  case 7:
    uVar10 = (**(code **)(unaff_EBP + -0x10))
                       (*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10);
    goto LAB_004aa0d1;
  case 8:
    uVar9 = (uint)pHVar14 >> 0x10;
    iVar3 = (int)sVar12;
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    uVar10 = (**(code **)(unaff_EBP + -0x10))(pCVar4,iVar3,uVar9);
    goto LAB_004aa0d1;
  case 9:
    uVar10 = (**(code **)(unaff_EBP + -0x10))(pHVar14);
    goto LAB_004aa0d1;
  case 10:
    uVar10 = (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    goto LAB_004aa0d1;
  case 0xb:
    uVar10 = FromHandle(pHVar14);
    uVar10 = (**(code **)(unaff_EBP + -0x10))
                       (*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,uVar10);
    goto LAB_004aa0d1;
  case 0xc:
    (**(code **)(unaff_EBP + -0x10))();
    break;
  case 0xd:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc));
    break;
  case 0xe:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    break;
  case 0xf:
    (**(code **)(unaff_EBP + -0x10))((uint)pHVar14 & 0xffff,(uint)pHVar14 >> 0x10);
    break;
  case 0x10:
    (**(code **)(unaff_EBP + -0x10))
              (*(undefined4 *)(unaff_EBP + 0xc),(uint)pHVar14 & 0xffff,(uint)pHVar14 >> 0x10);
    break;
  case 0x11:
    (**(code **)(unaff_EBP + -0x10))
              (*(undefined4 *)(unaff_EBP + 0xc),(uint)pHVar14 & 0xffff,(uint)pHVar14 >> 0x10);
    break;
  case 0x12:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    break;
  case 0x13:
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    pCVar8 = CWnd::FromHandle(pHVar14);
    (**(code **)(unaff_EBP + -0x10))(*(HWND__ **)(extraout_ECX + 0x1c) == pHVar14,pCVar8,pCVar4);
    break;
  case 0x14:
    uVar10 = FUN_004b0c83(*(void **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(uVar10);
    break;
  case 0x15:
    uVar10 = FromHandle(*(void **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(uVar10);
    break;
  case 0x16:
    uVar9 = (uint)pHVar14 >> 0x10;
    uVar11 = (uint)pHVar14 & 0xffff;
    uVar10 = FromHandle(*(void **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(uVar10,uVar11,uVar9);
    break;
  case 0x17:
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(pCVar4);
    break;
  case 0x18:
    uVar9 = (uint)pHVar14 >> 0x10;
    uVar11 = (uint)pHVar14 & 0xffff;
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(pCVar4,uVar11,uVar9);
    break;
  case 0x19:
    *(int *)(unaff_EBP + -0x1c) = (int)sVar12;
    iVar3 = (int)sVar13;
    uVar10 = *(undefined4 *)(unaff_EBP + -0x1c);
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(pCVar4,uVar10,iVar3);
    break;
  case 0x1a:
    pCVar4 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0xc));
    (**(code **)(unaff_EBP + -0x10))(pCVar4,pHVar14);
    break;
  case 0x1b:
    pCVar4 = CWnd::FromHandle(pHVar14);
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pCVar4);
    break;
  case 0x1c:
    uVar9 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    pCVar4 = CWnd::FromHandle(pHVar14);
    (**(code **)(unaff_EBP + -0x10))(*(undefined2 *)(unaff_EBP + 0xc),pCVar4,uVar9);
    break;
  case 0x1d:
  case 0x1e:
    sVar12 = *(short *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -0x18) = (int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10);
    if (iVar3 == 0x1d) {
      pCVar4 = CWnd::FromHandle(pHVar14);
      (**(code **)(unaff_EBP + -0x10))((int)sVar12,*(undefined4 *)(unaff_EBP + -0x18),pCVar4);
    }
    else {
      (**(code **)(unaff_EBP + -0x10))((int)sVar12,*(undefined4 *)(unaff_EBP + -0x18));
    }
    break;
  case 0x1f:
    (**(code **)(unaff_EBP + -0x10))(pHVar14);
    break;
  case 0x20:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    break;
  case 0x21:
    uVar10 = (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    goto LAB_004aa0d1;
  case 0x22:
    *(int *)(unaff_EBP + -0x1c) = (int)sVar12;
    uVar10 = (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + -0x1c),(int)sVar13);
    goto LAB_004aa0d1;
  case 0x23:
    uVar10 = (**(code **)(unaff_EBP + -0x10))();
    goto LAB_004aa0d1;
  case 0x24:
    (**(code **)(unaff_EBP + -0x10))(pHVar14);
    break;
  case 0x25:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    break;
  case 0x2a:
    uVar10 = (**(code **)(unaff_EBP + -0x10))(pHVar14);
LAB_004aa0d1:
    *(undefined4 *)(unaff_EBP + -0x14) = uVar10;
    break;
  case 0x2b:
    (**(code **)(unaff_EBP + -0x10))(*(undefined4 *)(unaff_EBP + 0xc),pHVar14);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    break;
  case 0x2c:
    pCVar4 = CWnd::FromHandle(pHVar14);
    (**(code **)(unaff_EBP + -0x10))(pCVar4);
    break;
  case 0x30:
    (**(code **)(unaff_EBP + -0x10))
              (*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,pHVar14);
    break;
  case 0x31:
    *(int *)(unaff_EBP + -0x1c) = (int)sVar12;
    (**(code **)(unaff_EBP + -0x10))
              (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1c),(int)sVar13);
  }
switchD_004a9c16_caseD_26:
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  uVar10 = 1;
LAB_004a9c6e:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar10;
}


