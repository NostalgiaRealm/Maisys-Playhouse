
/* ==== FUN_004afac9 @ 004afac9 ==== 
 * signature: undefined __thiscall FUN_004afac9(void * this, char * param_1)
 * body: 004afac9-004afae5
 */

void __thiscall FUN_004afac9(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 0x1c),param_1);
  (**(code **)(*(int *)this + 0xa4))();
  return;
}


