
/* ==== CWnd::OnGrayCtlColor @ 004ab21d ==== 
 * signature: HBRUSH__ * __thiscall OnGrayCtlColor(CWnd * this, CDC * param_1, CWnd * param_2, uint param_3)
 * body: 004ab21d-004ab289
 * note: Library Function - Single Match  public: struct HBRUSH__ * __thiscall CWnd::OnGrayCtlColor(class CDC *,class CWnd *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HBRUSH__ * __thiscall CWnd::OnGrayCtlColor(class CDC *,class CWnd *,unsigned int)
   
   Library: Visual Studio 1998 Release */

HBRUSH__ * __thiscall CWnd::OnGrayCtlColor(CWnd *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  HWND__ *pHVar3;
  HBRUSH__ *local_8;
  
  iVar1 = FUN_004aac53(param_2,&local_8);
  if (iVar1 == 0) {
    iVar1 = FUN_004bbf67();
    pHVar3 = (HWND__ *)0x0;
    if (param_2 != (CWnd *)0x0) {
      pHVar3 = *(HWND__ **)(param_2 + 0x1c);
    }
    iVar2 = GrayCtlColor(*(HDC__ **)(param_1 + 4),pHVar3,param_3,*(HBRUSH__ **)(iVar1 + 4),
                         *(ulong *)(iVar1 + 8));
    if (iVar2 == 0) {
      local_8 = (HBRUSH__ *)FUN_004a8882((int *)this);
    }
    else {
      local_8 = *(HBRUSH__ **)(iVar1 + 4);
    }
  }
  return local_8;
}


