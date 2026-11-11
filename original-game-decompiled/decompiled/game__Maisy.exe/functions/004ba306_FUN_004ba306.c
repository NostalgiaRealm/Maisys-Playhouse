
/* ==== FUN_004ba306 @ 004ba306 ==== 
 * signature: undefined __thiscall FUN_004ba306(void * this, LPCSTR param_1, int param_2, int param_3)
 * body: 004ba306-004ba438
 */

void __thiscall FUN_004ba306(void *this,LPCSTR param_1,int param_2,int param_3)

{
  int iVar1;
  CString *this_00;
  
  if (param_2 == 0) {
    this_00 = (CString *)((int)this + 0x14);
    if (((*(int *)(*(int *)this_00 + -8) == 0) ||
        ((*(int *)((int)this + 0x10) == 3 &&
         ((this_00 = (CString *)((int)this + 0x18), *(int *)(*(int *)this_00 + -8) == 0 ||
          (this_00 = (CString *)((int)this + 0x1c), *(int *)(*(int *)this_00 + -8) == 0)))))) ||
       ((*(int *)((int)this + 0x10) == 3 &&
        (this_00 = (CString *)((int)this + 0x20), *(int *)(*(int *)this_00 + -8) == 0)))) {
      CString::operator=(this_00,param_1);
    }
  }
  else {
    iVar1 = lstrcmpA(param_1,"pt");
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 3;
    }
    else {
      iVar1 = lstrcmpA(param_1,"p");
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x10) = 2;
      }
      else {
        iVar1 = lstrcmpA(param_1,"dde");
        if (iVar1 == 0) {
          AfxOleSetUserCtrl(0);
          *(undefined4 *)((int)this + 0x10) = 4;
        }
        else {
          iVar1 = lstrcmpA(param_1,"Embedding");
          if (iVar1 == 0) {
            AfxOleSetUserCtrl(0);
            *(undefined4 *)((int)this + 8) = 1;
            *(undefined4 *)((int)this + 4) = 0;
          }
          else {
            iVar1 = lstrcmpA(param_1,"Automation");
            if (iVar1 == 0) {
              AfxOleSetUserCtrl(0);
              *(undefined4 *)((int)this + 0xc) = 1;
              *(undefined4 *)((int)this + 4) = 0;
            }
          }
        }
      }
    }
  }
  if (param_3 != 0) {
    if ((*(int *)((int)this + 0x10) == 0) && (*(int *)(*(int *)((int)this + 0x14) + -8) != 0)) {
      *(undefined4 *)((int)this + 0x10) = 1;
    }
    if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0xc) == 0)) {
      *(undefined4 *)((int)this + 4) = 1;
    }
    else {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return;
}


