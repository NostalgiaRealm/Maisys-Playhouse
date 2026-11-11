
/* ==== FUN_1000a240 @ 1000a240 ==== 
 * signature: undefined __cdecl FUN_1000a240(char * param_1, int param_2)
 * body: 1000a240-1000a268
 */

void __cdecl FUN_1000a240(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_100094f0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return;
}


