
/* ==== __store_num @ 11030b40 ==== 
 * signature: undefined __cdecl __store_num(int param_1, uint param_2, int * param_3, uint * param_4)
 * body: 11030b40-11030bc7
 * note: Library Function - Single Match  __store_num  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __store_num
   
   Library: Visual Studio 1998 Release */

void __cdecl __store_num(int param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_11037b14 != 0) {
    FUN_11030bd0(param_1,param_3,param_4);
    return;
  }
  if (param_2 < *param_4) {
    DAT_11037b14 = 0;
    uVar1 = 0;
    uVar2 = param_2;
    while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
      *(char *)(*param_3 + uVar2) = (char)(param_1 % 10) + '0';
      param_1 = param_1 / 10;
      uVar1 = param_2;
    }
    *param_3 = *param_3 + uVar1;
    *param_4 = *param_4 - uVar1;
    return;
  }
  *param_4 = 0;
  return;
}


