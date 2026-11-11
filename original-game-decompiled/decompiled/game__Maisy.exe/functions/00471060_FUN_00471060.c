
/* ==== FUN_00471060 @ 00471060 ==== 
 * signature: undefined4 __thiscall FUN_00471060(void * this, short * param_1, int param_2, int param_3)
 * body: 00471060-00471092
 */

undefined4 __thiscall FUN_00471060(void *this,short *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined3 uVar2;
  
  sVar1 = *(short *)((int)this + 0xaa);
  uVar2 = (undefined3)((uint)param_1 >> 8);
  if (((sVar1 != 0) && (param_2 == 0)) && (param_3 == 0)) {
    *param_1 = sVar1;
    return CONCAT31(uVar2,1);
  }
  *param_1 = sVar1;
  return CONCAT31(uVar2,1);
}


