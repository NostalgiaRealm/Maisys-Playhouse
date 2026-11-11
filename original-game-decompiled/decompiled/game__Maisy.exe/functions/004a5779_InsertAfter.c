
/* ==== InsertAfter @ 004a5779 ==== 
 * signature: undefined __thiscall InsertAfter(void * this, int * param_1, undefined4 param_2)
 * body: 004a5779-004a57b6
 * note: Library Function - Multiple Matches With Same Base Name  public: struct __POSITION * __thiscall CObList::InsertAfter(struct __POSITION *,class CObject *)  public: struct __POSITION * __thiscall CPtrList::InsertAfter(struct __POSITION *,void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CObList::InsertAfter(struct __POSITION *,class CObject *)
    public: struct __POSITION * __thiscall CPtrList::InsertAfter(struct __POSITION *,void *)
   
   Library: Visual Studio 1998 Release */

void __thiscall InsertAfter(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_004a564c(this,param_2);
  }
  else {
    iVar1 = NewNode(this,(int)param_1,*param_1);
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (*param_1 == 0) {
      *(int *)((int)this + 8) = iVar1;
    }
    else {
      *(int *)(*param_1 + 4) = iVar1;
    }
    *param_1 = iVar1;
  }
  return;
}


