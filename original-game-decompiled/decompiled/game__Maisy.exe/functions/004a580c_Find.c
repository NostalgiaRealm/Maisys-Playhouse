
/* ==== CPtrList::Find @ 004a580c ==== 
 * signature: __POSITION * __thiscall Find(CPtrList * this, void * param_1, __POSITION * param_2)
 * body: 004a580c-004a5832
 * note: Library Function - Single Match  public: struct __POSITION * __thiscall CPtrList::Find(void *,struct __POSITION *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct __POSITION * __thiscall CPtrList::Find(void *,struct __POSITION *)const 
   
   Library: Visual Studio 1998 Release */

__POSITION * __thiscall CPtrList::Find(CPtrList *this,void *param_1,__POSITION *param_2)

{
  __POSITION *p_Var1;
  
  if (param_2 == (__POSITION *)0x0) {
    p_Var1 = *(__POSITION **)(this + 4);
  }
  else {
    p_Var1 = *(__POSITION **)param_2;
  }
  while( true ) {
    if (p_Var1 == (__POSITION *)0x0) {
      return (__POSITION *)0x0;
    }
    if (*(void **)(p_Var1 + 8) == param_1) break;
    p_Var1 = *(__POSITION **)p_Var1;
  }
  return p_Var1;
}


