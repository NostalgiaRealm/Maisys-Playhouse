
/* ==== CreateObject @ 004bb523 ==== 
 * signature: undefined4 * __stdcall CreateObject(void)
 * body: 004bb523-004bb562;004bb56b-004bb582
 * note: Library Function - Multiple Matches With Same Base Name  public: static class CObject * __stdcall CGdiObject::CreateObject(void)  public: static class CObject * __stdcall CMenu::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CObject * __stdcall CGdiObject::CreateObject(void)
    public: static class CObject * __stdcall CMenu::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * CreateObject(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  puVar1 = (undefined4 *)FUN_004a5fed(8);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *puVar1 = &PTR_FUN_004cacec;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *puVar1 = &PTR_FUN_004cc33c;
    puVar1[1] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return puVar1;
}


