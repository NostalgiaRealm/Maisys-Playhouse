
/* ==== FUN_1000c2f8 @ 1000c2f8 ==== 
 * signature: undefined __cdecl FUN_1000c2f8(HANDLE param_1, char * param_2)
 * body: 1000c2f8-1000c338
 */

void __cdecl FUN_1000c2f8(HANDLE param_1,char *param_2)

{
  int iVar1;
  DWORD DVar2;
  char cVar3;
  
  DVar2 = 0;
  cVar3 = *param_2;
  while ((cVar3 != '\0' && (cVar3 != '\x7f'))) {
    iVar1 = DVar2 + 1;
    DVar2 = DVar2 + 1;
    cVar3 = param_2[iVar1];
  }
  if ((int)DVar2 < 1) {
    DVar2 = 1;
  }
  else {
    DVar2 = FileWrite(param_1,param_2,DVar2);
  }
  if (0 < (int)DVar2) {
    FileWrite(param_1,&DAT_1001f3a4,2);
  }
  return;
}


