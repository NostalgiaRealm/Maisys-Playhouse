
/* ==== CDC::Attach @ 004b0c9b ==== 
 * signature: int __thiscall Attach(CDC * this, HDC__ * param_1)
 * body: 004b0c9b-004b0cd6
 * note: Library Function - Single Match  public: int __thiscall CDC::Attach(struct HDC__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDC::Attach(struct HDC__ *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::Attach(CDC *this,HDC__ *param_1)

{
  CHandleMap *this_00;
  CAssoc *pCVar1;
  
  if (param_1 != (HDC__ *)0x0) {
    this_00 = afxMapHWND(1);
    *(HDC__ **)(this + 4) = param_1;
    pCVar1 = FUN_004a5ab8(this_00,param_1);
    *(CDC **)pCVar1 = this;
    (**(code **)(*(int *)this + 0x14))(*(undefined4 *)(this + 4));
  }
  return (uint)(param_1 != (HDC__ *)0x0);
}


