
/* ==== FUN_12006be0 @ 12006be0 ==== 
 * signature: undefined4 __cdecl FUN_12006be0(undefined4 param_1, short * param_2)
 * body: 12006be0-12006c3e
 */

undefined4 __cdecl FUN_12006be0(undefined4 param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  CHAR local_100 [256];
  
  sVar3 = 2;
  while ((cVar1 = FUN_12006cc0((char)sVar3,local_100), cVar1 == '\0' ||
         (iVar2 = FUN_12006de0(local_100,param_1), iVar2 != 0))) {
    sVar3 = sVar3 + 1;
    if (0x19 < sVar3) {
      return 0x10000;
    }
  }
  *param_2 = sVar3;
  return 0;
}


