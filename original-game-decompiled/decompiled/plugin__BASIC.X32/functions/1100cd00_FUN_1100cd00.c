
/* ==== FUN_1100cd00 @ 1100cd00 ==== 
 * signature: undefined __cdecl FUN_1100cd00(undefined4 * param_1, int param_2, char param_3)
 * body: 1100cd00-1100cd73
 */

void __cdecl FUN_1100cd00(undefined4 *param_1,int param_2,char param_3)

{
  char cVar1;
  
  FUN_1100c880(param_1,param_2);
  cVar1 = FUN_110062b0((uint *)(param_2 + 0xc),'\v');
  if (cVar1 == '\0') {
    if (param_3 != '\0') {
      *(undefined2 *)(param_2 + 0x2a) = 0;
    }
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe;
  }
  else {
    if (param_3 != '\0') {
      *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x28) + -1;
    }
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) | 1;
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_11006270((uint *)(param_2 + 0xc),'\x01');
  FUN_1100c970(0x1f5,param_1);
  return;
}


