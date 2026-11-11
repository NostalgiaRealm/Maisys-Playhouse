
/* ==== FUN_13003510 @ 13003510 ==== 
 * signature: undefined4 __cdecl FUN_13003510(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 13003510-130037c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13003510(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar3 = 0x10000;
  uVar1 = FUN_130038f0(param_2,(uint *)s_sysversion_130082bc);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 4,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_nativecpu_130082a8);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x28,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_architecture_13008294);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x16,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)&DAT_13008280);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x3a,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_totalram_1300826c);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_13003830(param_1,param_1 + 0x4c,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_currentram_13008258);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0x100000;
    uVar3 = FUN_13003830(param_1,param_1 + 0x52,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_computername_13008244);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x58,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_processor_13008230);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x6a,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_soundcard_1300821c);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x7c,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_bitdepth_13008208);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_13003830(param_1,param_1 + 0x8e,param_4);
    return uVar3;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_screensize_130081f4);
  if ((char)uVar1 != '\0') {
    if (*param_4 == 0x6a) {
      *param_4 = 10;
      param_4[2] = 0;
      param_4[1] = 0;
    }
    pcVar2 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_4);
    _DAT_13008d34 = (*pcVar2)(local_4,param_1,param_1 + 0x94,param_4);
    return _DAT_13008d34;
  }
  uVar1 = FUN_130038f0(param_2,(uint *)s_keyboardtype_130081e0);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_130037d0(param_1,param_1 + 0x9a,param_4);
  }
  return uVar3;
}


