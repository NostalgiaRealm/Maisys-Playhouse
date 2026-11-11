
/* ==== FUN_0042d430 @ 0042d430 ==== 
 * signature: undefined __thiscall FUN_0042d430(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 0042d430-0042d480
 */

void __thiscall
FUN_0042d430(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  for (; this != (int *)0x0; this = *(void **)((int)this + 0x3e)) {
    (**(code **)(*(int *)this + 600))(0x1b3,&local_1c,0x18);
  }
  return;
}


