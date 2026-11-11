
/* ==== FUN_004ad577 @ 004ad577 ==== 
 * signature: undefined __stdcall FUN_004ad577(void)
 * body: 004ad577-004ad625
 */

void FUN_004ad577(void)

{
  int iVar1;
  CString *pCVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar1 = FUN_004a5fed(*(int *)(iVar1 + -8) + 5);
  *(int *)(unaff_EBP + -0x18) = iVar1;
  iVar1 = FUN_004bafca();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar1 + 4);
  while( true ) {
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 4) <= *(int *)(unaff_EBP + -0x10)) break;
    wsprintfA(*(LPSTR *)(unaff_EBP + -0x18),*(LPCSTR *)(*(int *)(unaff_EBP + -0x14) + 0x10),
              *(int *)(unaff_EBP + -0x10) + 1);
    pCVar2 = (CString *)
             CWinApp::GetProfileStringA
                       (*(CWinApp **)(unaff_EBP + -0x20),(char *)(unaff_EBP + -0x1c),
                        *(char **)(*(int *)(unaff_EBP + -0x14) + 0xc),*(char **)(unaff_EBP + -0x18))
    ;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    CString::operator=((CString *)
                       (*(int *)(unaff_EBP + -0x10) * 4 + *(int *)(*(int *)(unaff_EBP + -0x14) + 8))
                       ,pCVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004ad630();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x18));
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


