
/* ==== FUN_00482660 @ 00482660 ==== 
 * signature: undefined4 __cdecl FUN_00482660(char * param_1, int param_2)
 * body: 00482660-00482764
 */

undefined4 __cdecl FUN_00482660(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_308 [256];
  char local_208 [256];
  char local_108 [256];
  int local_8;
  
  if (param_1 != (char *)0x0) {
    iVar4 = -1;
    pcVar3 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      *(undefined4 *)(param_2 + 6) = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)(param_2 + 10) = 0xffffffff;
      *(undefined4 *)(param_2 + 0xe) = 0;
      FUN_00482770(param_1,0xffffffff,0,local_308);
      uVar2 = FUN_004825f0(DAT_004dcd34,(int)local_308,(undefined4 *)(param_2 + 2),&local_8);
      if ((char)uVar2 != '\0') {
        FUN_00482770(param_1,local_8,1,local_208);
        if (local_208[0] != '\0') {
          pcVar3 = FUN_0043b970(local_208);
          *(char **)(param_2 + 6) = pcVar3;
        }
        FUN_00482770(param_1,local_8,2,local_108);
        if (local_108[0] != '\0') {
          pcVar3 = FUN_0043b970(local_108);
          *(char **)(param_2 + 0xe) = pcVar3;
        }
        FUN_00482770(param_1,local_8,3,(undefined1 *)(param_2 + 0x12));
      }
      return 0;
    }
  }
  return 0x60002;
}


