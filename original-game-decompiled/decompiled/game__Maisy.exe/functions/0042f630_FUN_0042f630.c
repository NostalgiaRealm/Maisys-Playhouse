
/* ==== FUN_0042f630 @ 0042f630 ==== 
 * signature: byte * __cdecl FUN_0042f630(byte * param_1, byte * param_2)
 * body: 0042f630-0042f6c8
 */

byte * __cdecl FUN_0042f630(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *local_c;
  
  local_c = param_1;
  iVar3 = _toupper((uint)*param_2);
  pbVar1 = local_c;
  if ((char)iVar3 == '\0') {
    return param_1;
  }
  do {
    do {
      local_c = pbVar1;
      pbVar1 = local_c + 1;
      iVar4 = _toupper((uint)*local_c);
      if ((char)iVar4 == '\0') {
        return (byte *)0x0;
      }
      pbVar6 = pbVar1;
      pbVar2 = param_2;
    } while ((char)iVar4 != (char)iVar3);
    do {
      iVar4 = _toupper((uint)*pbVar6);
      iVar5 = _toupper((uint)pbVar2[1]);
      if ((char)iVar4 != (char)iVar5) break;
      pbVar6 = pbVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while ((char)iVar4 != '\0');
    if ((char)iVar5 == '\0') {
      return local_c;
    }
  } while( true );
}


