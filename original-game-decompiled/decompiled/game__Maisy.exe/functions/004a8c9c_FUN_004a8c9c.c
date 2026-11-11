
/* ==== FUN_004a8c9c @ 004a8c9c ==== 
 * signature: long __stdcall FUN_004a8c9c(HWND__ * param_1, uint param_2, HDC__ * param_3, HWND__ * param_4)
 * body: 004a8c9c-004a8d17
 */

long FUN_004a8c9c(HWND__ *param_1,uint param_2,HDC__ *param_3,HWND__ *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_004bbf67();
  if (((*(HBRUSH__ **)(iVar1 + 4) != (HBRUSH__ *)0x0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = CWnd::GrayCtlColor(param_3,param_4,param_2 - 0x132,*(HBRUSH__ **)(iVar1 + 4),
                                 *(ulong *)(iVar1 + 8)), iVar2 != 0)) {
    return *(long *)(iVar1 + 4);
  }
  lVar3 = _AfxActivationWndProc(param_1,param_2,(uint)param_3,(long)param_4);
  return lVar3;
}


