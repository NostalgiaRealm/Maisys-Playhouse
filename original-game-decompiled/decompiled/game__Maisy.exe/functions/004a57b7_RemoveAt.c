
/* ==== CPtrList::RemoveAt @ 004a57b7 ==== 
 * signature: void __thiscall RemoveAt(CPtrList * this, __POSITION * param_1)
 * body: 004a57b7-004a57e8
 * note: Library Function - Single Match  public: void __thiscall CPtrList::RemoveAt(struct __POSITION *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CPtrList::RemoveAt(struct __POSITION *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CPtrList::RemoveAt(CPtrList *this,__POSITION *param_1)

{
  if (*(__POSITION **)(this + 4) == param_1) {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  }
  else {
    **(undefined4 **)(param_1 + 4) = *(undefined4 *)param_1;
  }
  if (*(__POSITION **)(this + 8) == param_1) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  FreeNode(this,(undefined4 *)param_1);
  return;
}


