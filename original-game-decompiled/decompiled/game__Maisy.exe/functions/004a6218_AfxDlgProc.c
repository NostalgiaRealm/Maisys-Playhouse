
/* ==== AfxDlgProc @ 004a6218 ==== 
 * signature: int __stdcall AfxDlgProc(HWND__ * param_1, uint param_2, uint param_3, long param_4)
 * body: 004a6218-004a6254
 * note: Library Function - Single Match  int __stdcall AfxDlgProc(struct HWND__ *,unsigned int,unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxDlgProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Library: Visual Studio 1998 Release */

int AfxDlgProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  CObject *pCVar1;
  int iVar2;
  
  if (param_2 == 0x110) {
    pCVar1 = FUN_004a8970(param_1);
    pCVar1 = FUN_004ac416((CRuntimeClass *)&PTR_s_CDialog_004dd3c8,pCVar1);
    if (pCVar1 == (CObject *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar2 = (**(code **)(*(int *)pCVar1 + 0xc0))();
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


