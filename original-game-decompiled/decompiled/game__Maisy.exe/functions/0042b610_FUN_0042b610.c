
/* ==== FUN_0042b610 @ 0042b610 ==== 
 * signature: undefined __thiscall FUN_0042b610(void * this, void * param_1)
 * body: 0042b610-0042b665
 */

void __thiscall FUN_0042b610(void *this,void *param_1)

{
  undefined1 local_c [8];
  
  if (*(void **)((int)this + 0x48) != param_1) {
    *(void **)((int)this + 0x48) = param_1;
    if (param_1 != (void *)0x0) {
      FUN_0048bf00(param_1,local_c);
      (**(code **)(**(int **)((int)this + 0x3e) + 0x380))();
      (**(code **)(**(int **)((int)this + 0x3e) + 900))(local_c,0);
      return;
    }
    (**(code **)(**(int **)((int)this + 0x3e) + 0x380))();
  }
  return;
}


