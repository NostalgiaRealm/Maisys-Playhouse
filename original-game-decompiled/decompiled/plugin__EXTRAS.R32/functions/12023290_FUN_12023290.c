
/* ==== FUN_12023290 @ 12023290 ==== 
 * signature: undefined __cdecl FUN_12023290(int param_1)
 * body: 12023290-120232e6
 */

void __cdecl FUN_12023290(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,0,&local_4);
  iVar3 = param_1 + 0x10;
  iVar2 = FUN_120230c0(*(short *)(param_1 + 0xe),'\0');
  DAT_12039a9c = (*pcVar1)(local_4,(int)(short)iVar2,iVar3);
  return;
}


