
/* ==== CException::Delete @ 004a60e9 ==== 
 * signature: void __thiscall Delete(CException * this)
 * body: 004a60e9-004a60fa
 * note: Library Function - Single Match  public: void __thiscall CException::Delete(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CException::Delete(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CException::Delete(CException *this)

{
  if ((0 < *(int *)(this + 4)) && (this != (CException *)0x0)) {
    (**(code **)(*(int *)this + 4))(1);
  }
  return;
}


