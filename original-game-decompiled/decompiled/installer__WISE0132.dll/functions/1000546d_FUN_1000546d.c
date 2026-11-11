
/* ==== FUN_1000546d @ 1000546d ==== 
 * signature: undefined __stdcall FUN_1000546d(void)
 * body: 1000546d-100054e8
 */

void FUN_1000546d(void)

{
  char *pcVar1;
  byte *pbVar2;
  LPCSTR pCVar3;
  int iVar4;
  byte local_104 [256];
  
  if ((*(byte *)(DAT_10023310 + 2) & 0x80) == 0) {
    FUN_100057bd();
  }
  else {
    pcVar1 = FUN_1000bc0e((char *)(DAT_10023310 + 0x2b));
    for (iVar4 = DAT_10024020; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar1 = FUN_1000bc0e(pcVar1);
    }
    pbVar2 = (byte *)FUN_1000bc0e(pcVar1);
    FUN_10009eff(local_104,pbVar2);
    pCVar3 = FUN_10014834((LPCSTR)local_104,0x5c);
    FUN_100054e9((LPCSTR)local_104,(int)pCVar3 - (int)local_104);
  }
  return;
}


