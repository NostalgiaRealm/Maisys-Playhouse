
/* ==== FUN_004ae1cb @ 004ae1cb ==== 
 * signature: undefined4 __stdcall FUN_004ae1cb(void)
 * body: 004ae1cb-004ae31d
 */

undefined4 FUN_004ae1cb(void)

{
  undefined1 *puVar1;
  LPCSTR pszPath;
  undefined4 uVar2;
  DWORD_PTR DVar3;
  long lVar4;
  int iVar5;
  ushort *puVar6;
  size_t sVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  puVar1 = *(undefined1 **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *puVar1 = 0;
  if (DAT_004e5204 == 0) {
    pszPath = *(LPCSTR *)(unaff_EBP + 0xc);
    DVar3 = SHGetFileInfoA(pszPath,0,(SHFILEINFOA *)(unaff_EBP + -0x178),0x160,0x800);
    if ((DVar3 != 0) && ((*(byte *)(unaff_EBP + -0x16e) & 1) != 0)) {
      lVar4 = AFX_COM::CreateInstance
                        ((AFX_COM *)(unaff_EBP + -0x18),(_GUID *)&DAT_004cd1c8,(IUnknown *)0x0,
                         (_GUID *)&DAT_004cd1d8,(void **)(unaff_EBP + -0x10));
      if (-1 < lVar4) {
        iVar5 = (**(code **)**(undefined4 **)(unaff_EBP + -0x10))();
        if (-1 < iVar5) {
          puVar6 = (ushort *)0x0;
          if (pszPath != (LPCSTR)0x0) {
            sVar7 = _strlen(pszPath);
            FUN_004926b0();
            puVar6 = AfxA2WHelper((ushort *)&stack0xfffffe7c,pszPath,sVar7 + 1);
          }
          iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x14))
                            (*(undefined4 *)(unaff_EBP + -0x14),puVar6,0);
          if (-1 < iVar5) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1c);
            }
            iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x4c))
                              (*(undefined4 *)(unaff_EBP + -0x10),uVar2,2);
            if (-1 < iVar5) {
              (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                        (*(undefined4 *)(unaff_EBP + -0x10),puVar1,*(undefined4 *)(unaff_EBP + 0x14)
                         ,0,0);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_004ae328();
              uVar2 = 1;
              goto LAB_004ae201;
            }
          }
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(*(undefined4 *)(unaff_EBP + -0x14));
        }
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))(*(undefined4 *)(unaff_EBP + -0x10));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ae328();
  uVar2 = 0;
LAB_004ae201:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


