
/* ==== CWinApp::GetProfileBinary @ 004bc46b ==== 
 * signature: int __thiscall GetProfileBinary(CWinApp * this, char * param_1, char * param_2, uchar * * param_3, uint * param_4)
 * body: 004bc46b-004bc5aa
 * note: Library Function - Single Match  public: int __thiscall CWinApp::GetProfileBinary(char const *,char const *,unsigned char * *,unsigned int *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWinApp::GetProfileBinary(char const *,char const *,unsigned char *
   *,unsigned int *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CWinApp::GetProfileBinary(CWinApp *this,char *param_1,char *param_2,uchar **param_3,uint *param_4)

{
  int *piVar1;
  SIZE_T *pSVar2;
  SIZE_T SVar3;
  HKEY__ *pHVar4;
  int iVar5;
  LSTATUS LVar6;
  int iVar7;
  char *pcVar8;
  CWinApp *this_00;
  int iVar9;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  piVar1 = *(int **)(unaff_EBP + 0x10);
  pSVar2 = *(SIZE_T **)(unaff_EBP + 0x14);
  *piVar1 = 0;
  *pSVar2 = 0;
  if (*(int *)(this_00 + 0x74) == 0) {
    GetProfileStringA(this_00,(char *)(unaff_EBP + -0x10),*(char **)(unaff_EBP + 8),
                      *(char **)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -8);
    if (iVar5 != 0) {
      *pSVar2 = iVar5 / 2;
      iVar7 = FUN_004a5fed(iVar5 / 2);
      *piVar1 = iVar7;
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x10) + iVar7);
          iVar9 = iVar7 + 2;
          *(char *)(*piVar1 + iVar7 / 2) = pcVar8[1] * '\x10' + *pcVar8 + -0x51;
          iVar7 = iVar9;
        } while (iVar9 < iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004bc5b5();
      iVar5 = 1;
      goto LAB_004bc4a1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004bc5b5();
  }
  else {
    pHVar4 = GetSectionKey(this_00,*(char **)(unaff_EBP + 8));
    *(HKEY__ **)(unaff_EBP + -0x10) = pHVar4;
    if (pHVar4 != (HKEY__ *)0x0) {
      LVar6 = RegQueryValueExA(*(HKEY *)(unaff_EBP + -0x10),*(LPCSTR *)(unaff_EBP + 0xc),
                               (LPDWORD)0x0,(LPDWORD)(unaff_EBP + -0x18),(LPBYTE)0x0,
                               (LPDWORD)(unaff_EBP + -0x14));
      SVar3 = *(SIZE_T *)(unaff_EBP + -0x14);
      *pSVar2 = SVar3;
      if (LVar6 == 0) {
        iVar5 = FUN_004a5fed(SVar3);
        *piVar1 = iVar5;
        LVar6 = RegQueryValueExA(*(HKEY *)(unaff_EBP + -0x10),*(LPCSTR *)(unaff_EBP + 0xc),
                                 (LPDWORD)0x0,(LPDWORD)(unaff_EBP + -0x18),(LPBYTE)*piVar1,
                                 (LPDWORD)(unaff_EBP + -0x14));
      }
      RegCloseKey(*(HKEY *)(unaff_EBP + -0x10));
      if (LVar6 == 0) {
        iVar5 = 1;
        goto LAB_004bc4a1;
      }
      FUN_004a602d((LPVOID)*piVar1);
      *piVar1 = 0;
    }
  }
  iVar5 = 0;
LAB_004bc4a1:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar5;
}


