
/* ==== FUN_0043f490 @ 0043f490 ==== 
 * signature: undefined __cdecl FUN_0043f490(char param_1, LPSTR param_2)
 * body: 0043f490-0043f4e9
 */

void __cdecl FUN_0043f490(char param_1,LPSTR param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_14 [12];
  DWORD local_8;
  
  uVar2 = 0xffffffff;
  pcVar4 = (char *)&DAT_004db588;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_14;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  local_14[0] = param_1 + 'A';
  GetVolumeInformationA(local_14,param_2,0xff,(LPDWORD)0x0,&local_8,&local_8,(LPSTR)0x0,0);
  return;
}


