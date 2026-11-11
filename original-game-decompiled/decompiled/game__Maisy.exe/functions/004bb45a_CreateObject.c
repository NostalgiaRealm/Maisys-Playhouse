
/* ==== CDC::CreateObject @ 004bb45a ==== 
 * signature: CObject * __stdcall CreateObject(void)
 * body: 004bb45a-004bb4a3
 * note: Library Function - Single Match  public: static class CObject * __stdcall CDC::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CObject * __stdcall CDC::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CObject * CDC::CreateObject(void)

{
  CDC *this;
  CObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CDC *)FUN_004a5fed(0x10);
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pCVar1 = (CObject *)0x0;
  if (this != (CDC *)0x0) {
    pCVar1 = (CObject *)CDC(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


