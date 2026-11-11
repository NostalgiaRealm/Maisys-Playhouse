
/* ==== FUN_110025f0 @ 110025f0 ==== 
 * signature: undefined __cdecl FUN_110025f0(short * param_1, short * param_2)
 * body: 110025f0-1100261f
 */

void __cdecl FUN_110025f0(short *param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  
  FUN_11002620(param_2);
  psVar2 = param_2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    psVar2 = psVar2 + 2;
  }
  *psVar2 = *param_1;
  if (*param_2 == 0x1c) {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}


