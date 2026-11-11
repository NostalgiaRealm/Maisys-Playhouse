
/* ==== FUN_00479f90 @ 00479f90 ==== 
 * signature: undefined4 __cdecl FUN_00479f90(undefined4 * param_1, undefined4 * param_2)
 * body: 00479f90-00479fff
 */

uint __cdecl FUN_00479f90(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar1 = FUN_0043d430((char *)*param_1,(char *)param_2[1]);
    if (uVar1 == 0) {
      return 1;
    }
  }
  else if (uVar1 == 1) {
    uVar1 = (**(code **)(*(int *)param_1[3] + 0x130))(FUN_00479f90,param_2);
    if ((char)uVar1 != '\0') {
      local_8 = *param_1;
      uVar2 = (**(code **)(*(int *)*param_2 + 0xe8))(&local_8);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


