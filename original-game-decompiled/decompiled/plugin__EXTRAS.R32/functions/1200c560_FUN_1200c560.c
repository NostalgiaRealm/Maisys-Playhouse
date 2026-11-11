
/* ==== FUN_1200c560 @ 1200c560 ==== 
 * signature: undefined __thiscall FUN_1200c560(void * this, void * param_1, char param_2)
 * body: 1200c560-1200c5c5
 */

void __thiscall FUN_1200c560(void *this,void *param_1,char param_2)

{
  byte bVar1;
  char local_4;
  byte local_3;
  undefined1 local_2;
  
  FUN_12016450(param_1,(short)*(char *)this,(short)*(char *)((int)this + 3),0);
  bVar1 = *(char *)((int)this + 1) + param_2;
  if (0x7f < bVar1) {
    bVar1 = bVar1 + ((byte)(bVar1 + 0x8c) / 0xc) * -0xc;
  }
  local_2 = *(undefined1 *)((int)this + 2);
  local_4 = *(char *)this + -0x70;
  local_3 = bVar1;
  FUN_12016430(param_1,&local_4,3);
  *(byte *)((int)this + 4) = bVar1;
  return;
}


