
/* ==== AFX_COM::GetClassObject @ 004adf8e ==== 
 * signature: long __thiscall GetClassObject(AFX_COM * this, _GUID * param_1, _GUID * param_2, void * * param_3)
 * body: 004adf8e-004ae05e
 * note: Library Function - Single Match  public: long __thiscall AFX_COM::GetClassObject(struct _GUID const &,struct _GUID const &,void * *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: long __thiscall AFX_COM::GetClassObject(struct _GUID const &,struct _GUID const &,void *
   *)
   
   Library: Visual Studio 1998 Release */

long __thiscall AFX_COM::GetClassObject(AFX_COM *this,_GUID *param_1,_GUID *param_2,void **param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  *puVar1 = 0;
  AfxStringFromCLSID((_GUID *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = AfxGetInProcServer(*(char **)(unaff_EBP + -0x14),(CString *)(unaff_EBP + -0x10));
  if (iVar2 == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    hModule = LoadLibraryA(*(LPCSTR *)(unaff_EBP + -0x10));
    if (hModule != (HMODULE)0x0) {
      pFVar4 = GetProcAddress(hModule,"DllGetClassObject");
      if (pFVar4 == (FARPROC)0x0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004ae05f();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004ae071();
        lVar3 = -0x7ffbfe07;
      }
      else {
        iVar2 = (*pFVar4)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),puVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x18) = iVar2;
        FUN_004ae05f();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004ae071();
        lVar3 = *(long *)(unaff_EBP + -0x18);
      }
      goto LAB_004adfe8;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_004ae05f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ae071();
  lVar3 = -0x7ffbfeac;
LAB_004adfe8:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return lVar3;
}


