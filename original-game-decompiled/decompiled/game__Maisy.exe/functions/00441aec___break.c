
/* ==== __break @ 00441aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441aec-00441aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


