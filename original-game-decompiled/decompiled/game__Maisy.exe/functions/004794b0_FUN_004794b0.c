
/* ==== FUN_004794b0 @ 004794b0 ==== 
 * signature: uint __thiscall FUN_004794b0(void * this, byte * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004794b0-004794cb
 */

uint __thiscall FUN_004794b0(void *this,byte *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00479390(this,param_1);
  if ((short)uVar1 == 0) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00479410(this,(short)uVar1,param_2,param_3);
  return uVar1;
}


