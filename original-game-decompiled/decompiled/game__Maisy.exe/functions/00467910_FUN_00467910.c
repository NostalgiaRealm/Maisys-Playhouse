
/* ==== FUN_00467910 @ 00467910 ==== 
 * signature: undefined4 __cdecl FUN_00467910(undefined4 param_1, int param_2, char * param_3, char * param_4)
 * body: 00467910-0046794b
 */

undefined4 __cdecl FUN_00467910(undefined4 param_1,int param_2,char *param_3,char *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0x10000;
  }
  piVar1 = (int *)FUN_0048b560(0,param_2);
  if (*piVar1 == 0) {
    return 0x10000;
  }
  uVar2 = FUN_0042bba0(*piVar1,param_3,param_4);
  return uVar2;
}


