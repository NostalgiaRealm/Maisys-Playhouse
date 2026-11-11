
/* ==== FUN_0043e000 @ 0043e000 ==== 
 * signature: undefined4 __cdecl FUN_0043e000(char * param_1, short * param_2)
 * body: 0043e000-0043e061
 */

undefined4 __cdecl FUN_0043e000(char *param_1,short *param_2)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  CHAR local_104 [256];
  
  sVar3 = 2;
  do {
    cVar1 = FUN_0043f490((char)sVar3,local_104);
    if (cVar1 != '\0') {
      uVar2 = FUN_0043d430(local_104,param_1);
      if (uVar2 == 0) {
        *param_2 = sVar3;
        return 0;
      }
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x1a);
  return 0x10000;
}


