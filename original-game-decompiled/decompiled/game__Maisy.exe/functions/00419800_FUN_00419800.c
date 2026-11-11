
/* ==== FUN_00419800 @ 00419800 ==== 
 * signature: undefined4 __thiscall FUN_00419800(void * this, int param_1)
 * body: 00419800-0041984f
 */

undefined4 __thiscall FUN_00419800(void *this,int param_1)

{
  char cVar1;
  void *this_00;
  int local_c;
  int local_8;
  
  this_00 = FUN_0046da90(this,'\x01','\x01');
  cVar1 = FUN_00422620(this_00,param_1,&local_8,&local_c);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ac))(local_8,local_c);
    return 0;
  }
  return 0x40003;
}


