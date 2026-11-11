
/* ==== FUN_00481960 @ 00481960 ==== 
 * signature: undefined4 __thiscall FUN_00481960(void * this, uint * param_1, uint param_2, undefined2 param_3, uint param_4, uint param_5)
 * body: 00481960-004819e0
 */

undefined4 __thiscall
FUN_00481960(void *this,uint *param_1,uint param_2,undefined2 param_3,uint param_4,uint param_5)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x15a);
  *(byte *)((int)this + 0x15a) = ((byte)param_4 & 1 ^ bVar1) & 1 ^ bVar1;
  FUN_00481810(this,param_1,param_2);
  FUN_004817e0(this,(undefined2 *)(param_1 + 1),param_3);
  FUN_00481810(this,(uint *)((int)param_1 + 6),param_4);
  FUN_00481810(this,(uint *)((int)param_1 + 10),param_5);
  *(byte *)((int)this + 0x15a) =
       (*(byte *)((int)this + 0x15a) ^ bVar1 & 1) & 1 ^ *(byte *)((int)this + 0x15a);
  return 0;
}


