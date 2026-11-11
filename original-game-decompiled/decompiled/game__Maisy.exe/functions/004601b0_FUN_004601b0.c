
/* ==== FUN_004601b0 @ 004601b0 ==== 
 * signature: undefined __cdecl FUN_004601b0(HDC param_1, int param_2, char * param_3)
 * body: 004601b0-0046021f
 */

void __cdecl FUN_004601b0(HDC param_1,int param_2,char *param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar4 = *(uint *)(param_2 + 8);
  uVar3 = (int)uVar4 >> 0x1f;
  sVar2 = FUN_0045fe30(param_2 + 0x28);
  FUN_0045fec0(param_3,(iVar1 + 3U & 0xfffffffc) * ((uVar4 ^ uVar3) - uVar3),-1,(char)sVar2);
  uVar4 = (int)*(uint *)(param_2 + 8) >> 0x1f;
  BitBlt(DAT_004da398,0,0,*(int *)(param_2 + 4),(*(uint *)(param_2 + 8) ^ uVar4) - uVar4,param_1,0,0
         ,0xcc0020);
  GdiFlush();
  return;
}


