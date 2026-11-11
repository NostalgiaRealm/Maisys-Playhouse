
/* ==== CWinApp::GetProfileStringA @ 004bc31c ==== 
 * signature: CString __thiscall GetProfileStringA(CWinApp * this, char * param_1, char * param_2, char * param_3)
 * body: 004bc31c-004bc40f;004bc418-004bc451
 * note: Library Function - Single Match  public: class CString __thiscall CWinApp::GetProfileStringA(char const *,char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CWinApp::GetProfileStringA(char const *,char const *,char const
   *)
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall
CWinApp::GetProfileStringA(CWinApp *this,char *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  HKEY__ *hKey;
  LSTATUS LVar2;
  LPBYTE lpData;
  CWinApp *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar3;
  LPDWORD lpcbData;
  
  FUN_004919ec();
  FUN_004926b0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(this_00 + 0x74) == 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      *(undefined **)(unaff_EBP + 0x14) = &DAT_004dd6e8;
    }
    GetPrivateProfileStringA
              (*(LPCSTR *)(unaff_EBP + 0xc),*(LPCSTR *)(unaff_EBP + 0x10),
               *(LPCSTR *)(unaff_EBP + 0x14),(LPSTR)(unaff_EBP + -0x1018),0x1000,
               *(LPCSTR *)(this_00 + 0x88));
    pcVar3 = (char *)(unaff_EBP + -0x1018);
  }
  else {
    hKey = GetSectionKey(this_00,*(char **)(unaff_EBP + 0xc));
    if (hKey != (HKEY__ *)0x0) {
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -4) = 1;
      LVar2 = RegQueryValueExA(hKey,*(LPCSTR *)(unaff_EBP + 0x10),(LPDWORD)0x0,
                               (LPDWORD)(unaff_EBP + -0x18),(LPBYTE)0x0,(LPDWORD)(unaff_EBP + -0x14)
                              );
      if (LVar2 == 0) {
        lpcbData = (LPDWORD)(unaff_EBP + -0x14);
        lpData = (LPBYTE)FUN_004ac16a((void *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x14));
        LVar2 = RegQueryValueExA(hKey,*(LPCSTR *)(unaff_EBP + 0x10),(LPDWORD)0x0,
                                 (LPDWORD)(unaff_EBP + -0x18),lpData,lpcbData);
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x1c),-1);
      }
      RegCloseKey(hKey);
      if (LVar2 == 0) {
        CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x1c));
        *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004bc410();
      }
      else {
        CString::CString(*(CString **)(unaff_EBP + 8),*(char **)(unaff_EBP + 0x14));
        *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004bc410();
      }
      goto LAB_004bc35e;
    }
    pcVar3 = *(char **)(unaff_EBP + 0x14);
  }
  CString::CString(*(CString **)(unaff_EBP + 8),pcVar3);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
LAB_004bc35e:
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


