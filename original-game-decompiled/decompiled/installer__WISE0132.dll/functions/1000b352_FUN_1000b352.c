
/* ==== FUN_1000b352 @ 1000b352 ==== 
 * signature: undefined __cdecl FUN_1000b352(char * param_1)
 * body: 1000b352-1000b39d
 */

void __cdecl FUN_1000b352(char *param_1)

{
  undefined *puVar1;
  
  if (DAT_100238d4 != (char *)0x0) {
    _strncpy(DAT_100238d4,param_1,0x100);
    DAT_100238d4[0xff] = '\0';
  }
  puVar1 = PTR_s_Installation_Aborted__1001f04c;
  if (DAT_100240b8 != 0) {
    puVar1 = *(undefined **)(DAT_100240b8 + 0x44);
  }
  FUN_1001277f((HWND)0x0,param_1,puVar1,2);
  return;
}


