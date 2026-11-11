
/* ==== FUN_004564e0 @ 004564e0 ==== 
 * signature: undefined4 __cdecl FUN_004564e0(short * param_1, char * param_2, uint param_3, undefined4 * param_4, undefined4 * param_5, int * param_6)
 * body: 004564e0-00456553
 */

undefined4 __cdecl
FUN_004564e0(short *param_1,char *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
            int *param_6)

{
  char *_Source;
  undefined4 uVar1;
  
  if (*param_1 != 0x66) {
    uVar1 = FUN_00456560(param_1,param_2,param_3,param_6);
    return uVar1;
  }
  _Source = *(char **)(param_1 + 7);
  if (_Source != (char *)0x0) {
    if (*(uint *)(param_1 + 5) < param_3) {
      _strncpy(param_2,_Source,param_3 - 1);
      param_2[param_3 - 1] = '\0';
      return 0;
    }
    *param_4 = _Source;
    *param_5 = *(undefined4 *)(param_1 + 5);
    return 0;
  }
  *param_2 = '\0';
  return 0;
}


