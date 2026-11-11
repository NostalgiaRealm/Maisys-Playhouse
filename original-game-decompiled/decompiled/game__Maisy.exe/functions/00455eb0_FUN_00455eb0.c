
/* ==== FUN_00455eb0 @ 00455eb0 ==== 
 * signature: undefined4 __cdecl FUN_00455eb0(short * param_1, int param_2)
 * body: 00455eb0-00455eda
 */

undefined4 __cdecl FUN_00455eb0(short *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0x76) && (*(char **)(param_1 + 7) != (char *)0x0)) {
    uVar1 = FUN_00482660(*(char **)(param_1 + 7),param_2);
    return uVar1;
  }
  return 0x60002;
}


