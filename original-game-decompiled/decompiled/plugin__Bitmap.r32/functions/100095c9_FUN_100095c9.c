
/* ==== FUN_100095c9 @ 100095c9 ==== 
 * signature: undefined __fastcall FUN_100095c9(undefined4 param_1, byte param_2)
 * body: 100095c9-100095cb
 */

void __fastcall FUN_100095c9(undefined4 param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 uVar5;
  char *pcVar4;
  char *unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar3;
  
  bVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + param_2;
  uVar5 = (undefined3)((uint)unaff_ESI >> 8);
  cVar2 = ((char)unaff_ESI + 'j') - CARRY1(bVar1,param_2);
  pbVar3 = (byte *)CONCAT31(uVar5,cVar2);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + param_2;
  cVar2 = cVar2 + -0x6a + CARRY1(bVar1,param_2);
  pcVar4 = (char *)CONCAT31(uVar5,cVar2);
  *pcVar4 = *pcVar4 + param_2;
  pcVar4 = (char *)(CONCAT31(uVar5,cVar2) | 0x96);
  *pcVar4 = *pcVar4 + param_2;
  pcVar4 = (char *)CONCAT31(uVar5,(char)pcVar4 + -0x6a);
  *pcVar4 = *pcVar4 + param_2;
  *unaff_EBP = *unaff_EBP + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


