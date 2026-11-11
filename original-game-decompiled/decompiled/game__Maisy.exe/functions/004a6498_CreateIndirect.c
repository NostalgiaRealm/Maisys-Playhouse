
/* ==== CDialog::CreateIndirect @ 004a6498 ==== 
 * signature: int __thiscall CreateIndirect(CDialog * this, DLGTEMPLATE * param_1, CWnd * param_2, void * param_3, HINSTANCE__ * param_4)
 * body: 004a6498-004a64d8
 * note: Library Function - Single Match  protected: int __thiscall CDialog::CreateIndirect(struct DLGTEMPLATE const *,class CWnd *,void *,struct HINSTANCE__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CDialog::CreateIndirect(struct DLGTEMPLATE const *,class CWnd *,void
   *,struct HINSTANCE__ *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDialog::CreateIndirect
          (CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3,HINSTANCE__ *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (CWnd *)0x0) {
    iVar1 = FUN_004a7052();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004a7052();
      (**(code **)(*piVar2 + 0x78))();
    }
  }
  *(void **)(this + 0x4c) = param_3;
  iVar1 = FUN_004a652f();
  return iVar1;
}


