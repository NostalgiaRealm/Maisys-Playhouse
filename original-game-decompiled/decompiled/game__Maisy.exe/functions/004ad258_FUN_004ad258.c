
/* ==== FUN_004ad258 @ 004ad258 ==== 
 * signature: undefined __stdcall FUN_004ad258(void)
 * body: 004ad258-004ad4cd
 */

void FUN_004ad258(void)

{
  byte bVar1;
  UINT_PTR uIDNewItem;
  LPCSTR lpNewItem;
  LPSTR lpString;
  UINT UVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  CString *pCVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *unaff_FS_OFFSET;
  int iVar9;
  UINT flags;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar5 = (int *)(*(int *)(unaff_EBP + 8) + 0xc);
  iVar8 = *piVar5;
  pCVar6 = (CString *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  *(int **)(unaff_EBP + -0x10) = piVar5;
  if ((*(int *)(*(int *)pCVar6 + -8) == 0) && (iVar8 != 0)) {
    flags = 0;
    UVar2 = *(UINT *)(*(int *)(unaff_EBP + 8) + 4);
    iVar9 = 0x100;
    lpString = (LPSTR)FUN_004ac16a(pCVar6,0x100);
    GetMenuStringA(*(HMENU *)(iVar8 + 4),UVar2,lpString,iVar9,flags);
    CString::ReleaseBuffer(pCVar6,-1);
  }
  if (*(int *)(**(int **)(*(int *)(unaff_EBP + -0x14) + 8) + -8) == 0) {
    if (*(int *)(*(int *)pCVar6 + -8) != 0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 0xc))(*(int *)pCVar6);
    }
    (**(code **)**(undefined4 **)(unaff_EBP + 8))(0);
  }
  else if (**(int **)(unaff_EBP + -0x10) != 0) {
    iVar8 = 0;
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    if (0 < *piVar5) {
      do {
        UVar2 = *(int *)(*(int *)(unaff_EBP + 8) + 4) + iVar8;
        iVar8 = iVar8 + 1;
        DeleteMenu(*(HMENU *)(**(int **)(unaff_EBP + -0x10) + 4),UVar2,0);
      } while (iVar8 < **(int **)(unaff_EBP + -0x24));
    }
    GetCurrentDirectoryA(0x104,(LPSTR)(unaff_EBP + -0x140));
    iVar8 = lstrlenA((LPCSTR)(unaff_EBP + -0x140));
    *(int *)(unaff_EBP + -0x28) = iVar8;
    *(undefined1 *)(unaff_EBP + -0x140 + iVar8) = 0x5c;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    *(undefined1 *)(unaff_EBP + -0x140 + *(int *)(unaff_EBP + -0x28)) = 0;
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (0 < **(int **)(unaff_EBP + -0x24)) {
      do {
        iVar8 = FUN_004ad150(*(void **)(unaff_EBP + -0x14),(CString *)(unaff_EBP + -0x18),
                             *(int *)(unaff_EBP + -0x20),(LPCSTR)(unaff_EBP + -0x140),
                             *(int *)(unaff_EBP + -0x28),1);
        if (iVar8 == 0) break;
        pbVar7 = *(byte **)(unaff_EBP + -0x18);
        pbVar3 = (byte *)FUN_004ac16a((void *)(unaff_EBP + -0x1c),*(int *)(pbVar7 + -8) * 2);
        bVar1 = *pbVar7;
        while (bVar1 != 0) {
          if (*pbVar7 == 0x26) {
            *pbVar3 = 0x26;
            pbVar3 = pbVar3 + 1;
          }
          bVar1 = *pbVar7;
          if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          }
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          bVar1 = *pbVar7;
        }
        *pbVar3 = 0;
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x1c),-1);
        wsprintfA((LPSTR)(unaff_EBP + -0x3c),"&%d ",
                  (uint)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x14) + 1 +
                        *(int *)(unaff_EBP + -0x20)) % 10);
        iVar8 = *(int *)(unaff_EBP + 8);
        uIDNewItem = *(UINT_PTR *)(iVar8 + 4);
        UVar2 = *(UINT *)(iVar8 + 8);
        *(UINT_PTR *)(iVar8 + 4) = uIDNewItem + 1;
        *(UINT *)(iVar8 + 8) = UVar2 + 1;
        pCVar6 = (CString *)
                 CString::CString((CString *)(unaff_EBP + -0x30),(char *)(unaff_EBP + -0x3c));
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puVar4 = (undefined4 *)operator+((CString *)(unaff_EBP + -0x2c),pCVar6);
        lpNewItem = (LPCSTR)*puVar4;
        iVar8 = **(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        InsertMenuA(*(HMENU *)(iVar8 + 4),UVar2,0x400,uIDNewItem,lpNewItem);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_004ad4d6();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004ad4ce();
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      } while (*(int *)(unaff_EBP + -0x20) < **(int **)(unaff_EBP + -0x24));
    }
    iVar8 = **(int **)(unaff_EBP + -0x10);
    piVar5 = (int *)(*(int *)(unaff_EBP + 8) + 8);
    *piVar5 = *piVar5 + -1;
    iVar9 = GetMenuItemCount(*(HMENU *)(iVar8 + 4));
    iVar8 = *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(iVar8 + 0x18) = 1;
    *(int *)(iVar8 + 0x20) = iVar9;
    FUN_004ad4de();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004ad4f0();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


