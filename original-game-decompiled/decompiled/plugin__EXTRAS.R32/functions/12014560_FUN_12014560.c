
/* ==== FUN_12014560 @ 12014560 ==== 
 * signature: uint __cdecl FUN_12014560(int param_1, int param_2)
 * body: 12014560-120145d6
 */

uint __cdecl FUN_12014560(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x10000;
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    uVar1 = FUN_12015760(param_1,param_1 + 0x5c);
  }
  else if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
          (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10))) {
    uVar1 = FUN_12015320(param_1);
  }
  if ((uVar1 & 0xffff0000) == 0xa0000) {
    *(uint *)(param_1 + 100) = uVar1 - 0x9ffff;
    uVar1 = 0;
  }
  return uVar1;
}


