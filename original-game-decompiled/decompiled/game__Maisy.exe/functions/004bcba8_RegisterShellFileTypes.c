
/* ==== CDocManager::RegisterShellFileTypes @ 004bcba8 ==== 
 * signature: void __thiscall RegisterShellFileTypes(CDocManager * this, int param_1)
 * body: 004bcba8-004bd00d
 * note: Library Function - Single Match  public: virtual void __thiscall CDocManager::RegisterShellFileTypes(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocManager::RegisterShellFileTypes(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocManager::RegisterShellFileTypes(CDocManager *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  HICON hIcon;
  LPSTR lpData;
  LSTATUS LVar4;
  int extraout_ECX;
  CString *this_00;
  CString *pCVar5;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  LPCSTR lpszExeFileName;
  UINT nIconIndex;
  char *pcVar6;
  PLONG lpcbData;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pCVar5 = (CString *)(unaff_EBP + -0x18);
  iVar3 = FUN_004bafca();
  AfxGetModuleShortFileName(*(HINSTANCE__ **)(iVar3 + 8),pCVar5);
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  iVar3 = *(int *)(extraout_ECX + 8);
  *(int *)(unaff_EBP + -0x24) = iVar3;
  do {
    if (iVar3 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004bd04e();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004bd060();
      *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
      return;
    }
    uVar1 = (*(undefined4 **)(unaff_EBP + -0x24))[2];
    *(undefined4 *)(unaff_EBP + -0x24) = **(undefined4 **)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    CString::CString((CString *)(unaff_EBP + -0x20),(CString *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    CString::CString((CString *)(unaff_EBP + -0x2c),(CString *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 3;
    CString::CString((CString *)(unaff_EBP + -0x30),(CString *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    CString::CString((CString *)(unaff_EBP + -0x3c),(CString *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x38));
      nIconIndex = *(UINT *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      lpszExeFileName = *(LPCSTR *)(unaff_EBP + -0x18);
      iVar3 = FUN_004bafca();
      hIcon = ExtractIconA(*(HINSTANCE *)(iVar3 + 8),lpszExeFileName,nIconIndex);
      if (hIcon == (HICON)0x0) {
        CString::Format(this_00,(char *)(unaff_EBP + -0x38),&DAT_004cd37c,0);
      }
      else {
        CString::Format((CString *)(unaff_EBP + -0x38),(char *)(unaff_EBP + -0x38),&DAT_004cd37c,
                        *(undefined4 *)(unaff_EBP + -0x40));
        DestroyIcon(hIcon);
      }
      CString::operator+=((CString *)(unaff_EBP + -0x3c),(CString *)(unaff_EBP + -0x38));
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004bd00e();
    }
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x34));
    *(undefined1 *)(unaff_EBP + -4) = 9;
    pcVar2 = *(code **)(**(int **)(unaff_EBP + -0x28) + 0x68);
    iVar3 = (*pcVar2)(unaff_EBP + -0x14,5);
    if ((iVar3 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) != 0)) {
      iVar3 = (*pcVar2)(unaff_EBP + -0x34,6);
      if (iVar3 == 0) {
        CString::operator=((CString *)(unaff_EBP + -0x34),(CString *)(unaff_EBP + -0x14));
      }
      iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x14),*(char **)(unaff_EBP + -0x34),(char *)0x0);
      if (iVar3 != 0) {
        if (*(int *)(unaff_EBP + 8) != 0) {
          CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                          "%s\\DefaultIcon",*(undefined4 *)(unaff_EBP + -0x14));
          iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),*(char **)(unaff_EBP + -0x3c),(char *)0x0)
          ;
          if (iVar3 == 0) goto LAB_004bcf9c;
        }
        iVar3 = (*pcVar2)(unaff_EBP + -0x10,0);
        if ((iVar3 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0)) {
          CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                          "%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x14),"ddeexec");
          iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),"[open(\"%1\")]",(char *)0x0);
          if (iVar3 != 0) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              pcVar6 = " \"%1\"";
              pCVar5 = (CString *)(unaff_EBP + -0x20);
              goto LAB_004bce65;
            }
            CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                            "%s\\shell\\print\\%s",*(undefined4 *)(unaff_EBP + -0x14),"ddeexec");
            iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),"[print(\"%1\")]",(char *)0x0);
            if (iVar3 != 0) {
              CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                              "%s\\shell\\printto\\%s",*(undefined4 *)(unaff_EBP + -0x14),"ddeexec")
              ;
              iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),
                                "[printto(\"%1\",\"%2\",\"%3\",\"%4\")]",(char *)0x0);
              if (iVar3 != 0) {
                CString::operator+=((CString *)(unaff_EBP + -0x20)," /dde");
                CString::operator+=((CString *)(unaff_EBP + -0x2c)," /dde");
                pcVar6 = " /dde";
                goto LAB_004bce62;
              }
            }
          }
        }
        else {
          CString::operator+=((CString *)(unaff_EBP + -0x20)," \"%1\"");
          if (*(int *)(unaff_EBP + 8) != 0) {
            CString::operator+=((CString *)(unaff_EBP + -0x2c)," /p \"%1\"");
            pcVar6 = " /pt \"%1\" \"%2\" \"%3\" \"%4\"";
LAB_004bce62:
            pCVar5 = (CString *)(unaff_EBP + -0x30);
LAB_004bce65:
            CString::operator+=(pCVar5,pcVar6);
          }
          CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                          "%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x14),"command");
          iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),*(char **)(unaff_EBP + -0x20),(char *)0x0)
          ;
          if (iVar3 != 0) {
            if (*(int *)(unaff_EBP + 8) == 0) {
LAB_004bcefa:
              (*pcVar2)(unaff_EBP + -0x1c,4);
              if (*(int *)(*(int *)(unaff_EBP + -0x1c) + -8) != 0) {
                lpcbData = (PLONG)(unaff_EBP + -0x44);
                *(undefined4 *)(unaff_EBP + -0x44) = 0x208;
                lpData = (LPSTR)FUN_004ac16a((void *)(unaff_EBP + -0x10),0x208);
                LVar4 = RegQueryValueA((HKEY)0x80000000,*(LPCSTR *)(unaff_EBP + -0x1c),lpData,
                                       lpcbData);
                CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
                if ((((LVar4 != 0) || (*(int *)(*(uchar **)(unaff_EBP + -0x10) + -8) == 0)) ||
                    (iVar3 = __mbscmp(*(uchar **)(unaff_EBP + -0x10),*(uchar **)(unaff_EBP + -0x14))
                    , iVar3 == 0)) &&
                   ((iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x1c),*(char **)(unaff_EBP + -0x14),
                                       (char *)0x0), iVar3 != 0 && (*(int *)(unaff_EBP + 8) != 0))))
                {
                  CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                                  "%s\\ShellNew",*(undefined4 *)(unaff_EBP + -0x1c));
                  SetRegKey(*(char **)(unaff_EBP + -0x10),"","NullFile");
                }
              }
            }
            else {
              CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                              "%s\\shell\\print\\%s",*(undefined4 *)(unaff_EBP + -0x14),"command");
              iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),*(char **)(unaff_EBP + -0x2c),
                                (char *)0x0);
              if (iVar3 != 0) {
                CString::Format((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x10),
                                "%s\\shell\\printto\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                                "command");
                iVar3 = SetRegKey(*(char **)(unaff_EBP + -0x10),*(char **)(unaff_EBP + -0x30),
                                  (char *)0x0);
                if (iVar3 != 0) goto LAB_004bcefa;
              }
            }
          }
        }
      }
    }
LAB_004bcf9c:
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004bd016();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004bd01e();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004bd026();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004bd02e();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bd036();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004bd03e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004bd046();
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + 1;
    iVar3 = *(int *)(unaff_EBP + -0x24);
  } while( true );
}


