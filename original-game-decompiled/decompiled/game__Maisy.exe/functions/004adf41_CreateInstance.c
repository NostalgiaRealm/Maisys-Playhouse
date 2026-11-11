
/* ==== AFX_COM::CreateInstance @ 004adf41 ==== 
 * signature: long __thiscall CreateInstance(AFX_COM * this, _GUID * param_1, IUnknown * param_2, _GUID * param_3, void * * param_4)
 * body: 004adf41-004adf8d
 * note: Library Function - Single Match  public: long __thiscall AFX_COM::CreateInstance(struct _GUID const &,struct IUnknown *,struct _GUID const &,void * *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: long __thiscall AFX_COM::CreateInstance(struct _GUID const &,struct IUnknown *,struct
   _GUID const &,void * *)
   
   Library: Visual Studio 1998 Release */

long __thiscall
AFX_COM::CreateInstance
          (AFX_COM *this,_GUID *param_1,IUnknown *param_2,_GUID *param_3,void **param_4)

{
  long lVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  lVar1 = GetClassObject(this,param_1,(_GUID *)&DAT_004cd1a8,&local_8);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*local_8 + 0xc))(local_8,param_2,param_3,param_4);
    (**(code **)(*local_8 + 8))(local_8);
  }
  return lVar1;
}


