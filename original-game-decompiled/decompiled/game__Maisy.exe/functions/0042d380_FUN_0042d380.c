
/* ==== FUN_0042d380 @ 0042d380 ==== 
 * signature: int * __thiscall FUN_0042d380(void * this, int param_1, int param_2)
 * body: 0042d380-0042d3e4
 */

int * __thiscall FUN_0042d380(void *this,int param_1,int param_2)

{
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_1c = param_1;
  local_18 = param_2;
  while( true ) {
    if (this == (int *)0x0) {
      return (int *)0x0;
    }
    (**(code **)(*(int *)this + 600))(0x1b4,&local_1c,0x18);
    if ((local_c == param_1) && (local_8 == param_2)) break;
    this = *(void **)((int)this + 0x3e);
  }
  return this;
}


