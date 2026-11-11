
/* ==== FUN_0044aa80 @ 0044aa80 ==== 
 * signature: undefined __thiscall FUN_0044aa80(void * this, char * param_1, int param_2, undefined4 param_3)
 * body: 0044aa80-0044aace
 */

void __thiscall FUN_0044aa80(void *this,char *param_1,int param_2,undefined4 param_3)

{
  char *local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = FUN_0043b9c0(param_1,0xff);
  if (param_2 == 0) {
    param_2 = (**(code **)(*(int *)this + 0x110))(1);
  }
  local_8 = param_3;
  local_c = param_2;
  (**(code **)(*(int *)this + 0xfc))(&local_10);
  return;
}


