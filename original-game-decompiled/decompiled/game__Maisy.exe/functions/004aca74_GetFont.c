
/* ==== CDialogTemplate::GetFont @ 004aca74 ==== 
 * signature: int __thiscall GetFont(CDialogTemplate * this, CString * param_1, ushort * param_2)
 * body: 004aca74-004acaa1
 * note: Library Function - Single Match  public: int __thiscall CDialogTemplate::GetFont(class CString &,unsigned short &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::GetFont(class CString &,unsigned short &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CDialogTemplate::GetFont(CDialogTemplate *this,CString *param_1,ushort *param_2)

{
  DLGTEMPLATE *pDVar1;
  int iVar2;
  
  pDVar1 = GlobalLock(*(HGLOBAL *)this);
  iVar2 = GetFont(pDVar1,param_1,param_2);
  GlobalUnlock(*(HGLOBAL *)this);
  return iVar2;
}


