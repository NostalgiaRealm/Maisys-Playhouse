
/* ==== FUN_130019a0 @ 130019a0 ==== 
 * signature: undefined4 __cdecl FUN_130019a0(undefined4 param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
 * body: 130019a0-13001a1d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_130019a0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int local_30;
  undefined2 local_2c;
  short local_2a;
  
  uVar1 = FUN_130038f0(param_2,(uint *)s_removemenu_13008074);
  if ((char)uVar1 != '\0') {
    local_2c = 0x14;
    local_2a = 1;
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_30);
    _DAT_13008d34 = (*pcVar2)(local_30,param_1,param_4,&local_2c);
    if (local_2a != 0) {
      return 0;
    }
  }
  return 0x10000;
}


