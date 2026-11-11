
/* ==== __break @ 00472fec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472fec-00472fec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


