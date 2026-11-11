
/* ==== __break @ 0040fccc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fccc-0040fccc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


