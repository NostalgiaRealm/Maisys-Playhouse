
/* ==== FUN_11001e10 @ 11001e10 ==== 
 * signature: undefined __cdecl FUN_11001e10(undefined4 * param_1, int param_2)
 * body: 11001e10-11001eb1
 */

void __cdecl FUN_11001e10(undefined4 *param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  uint local_4;
  
  local_4 = 0;
  psVar1 = (short *)(param_2 + 0xc);
  cVar2 = FUN_11006310(psVar1,'\0');
  if (cVar2 != '\0') {
    FUN_11006270(&local_4,'\0');
  }
  cVar2 = FUN_11006310(psVar1,'\x01');
  if (cVar2 != '\0') {
    FUN_11006270(&local_4,'\x01');
  }
  cVar2 = FUN_11006310(psVar1,'\x02');
  if (cVar2 != '\0') {
    FUN_11006270(&local_4,'\x02');
  }
  FUN_11017d10(param_1,*(undefined4 *)(param_2 + 0x20),(short *)(param_2 + 0x28),
               *(undefined4 *)(param_2 + 0x24),local_4,param_2 + 0x6c,param_2 + 0x7e,
               (short *)(param_2 + 0x38),'\0','\x01');
  return;
}


