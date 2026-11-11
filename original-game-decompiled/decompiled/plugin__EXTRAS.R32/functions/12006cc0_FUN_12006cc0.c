
/* ==== FUN_12006cc0 @ 12006cc0 ==== 
 * signature: undefined __cdecl FUN_12006cc0(char param_1, LPSTR param_2)
 * body: 12006cc0-12006d31
 */

void __cdecl FUN_12006cc0(char param_1,LPSTR param_2)

{
  code *pcVar1;
  int local_14;
  DWORD DStack_10;
  char local_c [12];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,local_c,&DAT_12037254);
  local_c[0] = param_1 + 'A';
  GetVolumeInformationA(local_c,param_2,0xff,(LPDWORD)0x0,&DStack_10,&DStack_10,(LPSTR)0x0,0);
  return;
}


