
/* ==== FUN_10009d10 @ 10009d10 ==== 
 * signature: undefined __cdecl FUN_10009d10(char * param_1)
 * body: 10009d10-10009d6c
 */

void __cdecl FUN_10009d10(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_1000a4a0((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10013608 < 2) {
        uVar3 = (byte)PTR_DAT_10013618[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_1000b830((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1001360c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


