
/* ==== CMultiDocTemplate::RemoveDocument @ 004af71f ==== 
 * signature: void __thiscall RemoveDocument(CMultiDocTemplate * this, CDocument * param_1)
 * body: 004af71f-004af746
 * note: Library Function - Single Match  public: virtual void __thiscall CMultiDocTemplate::RemoveDocument(class CDocument *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMultiDocTemplate::RemoveDocument(class CDocument *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMultiDocTemplate::RemoveDocument(CMultiDocTemplate *this,CDocument *param_1)

{
  __POSITION *p_Var1;
  
  FUN_004b3490((int)param_1);
  p_Var1 = CPtrList::Find((CPtrList *)(this + 0x6c),param_1,(__POSITION *)0x0);
  CPtrList::RemoveAt((CPtrList *)(this + 0x6c),p_Var1);
  return;
}


