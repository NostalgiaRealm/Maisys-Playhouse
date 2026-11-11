
/* ==== FUN_004a41cd @ 004a41cd ==== 
 * signature: int __stdcall FUN_004a41cd(HWND__ * param_1, uint param_2, uint param_3, uint param_4)
 * body: 004a41cd-004a4316
 */

int FUN_004a41cd(HWND__ *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  _AFX_THREAD_STATE *p_Var2;
  CObject *this;
  
  if (param_1 == (HWND__ *)0x0) {
    iVar1 = 0;
  }
  else {
    p_Var2 = AfxGetThreadState();
    if (*(CWnd **)(p_Var2 + 0x18) != (CWnd *)0x0) {
      CWnd::SubclassWindow(*(CWnd **)(p_Var2 + 0x18),param_1);
      *(undefined4 *)(p_Var2 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      iVar1 = AfxDlgProc(param_1,0x110,param_3,param_4);
    }
    else if ((DAT_004e53ec == param_2) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageA(param_1,0x111,0xe146,0);
      iVar1 = 1;
    }
    else if (param_2 < 0xc000) {
      iVar1 = 0;
    }
    else {
      this = FUN_004a8970(param_1);
      iVar1 = CObject::IsKindOf(this,(CRuntimeClass *)&PTR_s_CFileDialog_004dd708);
      if ((iVar1 == 0) || (((byte)this[0x92] & 8) == 0)) {
        if (param_2 == DAT_004e53dc) {
          iVar1 = (**(code **)(*(int *)this + 0xd4))(param_4);
        }
        else if (DAT_004e53e8 == param_2) {
          if (DAT_004e51f8 != 0) {
            *(uint *)(this + 500) = param_4;
          }
          iVar1 = (**(code **)(*(int *)this + 0xd8))();
          *(undefined4 *)(this + 500) = 0;
        }
        else if (DAT_004e53e4 == param_2) {
          (**(code **)(*(int *)this + 0xdc))(param_3,param_4 & 0xffff,param_4 >> 0x10);
          iVar1 = 0;
        }
        else if (param_2 == DAT_004e53e0) {
          iVar1 = (**(code **)(*(int *)this + 0xd4))();
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


