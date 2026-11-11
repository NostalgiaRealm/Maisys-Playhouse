
/* ==== FUN_0048a530 @ 0048a530 ==== 
 * signature: undefined4 __thiscall FUN_0048a530(void * this, undefined4 param_1)
 * body: 0048a530-0048a57f
 */

undefined4 __thiscall FUN_0048a530(void *this,undefined4 param_1)

{
  char cVar1;
  undefined1 local_24 [22];
  undefined4 local_e;
  int local_8;
  
  local_8 = 0;
  cVar1 = (**(code **)(*(int *)this + 0x100))(param_1,&local_8,local_24);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(char *)((int)this + 0x60) != '\0') {
    return local_e;
  }
  return *(undefined4 *)(local_8 + 0x26);
}


