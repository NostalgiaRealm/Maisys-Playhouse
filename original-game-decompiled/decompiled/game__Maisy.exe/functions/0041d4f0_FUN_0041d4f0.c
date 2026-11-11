
/* ==== FUN_0041d4f0 @ 0041d4f0 ==== 
 * signature: int __thiscall FUN_0041d4f0(void * this, int * param_1, undefined4 * param_2, undefined2 * param_3)
 * body: 0041d4f0-0041d54c
 */

int __thiscall FUN_0041d4f0(void *this,int *param_1,undefined4 *param_2,undefined2 *param_3)

{
  short sVar1;
  uint3 uVar2;
  
  (**(code **)(*(int *)this + 0x114))();
  *param_1 = *(int *)((int)this + 0xc4);
  *param_2 = 0;
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = *(undefined2 *)((int)this + 0x104);
  }
  sVar1 = *(short *)((int)this + 0x104);
  uVar2 = (uint3)(CONCAT22((short)((uint)param_3 >> 0x10),sVar1) >> 8);
  if (((sVar1 != 1) && (sVar1 < 9)) && (*(int *)((int)this + 0x106) == 0)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


