
/* ==== CDocument::SetPathName @ 004afc47 ==== 
 * signature: void __thiscall SetPathName(CDocument * this, char * param_1, int param_2)
 * body: 004afc47-004afcc4
 * note: Library Function - Single Match  public: virtual void __thiscall CDocument::SetPathName(char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocument::SetPathName(char const *,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::SetPathName(CDocument *this,char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char local_208 [256];
  char local_108 [260];
  
  AfxFullPath(local_108,param_1);
  CString::operator=((CString *)(this + 0x20),local_108);
  *(undefined4 *)(this + 0x4c) = 0;
  uVar1 = AfxGetFileTitle(local_108,local_208,0x100);
  if (uVar1 == 0) {
    (**(code **)(*(int *)this + 0x54))(local_208);
  }
  if (param_2 != 0) {
    iVar2 = FUN_004bafca();
    (**(code **)(**(int **)(iVar2 + 4) + 0x84))(*(undefined4 *)(this + 0x20));
  }
  return;
}


