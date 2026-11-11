
/* ==== FUN_004745f0 @ 004745f0 ==== 
 * signature: undefined __thiscall FUN_004745f0(void * this, char param_1, char param_2)
 * body: 004745f0-0047463c
 */

void __thiscall FUN_004745f0(void *this,char param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)this;
  cVar2 = (**(code **)(iVar1 + 0x68))(5);
  if (cVar2 != '\0') {
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
    (**(code **)(iVar1 + 0x44))(5,FUN_00419630,&local_14);
  }
  FUN_0046c760(this,param_1,param_2);
  return;
}


