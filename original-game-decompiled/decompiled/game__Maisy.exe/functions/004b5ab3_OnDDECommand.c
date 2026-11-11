
/* ==== CDocManager::OnDDECommand @ 004b5ab3 ==== 
 * signature: int __thiscall OnDDECommand(CDocManager * this, char * param_1)
 * body: 004b5ab3-004b5b54;004b5b5d-004b5bce;004b5bd7-004b603c;004b609d-004b6137
 * note: Library Function - Single Match  public: virtual int __thiscall CDocManager::OnDDECommand(char *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocManager::OnDDECommand(char *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDocManager::OnDDECommand(CDocManager *this,char *param_1)

{
  CWnd *this_00;
  undefined4 *puVar1;
  int iVar2;
  CString *pCVar3;
  int iVar4;
  int *piVar5;
  BOOL BVar6;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CString::CString((CString *)(unaff_EBP + -0x10),*(char **)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CCommandLineInfo::CCommandLineInfo((CCommandLineInfo *)(unaff_EBP + -0x3c));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_004a4662();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = __mbscmp((uchar *)*puVar1,(uchar *)"[open(\"");
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x14) =
       (*(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x14)) - (uint)(iVar2 == 0);
  *(int *)(unaff_EBP + -0x14) = -*(int *)(unaff_EBP + -0x14);
  FUN_004b6160();
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puVar1 = (undefined4 *)FUN_004a4662();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = __mbscmp((uchar *)*puVar1,(uchar *)"[print(\"");
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x14) =
         (*(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x14)) - (uint)(iVar2 == 0);
    *(int *)(unaff_EBP + -0x14) = -*(int *)(unaff_EBP + -0x14);
    FUN_004b6158();
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 2;
      pCVar3 = (CString *)FUN_004a45c2();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004b5bcf();
      goto LAB_004b5c47;
    }
    puVar1 = (undefined4 *)FUN_004a4662();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = __mbscmp((uchar *)*puVar1,(uchar *)"[printto(\"");
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x14) =
         (*(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x14)) - (uint)(iVar2 == 0);
    *(int *)(unaff_EBP + -0x14) = -*(int *)(unaff_EBP + -0x14);
    FUN_004b6150();
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 3;
      pCVar3 = (CString *)FUN_004a45c2();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004b6148();
      goto LAB_004b5c47;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = 1;
    pCVar3 = (CString *)FUN_004a45c2();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004b5b55();
LAB_004b5c47:
    iVar2 = CString::Find((CString *)(unaff_EBP + -0x10),'\"');
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (iVar2 != -1) {
      pCVar3 = (CString *)FUN_004a4662();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      CString::operator=((CString *)(unaff_EBP + -0x28),pCVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004b6140();
      pCVar3 = (CString *)FUN_004a45c2();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004b6138();
      iVar2 = FUN_004bafca();
      if (*(int *)(*(int *)(iVar2 + 4) + 0xa4) != 0) {
        iVar2 = FUN_004bafca();
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = FUN_004bafca();
        *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0xa4);
        iVar2 = FUN_004bafca();
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xa4) = 0;
      }
      if (*(int *)(unaff_EBP + -0x2c) == 1) {
        iVar2 = FUN_004bafca();
        this_00 = *(CWnd **)(*(int *)(iVar2 + 4) + 0x1c);
        iVar2 = FUN_004bafca();
        iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x6c);
        if ((iVar2 == -1) || (iVar2 == 1)) {
          BVar6 = IsIconic(*(HWND *)(this_00 + 0x1c));
          iVar2 = (-(uint)(BVar6 == 0) & 0xfffffffc) + 9;
        }
        CWnd::ShowWindow(this_00,iVar2);
        if (iVar2 != 6) {
          SetForegroundWindow(*(HWND *)(this_00 + 0x1c));
        }
        iVar2 = FUN_004bafca();
        (**(code **)(**(int **)(iVar2 + 4) + 0x80))(*(undefined4 *)(unaff_EBP + -0x28));
        iVar2 = FUN_004b9cb7();
        if (iVar2 == 0) {
          AfxOleSetUserCtrl(1);
        }
        iVar2 = FUN_004bafca();
        iVar2 = *(int *)(iVar2 + 4);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
        FUN_004b6168();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b617a();
        iVar2 = 1;
        goto LAB_004b5c70;
      }
      if (*(int *)(unaff_EBP + -0x2c) != 3) {
LAB_004b5f93:
        iVar2 = FUN_004bafca();
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0x6c) = 0;
        iVar2 = FUN_004bafca();
        piVar5 = (int *)(**(code **)(**(int **)(iVar2 + 4) + 0x80))
                                  (*(undefined4 *)(unaff_EBP + -0x28));
        iVar2 = FUN_004bafca();
        *(int *)(*(int *)(iVar2 + 4) + 0xa4) = unaff_EBP + -0x3c;
        iVar2 = FUN_004bafca();
        SendMessageA(*(HWND *)(*(int *)(*(int *)(iVar2 + 4) + 0x1c) + 0x1c),0x111,0xe108,0);
        iVar2 = FUN_004bafca();
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xa4) = 0;
        (**(code **)(*piVar5 + 0x80))();
        iVar2 = FUN_004b9cb7();
        if (iVar2 == 0) {
          iVar2 = FUN_004bafca();
          PostMessageA(*(HWND *)(*(int *)(*(int *)(iVar2 + 4) + 0x1c) + 0x1c),0x10,0,0);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004b6168();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b617a();
        iVar2 = 1;
        goto LAB_004b5c70;
      }
      puVar1 = (undefined4 *)FUN_004a4662();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = __mbscmp((uchar *)*puVar1,"\",\"");
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(uint *)(unaff_EBP + -0x18) = (uint)(iVar2 != 0);
      FUN_004b6095();
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        pCVar3 = (CString *)FUN_004a45c2();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004b608d();
        iVar2 = CString::Find((CString *)(unaff_EBP + -0x10),'\"');
        *(int *)(unaff_EBP + -0x14) = iVar2;
        if (iVar2 != -1) {
          pCVar3 = (CString *)FUN_004a4662();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          CString::operator=((CString *)(unaff_EBP + -0x24),pCVar3);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_004b6085();
          pCVar3 = (CString *)FUN_004a45c2();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_004b607d();
          puVar1 = (undefined4 *)FUN_004a4662();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar2 = __mbscmp((uchar *)*puVar1,"\",\"");
          *(undefined1 *)(unaff_EBP + -4) = 1;
          *(uint *)(unaff_EBP + -0x18) = (uint)(iVar2 != 0);
          FUN_004b6075();
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            pCVar3 = (CString *)FUN_004a45c2();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_004b606d();
            iVar2 = CString::Find((CString *)(unaff_EBP + -0x10),'\"');
            *(int *)(unaff_EBP + -0x14) = iVar2;
            if (iVar2 != -1) {
              pCVar3 = (CString *)FUN_004a4662();
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              CString::operator=((CString *)(unaff_EBP + -0x20),pCVar3);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              FUN_004b6065();
              pCVar3 = (CString *)FUN_004a45c2();
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              FUN_004b605d();
              puVar1 = (undefined4 *)FUN_004a4662();
              *(undefined1 *)(unaff_EBP + -4) = 0x12;
              iVar2 = __mbscmp((uchar *)*puVar1,"\",\"");
              *(undefined1 *)(unaff_EBP + -4) = 1;
              *(uint *)(unaff_EBP + -0x18) = (uint)(iVar2 != 0);
              FUN_004b6055();
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                pCVar3 = (CString *)FUN_004a45c2();
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
                *(undefined1 *)(unaff_EBP + -4) = 1;
                FUN_004b604d();
                iVar2 = CString::Find((CString *)(unaff_EBP + -0x10),'\"');
                *(int *)(unaff_EBP + -0x14) = iVar2;
                if (iVar2 != -1) {
                  pCVar3 = (CString *)FUN_004a4662();
                  *(undefined1 *)(unaff_EBP + -4) = 0x14;
                  CString::operator=((CString *)(unaff_EBP + -0x1c),pCVar3);
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  FUN_004b6045();
                  pCVar3 = (CString *)FUN_004a45c2();
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  CString::operator=((CString *)(unaff_EBP + -0x10),pCVar3);
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  FUN_004b603d();
                  goto LAB_004b5f93;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b6168();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b617a();
  iVar2 = 0;
LAB_004b5c70:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


