
/* ==== CWnd::GrayCtlColor @ 004ab28a ==== 
 * signature: int __stdcall GrayCtlColor(HDC__ * param_1, HWND__ * param_2, uint param_3, HBRUSH__ * param_4, ulong param_5)
 * body: 004ab28a-004ab306
 * note: Library Function - Single Match  public: static int __stdcall CWnd::GrayCtlColor(struct HDC__ *,struct HWND__ *,unsigned int,struct HBRUSH__ *,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __stdcall CWnd::GrayCtlColor(struct HDC__ *,struct HWND__ *,unsigned
   int,struct HBRUSH__ *,unsigned long)
   
   Library: Visual Studio 1998 Release */

int CWnd::GrayCtlColor(HDC__ *param_1,HWND__ *param_2,uint param_3,HBRUSH__ *param_4,ulong param_5)

{
  int iVar1;
  undefined1 local_10 [4];
  COLORREF local_c;
  
  if ((((param_1 == (HDC__ *)0x0) || (param_4 == (HBRUSH__ *)0x0)) || (param_3 == 1)) ||
     ((param_3 == 0 || (param_3 == 5)))) {
LAB_004ab2fd:
    iVar1 = 0;
  }
  else {
    if (param_3 == 2) {
      iVar1 = _AfxIsComboBoxControl(param_2,2);
      if (iVar1 == 0) goto LAB_004ab2fd;
    }
    GetObjectA(param_4,0xc,local_10);
    SetBkColor(param_1,local_c);
    if (param_5 == 0xffffffff) {
      param_5 = GetSysColor(8);
    }
    SetTextColor(param_1,param_5);
    iVar1 = 1;
  }
  return iVar1;
}


