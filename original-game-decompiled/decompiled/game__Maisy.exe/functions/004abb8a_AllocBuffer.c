
/* ==== CString::AllocBuffer @ 004abb8a ==== 
 * signature: void __thiscall AllocBuffer(CString * this, int param_1)
 * body: 004abb8a-004abbc5
 * note: Library Function - Single Match  protected: void __thiscall CString::AllocBuffer(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CString::AllocBuffer(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::AllocBuffer(CString *this,int param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    ppuVar1 = FUN_004abb3e();
    puVar2 = (undefined4 *)*ppuVar1;
  }
  else {
    puVar2 = (undefined4 *)FUN_004a5fed(param_1 + 0xd);
    *puVar2 = 1;
    *(undefined1 *)((int)puVar2 + param_1 + 0xc) = 0;
    puVar2[1] = param_1;
    puVar2[2] = param_1;
    puVar2 = puVar2 + 3;
  }
  *(undefined4 **)this = puVar2;
  return;
}


