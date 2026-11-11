
/* ==== FUN_004a57e9 @ 004a57e9 ==== 
 * signature: undefined4 * __thiscall FUN_004a57e9(void * this, int param_1)
 * body: 004a57e9-004a580b
 */

undefined4 * __thiscall FUN_004a57e9(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < *(int *)((int)this + 0xc)) {
    puVar1 = *(undefined4 **)((int)this + 4);
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}


