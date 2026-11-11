
/* ==== FUN_00483190 @ 00483190 ==== 
 * signature: undefined4 __cdecl FUN_00483190(undefined4 param_1, int param_2, undefined2 * param_3)
 * body: 00483190-00483312
 */

undefined4 __cdecl FUN_00483190(undefined4 param_1,int param_2,undefined2 *param_3)

{
  code *pcVar1;
  int local_8;
  
  switch(*param_3) {
  case 0:
  case 1:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x14:
  case 0x17:
  case 100:
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x7c:
    break;
  default:
    *param_3 = 0;
    return 0x10000;
  case 0x65:
    if (((param_2 == *(int *)(param_3 + 1)) || (*(int *)(param_3 + 1) == -1)) &&
       (*(int *)(param_3 + 7) != 0)) {
      pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,1,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,*(undefined4 *)(param_3 + 7));
      *param_3 = 0;
      *(undefined4 *)(param_3 + 7) = 0;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      return 0;
    }
    break;
  case 0x66:
  case 0x6f:
  case 0x76:
    if (((param_2 == *(int *)(param_3 + 1)) || (*(int *)(param_3 + 1) == -1)) &&
       (*(int *)(param_3 + 7) != 0)) {
      pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0x10,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,*(undefined4 *)(param_3 + 7));
      *param_3 = 0;
      *(undefined4 *)(param_3 + 7) = 0;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      return 0;
    }
    break;
  case 0x69:
    FUN_0048b750((int)param_3);
    *param_3 = 0;
    return 0;
  case 0x6d:
    if (*(int *)(param_3 + 2) != 0) {
      pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,1,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,*(undefined4 *)(param_3 + 2));
      *param_3 = 0;
      *(undefined4 *)(param_3 + 2) = 0;
      param_3[1] = 0;
      return 0;
    }
    break;
  case 0x73:
    if (*(LPVOID *)(param_3 + 5) != (LPVOID)0x0) {
      FUN_0043ba20(*(LPVOID *)(param_3 + 5));
      *(undefined4 *)(param_3 + 5) = 0;
    }
  }
  *param_3 = 0;
  return 0;
}


