
/* ==== CObject::IsKindOf @ 004ac404 ==== 
 * signature: int __thiscall IsKindOf(CObject * this, CRuntimeClass * param_1)
 * body: 004ac404-004ac415
 * note: Library Function - Single Match  public: int __thiscall CObject::IsKindOf(struct CRuntimeClass const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CObject::IsKindOf(struct CRuntimeClass const *)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CObject::IsKindOf(CObject *this,CRuntimeClass *param_1)

{
  CRuntimeClass *this_00;
  int iVar1;
  
  this_00 = (CRuntimeClass *)(*(code *)**(undefined4 **)this)();
  iVar1 = CRuntimeClass::IsDerivedFrom(this_00,param_1);
  return iVar1;
}


