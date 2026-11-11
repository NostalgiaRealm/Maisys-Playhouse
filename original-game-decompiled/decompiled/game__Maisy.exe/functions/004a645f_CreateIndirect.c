
/* ==== CDialog::CreateIndirect @ 004a645f ==== 
 * signature: int __thiscall CreateIndirect(CDialog * this, void * param_1, CWnd * param_2, HINSTANCE__ * param_3)
 * body: 004a645f-004a6481
 * note: Library Function - Single Match  protected: int __thiscall CDialog::CreateIndirect(void *,class CWnd *,struct HINSTANCE__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CDialog::CreateIndirect(void *,class CWnd *,struct HINSTANCE__ *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  DLGTEMPLATE *pDVar1;
  int iVar2;
  
  pDVar1 = LockResource(param_1);
  iVar2 = CreateIndirect(this,pDVar1,param_2,(void *)0x0,param_3);
  return iVar2;
}


