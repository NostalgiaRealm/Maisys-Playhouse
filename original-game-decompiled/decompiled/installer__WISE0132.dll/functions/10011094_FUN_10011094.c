
/* ==== FUN_10011094 @ 10011094 ==== 
 * signature: undefined __cdecl FUN_10011094(LPCSTR param_1, LPSTR param_2)
 * body: 10011094-1001117b
 */

void __cdecl FUN_10011094(LPCSTR param_1,LPSTR param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  CHAR local_24c [584];
  
  *param_2 = '\0';
  if (DAT_10023ac0 == '\0') {
    pcVar5 = (char *)FUN_10015990(&DAT_1001fd00);
    if (pcVar5 == (char *)0x0) {
      return;
    }
  }
  else {
    pcVar5 = &DAT_10023ac0;
  }
  cVar1 = *pcVar5;
  do {
    if (cVar1 == '\0') {
      *param_2 = '\0';
      return;
    }
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar2 = (byte)PTR_DAT_1001fec8[*pcVar5 * 2] & 8;
      }
      else {
        uVar2 = FUN_10015ac0((int)*pcVar5,8);
      }
      if ((uVar2 == 0) && (pcVar4 = param_2, *pcVar5 != ';')) break;
      pcVar5 = pcVar5 + 1;
    }
    for (; (cVar1 = *pcVar5, cVar1 != '\0' && (cVar1 != ';')); pcVar5 = pcVar5 + 1) {
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    }
    if ((pcVar4 != param_2) && (pcVar4[-1] == '\\')) {
      pcVar4 = pcVar4 + -1;
    }
    *pcVar4 = '\0';
    if (pcVar4 != param_2) {
      lstrcatA(param_2,&DAT_1001f314);
      lstrcatA(param_2,param_1);
      iVar3 = FUN_100120c5(param_2,7,local_24c);
      FUN_1001221a((int)local_24c);
      if (iVar3 == 0) {
        return;
      }
    }
    cVar1 = *pcVar5;
  } while( true );
}


