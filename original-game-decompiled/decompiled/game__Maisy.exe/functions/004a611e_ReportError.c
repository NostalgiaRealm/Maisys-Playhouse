
/* ==== CException::ReportError @ 004a611e ==== 
 * signature: int __thiscall ReportError(CException * this, uint param_1, uint param_2)
 * body: 004a611e-004a6171
 * note: Library Function - Single Match  public: virtual int __thiscall CException::ReportError(unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CException::ReportError(unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CException::ReportError(CException *this,uint param_1,uint param_2)

{
  int iVar1;
  char local_88 [128];
  uint local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x14))(local_88,0x80,&local_8);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_2 = 0xf020;
    }
    iVar1 = AfxMessageBox(param_2,param_1,local_8);
  }
  else {
    iVar1 = AfxMessageBox(local_88,param_1,local_8);
  }
  return iVar1;
}


