
/* ==== FUN_110035c9 @ 110035c9 ==== 
 * signature: undefined __fastcall FUN_110035c9(undefined4 param_1, char param_2)
 * body: 110035c9-110035cb
 */

void __fastcall FUN_110035c9(undefined4 param_1,char param_2)

{
  code *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(0x35,(char)param_1));
  *pcVar2 = *pcVar2 + param_2;
  *pcVar2 = *pcVar2 + '5';
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


