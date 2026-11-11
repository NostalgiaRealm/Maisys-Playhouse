
/* ==== FUN_100099e5 @ 100099e5 ==== 
 * signature: char * __cdecl FUN_100099e5(char * param_1, byte param_2)
 * body: 100099e5-10009a38
 */

char * __cdecl FUN_100099e5(char *param_1,byte param_2)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if ((param_2 & 4) != 0) {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      if (DAT_100200d4 < 2) {
        uVar1 = (byte)PTR_DAT_1001fec8[*param_1 * 2] & 2;
      }
      else {
        uVar1 = FUN_10015ac0((int)*param_1,2);
      }
      if (uVar1 != 0) {
        *pcVar2 = *param_1;
        pcVar2 = pcVar2 + 1;
      }
    }
    *pcVar2 = '\0';
    return pcVar2;
  }
  return param_1;
}


