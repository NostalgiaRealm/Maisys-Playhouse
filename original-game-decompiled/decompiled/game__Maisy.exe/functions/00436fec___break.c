
/* ==== __break @ 00436fec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436fec-00436fec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


