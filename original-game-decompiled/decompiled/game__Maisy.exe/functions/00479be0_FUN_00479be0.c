
/* ==== FUN_00479be0 @ 00479be0 ==== 
 * signature: undefined __thiscall FUN_00479be0(void * this, int * param_1, uint param_2)
 * body: 00479be0-00479c64
 */

void __thiscall FUN_00479be0(void *this,int *param_1,uint param_2)

{
  byte bVar1;
  uint local_14;
  undefined2 local_10;
  uint local_e;
  uint local_a;
  undefined2 local_6;
  
  bVar1 = (byte)param_2 & 1;
  local_6 = FUN_0044aea0(bVar1,0);
  local_a = FUN_0044ae60(bVar1,0x10);
  local_10 = FUN_0044aea0(bVar1,0);
  local_e = FUN_0044ae60(bVar1,param_2);
  local_14 = FUN_0044ae60(bVar1,0x19);
  (**(code **)(*param_1 + 0x158))(&local_14,0x10);
  if ((param_2 & 0x40) == 0) {
    (**(code **)(*(int *)this + 0x1c))(0);
  }
  return;
}


