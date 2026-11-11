
/* ==== FUN_004b87c2 @ 004b87c2 ==== 
 * signature: undefined __thiscall FUN_004b87c2(void * this, void * param_1)
 * body: 004b87c2-004b87e2
 */

void __thiscall FUN_004b87c2(void *this,void *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CPtrList::Find((CPtrList *)((int)this + 0x6c),param_1,(__POSITION *)0x0);
  if (p_Var1 != (__POSITION *)0x0) {
    CPtrList::RemoveAt((CPtrList *)((int)this + 0x6c),p_Var1);
  }
  return;
}


