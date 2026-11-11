
/* ==== FUN_1000a110 @ 1000a110 ==== 
 * signature: undefined __cdecl FUN_1000a110(undefined4 * param_1, char * param_2, uint param_3, int param_4)
 * body: 1000a110-1000a1c5
 */

void __cdecl FUN_1000a110(undefined4 *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_1000be90(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_1000bdf0(pcVar3,param_3,(int)&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < (int)param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_1000a050(param_2,param_3,&local_28,'\x01');
    return;
  }
  FUN_10009ee0(param_2,param_3,param_4,&local_28,'\x01');
  return;
}


