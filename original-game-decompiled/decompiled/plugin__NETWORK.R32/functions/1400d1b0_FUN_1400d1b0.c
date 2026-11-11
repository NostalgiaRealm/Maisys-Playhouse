
/* ==== FUN_1400d1b0 @ 1400d1b0 ==== 
 * signature: int __cdecl FUN_1400d1b0(undefined2 * param_1, LONG param_2, char param_3)
 * body: 1400d1b0-1400d24a
 */

int __cdecl FUN_1400d1b0(undefined2 *param_1,LONG param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  HINSTANCE local_8;
  int local_4;
  
  iVar2 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1d,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,s_nProcessSrv_140262e0,&local_8);
  if (param_3 != '\0') {
    FUN_140095b0((undefined4 *)(param_1 + 5),FUN_1400d620,param_2,s_server_14026728,local_8);
    iVar2 = FUN_140095b0((undefined4 *)(param_1 + 7),FUN_1400d6d0,param_2,s_Client_14026720,local_8)
    ;
    *param_1 = 3;
    iVar2 = -(uint)(iVar2 == 0);
  }
  return iVar2;
}


