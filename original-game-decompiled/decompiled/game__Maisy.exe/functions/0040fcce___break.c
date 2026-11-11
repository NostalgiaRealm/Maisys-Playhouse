
/* ==== __break @ 0040fcce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fcce-0040fcce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


