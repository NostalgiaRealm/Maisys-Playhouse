
/* ==== FUN_00476960 @ 00476960 ==== 
 * signature: undefined __cdecl FUN_00476960(int * param_1, int param_2, undefined4 param_3)
 * body: 00476960-00476995
 */

void __cdecl FUN_00476960(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x254))
                    (*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),param_2 + 0x24,
                     param_3);
  if (cVar1 == '\0') {
    FUN_0046b730(param_1,param_2);
  }
  return;
}


