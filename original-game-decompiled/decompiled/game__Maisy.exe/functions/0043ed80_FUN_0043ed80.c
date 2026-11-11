
/* ==== FUN_0043ed80 @ 0043ed80 ==== 
 * signature: undefined4 __cdecl FUN_0043ed80(short * param_1, char * param_2)
 * body: 0043ed80-0043ee00
 */

uint __cdecl FUN_0043ed80(short *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  CHAR local_104 [256];
  
  sVar4 = *param_1;
  sVar6 = sVar4;
  if (sVar4 < 3) {
    sVar4 = 2;
    sVar6 = sVar4;
  }
  do {
    cVar1 = FUN_0043f490((char)sVar4,local_104);
    if ((cVar1 != '\0') && (uVar2 = FUN_0043d430(local_104,param_2), uVar2 == 0)) {
      *param_1 = sVar4;
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    iVar3 = (int)sVar4;
    iVar5 = (iVar3 + 1) % 0x1a;
    if (iVar5 < 3) {
      iVar5 = 2;
    }
    sVar4 = (short)iVar5;
  } while (sVar6 != sVar4);
  return (iVar3 + 1) / 0x1a & 0xffffff00;
}


