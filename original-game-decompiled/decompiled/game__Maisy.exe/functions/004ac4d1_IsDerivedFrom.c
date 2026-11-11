
/* ==== CRuntimeClass::IsDerivedFrom @ 004ac4d1 ==== 
 * signature: int __thiscall IsDerivedFrom(CRuntimeClass * this, CRuntimeClass * param_1)
 * body: 004ac4d1-004ac4ed
 * note: Library Function - Single Match  public: int __thiscall CRuntimeClass::IsDerivedFrom(struct CRuntimeClass const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CRuntimeClass::IsDerivedFrom(struct CRuntimeClass const *)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CRuntimeClass::IsDerivedFrom(CRuntimeClass *this,CRuntimeClass *param_1)

{
  while( true ) {
    if (this == (CRuntimeClass *)0x0) {
      return 0;
    }
    if (param_1 == this) break;
    this = *(CRuntimeClass **)(this + 0x10);
  }
  return 1;
}


