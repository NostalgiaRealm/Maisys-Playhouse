
/* ==== FUN_120044d0 @ 120044d0 ==== 
 * signature: undefined __thiscall FUN_120044d0(void * this, void * param_1)
 * body: 120044d0-12004539
 */

void __thiscall FUN_120044d0(void *this,void *param_1)

{
  char local_4 [4];
  
  FUN_12004450(this,param_1);
  if (*(char *)((int)this + 5) != '\0') {
    local_4[0] = *(char *)this + -0x50;
    local_4[1] = 0x40;
    local_4[2] = 0;
    FUN_12016430(param_1,local_4,3);
    *(undefined1 *)((int)this + 5) = 0;
  }
  if (*(short *)((int)this + 6) != 0x40) {
    local_4[0] = *(char *)this + -0x20;
    local_4[1] = 0;
    local_4[2] = 0x40;
    FUN_12016430(param_1,local_4,3);
  }
  return;
}


