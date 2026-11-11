
/* ==== FUN_00411700 @ 00411700 ==== 
 * signature: uint __thiscall FUN_00411700(void * this, int param_1, int param_2)
 * body: 00411700-0041175f
 */

uint __thiscall FUN_00411700(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_2 != 0) && (0 < param_1)) {
    uVar1 = *(uint *)this;
    if (uVar1 != 0) {
      puVar2 = (uint *)FUN_004119c0(this,uVar1,param_2);
      while ((param_1 = param_1 + -1, param_1 != 0 && (*(uint *)((int)this + 4) != uVar1))) {
        uVar1 = *puVar2;
        puVar2 = (uint *)FUN_004119c0(this,uVar1,param_2);
      }
      return -(uint)(param_1 == 0) & uVar1;
    }
    return 0;
  }
  return 0;
}


