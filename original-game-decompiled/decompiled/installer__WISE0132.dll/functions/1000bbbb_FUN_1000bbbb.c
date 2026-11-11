
/* ==== FUN_1000bbbb @ 1000bbbb ==== 
 * signature: uint __cdecl FUN_1000bbbb(uint param_1)
 * body: 1000bbbb-1000bc0d
 */

uint __cdecl FUN_1000bbbb(uint param_1)

{
  CHAR local_21c [256];
  CHAR local_11c [256];
  CHAR local_1c [16];
  DWORD local_c;
  DWORD local_8;
  
  wsprintfA(local_1c,&DAT_1001f6c0,(param_1 & 0xffff) + 0x40);
  GetVolumeInformationA(local_1c,local_21c,0x100,&param_1,&local_c,&local_8,local_11c,0x100);
  return param_1;
}


