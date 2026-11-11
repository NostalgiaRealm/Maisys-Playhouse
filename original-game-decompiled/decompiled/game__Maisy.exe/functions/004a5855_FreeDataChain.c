
/* ==== CPlex::FreeDataChain @ 004a5855 ==== 
 * signature: void __thiscall FreeDataChain(CPlex * this)
 * body: 004a5855-004a586c
 * note: Library Function - Single Match  public: void __thiscall CPlex::FreeDataChain(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CPlex::FreeDataChain(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CPlex::FreeDataChain(CPlex *this)

{
  CPlex *pCVar1;
  
  while (this != (CPlex *)0x0) {
    pCVar1 = *(CPlex **)this;
    FUN_004a602d(this);
    this = pCVar1;
  }
  return;
}


