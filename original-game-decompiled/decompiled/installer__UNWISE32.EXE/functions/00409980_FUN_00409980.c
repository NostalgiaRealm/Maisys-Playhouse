
/* ==== FUN_00409980 @ 00409980 ==== 
 * signature: uint __cdecl FUN_00409980(char * param_1, char * param_2)
 * body: 00409980-004099f9
 */

uint __cdecl FUN_00409980(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (pcVar4 = param_2, cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
  }
  do {
    pcVar5 = pcVar5 + -1;
    pcVar4 = pcVar4 + -1;
    if (pcVar5 < param_1) {
LAB_004099ef:
      return (uint)(param_2 <= pcVar4);
    }
    if (pcVar4 < param_2) {
      if (param_1 <= pcVar5) {
        return 0xffffffff;
      }
      goto LAB_004099ef;
    }
    uVar2 = FUN_0040a1b0((int)*pcVar4);
    uVar3 = FUN_0040a1b0((int)*pcVar5);
    if (uVar3 != uVar2) {
      uVar2 = FUN_0040a1b0((int)*pcVar4);
      uVar3 = FUN_0040a1b0((int)*pcVar5);
      return uVar3 - uVar2;
    }
  } while( true );
}


