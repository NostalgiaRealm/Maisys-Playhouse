
/* ==== FUN_0046d280 @ 0046d280 ==== 
 * signature: undefined4 __cdecl FUN_0046d280(undefined4 * param_1, int * param_2)
 * body: 0046d280-0046d319
 */

undefined4 __cdecl FUN_0046d280(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  pcVar1 = FUN_0046d200((char *)*param_1,'\'');
  if (pcVar1 != (char *)0x0) {
    *param_1 = pcVar1 + 1;
    pcVar3 = FUN_0046d200(pcVar1 + 1,'\'');
    if (pcVar3 == (char *)0x0) {
      return 0x80001;
    }
  }
  pcVar1 = FUN_0046d200((char *)*param_1,'[');
  if (pcVar1 == (char *)0x0) {
    *param_2 = 0;
  }
  else {
    *pcVar1 = '\0';
    pcVar2 = FUN_0046d200(pcVar1 + 1,']');
    if (pcVar2 == (char *)0x0) {
      *param_2 = 0;
      return 0x80003;
    }
    *pcVar2 = '\0';
    FUN_0046d160(pcVar1 + 1,*param_2);
  }
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  return 0;
}


