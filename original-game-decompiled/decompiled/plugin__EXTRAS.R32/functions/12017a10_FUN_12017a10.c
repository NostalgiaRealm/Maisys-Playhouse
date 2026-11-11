
/* ==== FUN_12017a10 @ 12017a10 ==== 
 * signature: int __cdecl FUN_12017a10(int param_1, undefined2 * param_2)
 * body: 12017a10-12017add
 */

int __cdecl FUN_12017a10(int param_1,undefined2 *param_2)

{
  int iVar1;
  code *pcVar2;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14 [7];
  int local_6;
  
  FUN_12027790(0,local_14,0);
  iVar1 = FUN_12017ae0(param_1,local_14,1);
  if (iVar1 == 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,7,&local_1c);
    DAT_12039a9c = (*pcVar2)(local_1c,param_1,0x2f,local_6,&local_18);
    *param_2 = 0x69;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 1) = local_18;
    *(undefined4 *)(param_2 + 7) = 0;
  }
  if (local_6 != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
    DAT_12039a9c = (*pcVar2)(local_1c,local_6);
  }
  return iVar1;
}


